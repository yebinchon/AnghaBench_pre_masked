
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct t10_alua_tg_pt_gp_member {int tg_pt_gp_mem_lock; struct t10_alua_tg_pt_gp* tg_pt_gp; } ;
struct config_item {int dummy; } ;
struct TYPE_2__ {struct config_item cg_item; } ;
struct t10_alua_tg_pt_gp {char* tg_pt_gp_id; int tg_pt_gp_alua_access_status; int tg_pt_gp_alua_access_state; TYPE_1__ tg_pt_gp_group; } ;
struct se_port {int sep_tg_pt_secondary_stat; int sep_tg_pt_secondary_offline; struct t10_alua_tg_pt_gp_member* sep_alua_tg_pt_gp_mem; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (int *) ;
 char* FUNC_1 (struct config_item*) ;
 char* FUNC_2 (scalar_t__) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char*,char*,char*,char*,char*,char*,char*,char*) ;

ssize_t FUNC_7(struct se_port *VAR_0, char *VAR_1)
{
 struct config_item *VAR_2;
 struct t10_alua_tg_pt_gp *VAR_3;
 struct t10_alua_tg_pt_gp_member *VAR_4;
 ssize_t VAR_5 = 0;

 VAR_4 = VAR_0->sep_alua_tg_pt_gp_mem;
 if (!VAR_4)
  return VAR_5;

 FUNC_4(&VAR_4->tg_pt_gp_mem_lock);
 VAR_3 = VAR_4->tg_pt_gp;
 if (VAR_3) {
  VAR_2 = &VAR_3->tg_pt_gp_group.cg_item;
  VAR_5 += FUNC_6(VAR_1, "TG Port Alias: %s\nTG Port Group ID:"
   " %hu\nTG Port Primary Access State: %s\nTG Port "
   "Primary Access Status: %s\nTG Port Secondary Access"
   " State: %s\nTG Port Secondary Access Status: %s\n",
   FUNC_1(VAR_2), VAR_3->tg_pt_gp_id,
   FUNC_2(FUNC_0(
     &VAR_3->tg_pt_gp_alua_access_state)),
   FUNC_3(
    VAR_3->tg_pt_gp_alua_access_status),
   (FUNC_0(&VAR_0->sep_tg_pt_secondary_offline)) ?
   "Offline" : "None",
   FUNC_3(VAR_0->sep_tg_pt_secondary_stat));
 }
 FUNC_5(&VAR_4->tg_pt_gp_mem_lock);

 return VAR_5;
}
