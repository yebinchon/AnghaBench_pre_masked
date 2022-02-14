
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcm_loop_tpg {TYPE_1__* tl_hba; } ;
struct se_portal_group {struct tcm_loop_tpg* se_tpg_fabric_ptr; } ;
struct TYPE_2__ {char* tl_wwn_address; } ;



__attribute__((used)) static char *FUNC_0(struct se_portal_group *VAR_0)
{
 struct tcm_loop_tpg *VAR_1 = VAR_0->se_tpg_fabric_ptr;



 return &VAR_1->tl_hba->tl_wwn_address[0];
}
