
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct whc_qset {int in_sw_list; int list_node; } ;
struct whc {int * periodic_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct whc*,struct whc_qset*) ;
 int FUNC_2 (struct whc*,struct whc_qset*) ;

__attribute__((used)) static void FUNC_3(struct whc *VAR_0, struct whc_qset *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);

 FUNC_1(VAR_0, VAR_1);
 FUNC_0(&VAR_1->list_node, &VAR_0->periodic_list[VAR_2]);
 VAR_1->in_sw_list = 1;
}
