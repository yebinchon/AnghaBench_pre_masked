
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct whc_qset {int in_hw_list; int in_sw_list; int list_node; } ;
struct whc {int periodic_removed_list; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct whc *VAR_0, struct whc_qset *VAR_1)
{
 FUNC_0(&VAR_1->list_node, &VAR_0->periodic_removed_list);
 VAR_1->in_hw_list = 0;
 VAR_1->in_sw_list = 0;
}
