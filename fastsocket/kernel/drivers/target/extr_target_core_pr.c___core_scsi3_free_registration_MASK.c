
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct target_core_fabric_ops {int (* get_fabric_name ) () ;} ;
struct t10_reservation {int registration_lock; } ;
struct t10_pr_registration {char* pr_res_key; char* pr_res_generation; int pr_reg_abort_list; int pr_aptpl_buf; TYPE_4__* pr_reg_nacl; TYPE_3__* pr_reg_deve; scalar_t__ pr_reg_all_tg_pt; int pr_res_holders; int pr_reg_list; } ;
struct se_device {TYPE_2__* transport; struct t10_reservation t10_pr; } ;
struct list_head {int dummy; } ;
struct TYPE_8__ {char* initiatorname; TYPE_1__* se_tpg; } ;
struct TYPE_7__ {scalar_t__ pr_res_key; scalar_t__ def_pr_registered; } ;
struct TYPE_6__ {char* name; } ;
struct TYPE_5__ {struct target_core_fabric_ops* se_tpg_tfo; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct t10_pr_registration*,char*,int) ;
 int FUNC_2 (struct t10_pr_registration*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct t10_pr_registration*) ;
 int FUNC_6 (int *,struct list_head*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (char*,int ,...) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_16(
 struct se_device *VAR_2,
 struct t10_pr_registration *VAR_3,
 struct list_head *VAR_4,
 int VAR_5)
{
 struct target_core_fabric_ops *VAR_6 =
   VAR_3->pr_reg_nacl->se_tpg->se_tpg_tfo;
 struct t10_reservation *VAR_7 = &VAR_2->t10_pr;
 char VAR_8[VAR_0];
 int VAR_9;

 FUNC_8(VAR_8, 0, VAR_0);
 VAR_9 = FUNC_1(VAR_3, &VAR_8[0],
    VAR_0);

 VAR_3->pr_reg_deve->def_pr_registered = 0;
 VAR_3->pr_reg_deve->pr_res_key = 0;
 FUNC_7(&VAR_3->pr_reg_list);




 if (VAR_5)
  FUNC_2(VAR_3);






 while (FUNC_0(&VAR_3->pr_res_holders) != 0) {
  FUNC_11(&VAR_7->registration_lock);
  FUNC_9("SPC-3 PR [%s] waiting for pr_res_holders\n",
    VAR_6->get_fabric_name());
  FUNC_3();
  FUNC_10(&VAR_7->registration_lock);
 }

 FUNC_9("SPC-3 PR [%s] Service Action: UNREGISTER Initiator"
  " Node: %s%s\n", VAR_6->get_fabric_name(),
  VAR_3->pr_reg_nacl->initiatorname,
  (VAR_9) ? &VAR_8[0] : "");
 FUNC_9("SPC-3 PR [%s] for %s TCM Subsystem %s Object Target"
  " Port(s)\n", VAR_6->get_fabric_name(),
  (VAR_3->pr_reg_all_tg_pt) ? "ALL" : "SINGLE",
  VAR_2->transport->name);
 FUNC_9("SPC-3 PR [%s] SA Res Key: 0x%016Lx PRgeneration:"
  " 0x%08x\n", VAR_6->get_fabric_name(), VAR_3->pr_res_key,
  VAR_3->pr_res_generation);

 if (!VAR_4) {
  VAR_3->pr_reg_deve = ((void*)0);
  VAR_3->pr_reg_nacl = ((void*)0);
  FUNC_4(VAR_3->pr_aptpl_buf);
  FUNC_5(VAR_1, VAR_3);
  return;
 }




 FUNC_6(&VAR_3->pr_reg_abort_list, VAR_4);
}
