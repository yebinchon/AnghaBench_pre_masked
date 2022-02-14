
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct t10_alua_tg_pt_gp_member {int tg_pt_gp_mem_lock; } ;
struct se_portal_group {TYPE_4__* se_tpg_tfo; } ;
struct se_port {int sep_rtpi; int sep_index; int sep_list; struct se_lun* sep_lun; struct se_portal_group* sep_tpg; } ;
struct se_lun {int lun_sep_lock; struct se_port* lun_sep; } ;
struct TYPE_6__ {int default_tg_pt_gp; } ;
struct se_device {int dev_port_count; TYPE_3__* transport; TYPE_2__ t10_alua; TYPE_1__* se_hba; int se_port_lock; int dev_sep_list; } ;
struct TYPE_8__ {int (* get_fabric_name ) () ;} ;
struct TYPE_7__ {scalar_t__ transport_type; int name; } ;
struct TYPE_5__ {int hba_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct t10_alua_tg_pt_gp_member*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct t10_alua_tg_pt_gp_member*,int ) ;
 struct t10_alua_tg_pt_gp_member* FUNC_2 (struct se_port*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(
 struct se_device *VAR_2,
 struct se_portal_group *VAR_3,
 struct se_port *VAR_4,
 struct se_lun *VAR_5)
{
 struct t10_alua_tg_pt_gp_member *VAR_6 = ((void*)0);

 FUNC_6(&VAR_2->se_port_lock);
 FUNC_6(&VAR_5->lun_sep_lock);
 VAR_4->sep_tpg = VAR_3;
 VAR_4->sep_lun = VAR_5;
 VAR_5->lun_sep = VAR_4;
 FUNC_7(&VAR_5->lun_sep_lock);

 FUNC_3(&VAR_4->sep_list, &VAR_2->dev_sep_list);
 FUNC_7(&VAR_2->se_port_lock);

 if (VAR_2->transport->transport_type != VAR_1 &&
     !(VAR_2->se_hba->hba_flags & VAR_0)) {
  VAR_6 = FUNC_2(VAR_4);
  if (FUNC_0(VAR_6) || !VAR_6) {
   FUNC_5("Unable to allocate t10_alua_tg_pt"
     "_gp_member_t\n");
   return;
  }
  FUNC_6(&VAR_6->tg_pt_gp_mem_lock);
  FUNC_1(VAR_6,
   VAR_2->t10_alua.default_tg_pt_gp);
  FUNC_7(&VAR_6->tg_pt_gp_mem_lock);
  FUNC_4("%s/%s: Adding to default ALUA Target Port"
   " Group: alua/default_tg_pt_gp\n",
   VAR_2->transport->name, VAR_3->se_tpg_tfo->get_fabric_name());
 }

 VAR_2->dev_port_count++;
 VAR_4->sep_index = VAR_4->sep_rtpi;
}
