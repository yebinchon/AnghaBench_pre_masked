
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct whc_qset {int remove_complete; int list_node; scalar_t__ remove; } ;
struct whc {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct whc *VAR_0, struct whc_qset *VAR_1)
{
 VAR_1->remove = 0;
 FUNC_1(&VAR_1->list_node);
 FUNC_0(&VAR_1->remove_complete);
}
