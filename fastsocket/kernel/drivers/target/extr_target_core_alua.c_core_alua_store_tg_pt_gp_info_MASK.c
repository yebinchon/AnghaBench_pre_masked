
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct t10_alua_tg_pt_gp_member {int tg_pt_gp_mem_lock; struct t10_alua_tg_pt_gp* tg_pt_gp; } ;
struct TYPE_8__ {int cg_item; } ;
struct t10_alua_tg_pt_gp {int tg_pt_gp_id; TYPE_4__ tg_pt_gp_group; } ;
struct se_portal_group {TYPE_2__* se_tpg_tfo; } ;
struct se_port {struct t10_alua_tg_pt_gp_member* sep_alua_tg_pt_gp_mem; struct se_lun* sep_lun; struct se_portal_group* sep_tpg; } ;
struct TYPE_7__ {int cg_item; } ;
struct se_lun {TYPE_3__ lun_group; struct se_device* lun_se_dev; } ;
struct TYPE_5__ {struct t10_alua_tg_pt_gp* default_tg_pt_gp; } ;
struct se_device {TYPE_1__ t10_alua; } ;
typedef size_t ssize_t ;
struct TYPE_6__ {int (* tpg_get_tag ) (struct se_portal_group*) ;int (* tpg_get_wwn ) (struct se_portal_group*) ;} ;


 size_t EINVAL ;
 size_t ENODEV ;
 int TG_PT_GROUP_NAME_BUF ;
 int __core_alua_attach_tg_pt_gp_mem (struct t10_alua_tg_pt_gp_member*,struct t10_alua_tg_pt_gp*) ;
 int __core_alua_drop_tg_pt_gp_mem (struct t10_alua_tg_pt_gp_member*,struct t10_alua_tg_pt_gp*) ;
 int config_item_name (int *) ;
 struct t10_alua_tg_pt_gp* core_alua_get_tg_pt_gp_by_name (struct se_device*,int ) ;
 int core_alua_put_tg_pt_gp_from_name (struct t10_alua_tg_pt_gp*) ;
 int memcpy (unsigned char*,char const*,size_t) ;
 int memset (unsigned char*,int ,int) ;
 int pr_debug (char*,char*,int ,int ,int ,int ,...) ;
 int pr_err (char*) ;
 int spin_lock (int *) ;
 int spin_unlock (int *) ;
 scalar_t__ strcmp (int ,char*) ;
 int strstrip (unsigned char*) ;
 int stub1 (struct se_portal_group*) ;
 int stub2 (struct se_portal_group*) ;
 int stub3 (struct se_portal_group*) ;
 int stub4 (struct se_portal_group*) ;

ssize_t core_alua_store_tg_pt_gp_info(
 struct se_port *port,
 const char *page,
 size_t count)
{
 struct se_portal_group *tpg;
 struct se_lun *lun;
 struct se_device *dev = port->sep_lun->lun_se_dev;
 struct t10_alua_tg_pt_gp *tg_pt_gp = ((void*)0), *tg_pt_gp_new = ((void*)0);
 struct t10_alua_tg_pt_gp_member *tg_pt_gp_mem;
 unsigned char buf[TG_PT_GROUP_NAME_BUF];
 int move = 0;

 tpg = port->sep_tpg;
 lun = port->sep_lun;

 tg_pt_gp_mem = port->sep_alua_tg_pt_gp_mem;
 if (!tg_pt_gp_mem)
  return 0;

 if (count > TG_PT_GROUP_NAME_BUF) {
  pr_err("ALUA Target Port Group alias too large!\n");
  return -EINVAL;
 }
 memset(buf, 0, TG_PT_GROUP_NAME_BUF);
 memcpy(buf, page, count);




 if (strcmp(strstrip(buf), "NULL")) {





  tg_pt_gp_new = core_alua_get_tg_pt_gp_by_name(dev,
     strstrip(buf));
  if (!tg_pt_gp_new)
   return -ENODEV;
 }

 spin_lock(&tg_pt_gp_mem->tg_pt_gp_mem_lock);
 tg_pt_gp = tg_pt_gp_mem->tg_pt_gp;
 if (tg_pt_gp) {




  if (!tg_pt_gp_new) {
   pr_debug("Target_Core_ConfigFS: Moving"
    " %s/tpgt_%hu/%s from ALUA Target Port Group:"
    " alua/%s, ID: %hu back to"
    " default_tg_pt_gp\n",
    tpg->se_tpg_tfo->tpg_get_wwn(tpg),
    tpg->se_tpg_tfo->tpg_get_tag(tpg),
    config_item_name(&lun->lun_group.cg_item),
    config_item_name(
     &tg_pt_gp->tg_pt_gp_group.cg_item),
    tg_pt_gp->tg_pt_gp_id);

   __core_alua_drop_tg_pt_gp_mem(tg_pt_gp_mem, tg_pt_gp);
   __core_alua_attach_tg_pt_gp_mem(tg_pt_gp_mem,
     dev->t10_alua.default_tg_pt_gp);
   spin_unlock(&tg_pt_gp_mem->tg_pt_gp_mem_lock);

   return count;
  }



  __core_alua_drop_tg_pt_gp_mem(tg_pt_gp_mem, tg_pt_gp);
  move = 1;
 }



 __core_alua_attach_tg_pt_gp_mem(tg_pt_gp_mem, tg_pt_gp_new);
 spin_unlock(&tg_pt_gp_mem->tg_pt_gp_mem_lock);
 pr_debug("Target_Core_ConfigFS: %s %s/tpgt_%hu/%s to ALUA"
  " Target Port Group: alua/%s, ID: %hu\n", (move) ?
  "Moving" : "Adding", tpg->se_tpg_tfo->tpg_get_wwn(tpg),
  tpg->se_tpg_tfo->tpg_get_tag(tpg),
  config_item_name(&lun->lun_group.cg_item),
  config_item_name(&tg_pt_gp_new->tg_pt_gp_group.cg_item),
  tg_pt_gp_new->tg_pt_gp_id);

 core_alua_put_tg_pt_gp_from_name(tg_pt_gp_new);
 return count;
}
