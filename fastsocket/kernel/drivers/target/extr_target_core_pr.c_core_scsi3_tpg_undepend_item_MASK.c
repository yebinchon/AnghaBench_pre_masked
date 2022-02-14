
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cg_item; } ;
struct se_portal_group {int tpg_pr_ref_count; TYPE_2__ tpg_group; TYPE_1__* se_tpg_tfo; } ;
struct TYPE_3__ {int tf_subsys; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct se_portal_group *VAR_0)
{
 FUNC_1(VAR_0->se_tpg_tfo->tf_subsys,
   &VAR_0->tpg_group.cg_item);

 FUNC_0(&VAR_0->tpg_pr_ref_count);
 FUNC_2();
}
