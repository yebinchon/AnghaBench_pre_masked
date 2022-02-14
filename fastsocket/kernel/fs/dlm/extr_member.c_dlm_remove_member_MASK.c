
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_member {int list; } ;
struct dlm_ls {int ls_num_nodes; int ls_nodes_gone; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct dlm_ls *VAR_0, struct dlm_member *VAR_1)
{
 FUNC_0(&VAR_1->list, &VAR_0->ls_nodes_gone);
 VAR_0->ls_num_nodes--;
}
