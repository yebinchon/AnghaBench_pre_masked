
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_lpar_connection {int state; int lock; int statemachine_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct veth_lpar_connection*) ;

__attribute__((used)) static void FUNC_5(struct veth_lpar_connection *VAR_2)
{
 if (!VAR_2)
  return;

 FUNC_2(&VAR_2->lock);
 VAR_2->state |= VAR_0 | VAR_1;
 FUNC_4(VAR_2);
 FUNC_3(&VAR_2->lock);




 if (FUNC_0(&VAR_2->statemachine_wq)) {
  FUNC_2(&VAR_2->lock);
  FUNC_4(VAR_2);
  FUNC_3(&VAR_2->lock);
 }


 FUNC_1();
}
