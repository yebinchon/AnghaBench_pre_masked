
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb35_reg_queue {struct urb* urb; struct wb35_reg_queue* Next; } ;
struct wb35_reg {scalar_t__ EP0vm_state; int EP0VM_spin_lock; struct wb35_reg_queue* reg_first; struct wb35_reg_queue* reg_last; } ;
struct urb {int dummy; } ;
struct hw_data {struct wb35_reg reg; } ;


 int FUNC_0 (struct hw_data*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct wb35_reg_queue*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct urb*) ;

void
FUNC_7(struct hw_data * VAR_1)
{
 struct wb35_reg *VAR_2 = &VAR_1->reg;
 struct urb *VAR_3;
 struct wb35_reg_queue *VAR_4;


 FUNC_0(VAR_1);


 do {
  FUNC_2(10);
 } while (VAR_2->EP0vm_state != VAR_0);
 FUNC_2(10);


 FUNC_4( &VAR_2->EP0VM_spin_lock );
 VAR_4 = VAR_2->reg_first;
 while (VAR_4) {
  if (VAR_4 == VAR_2->reg_last)
   VAR_2->reg_last = ((void*)0);
  VAR_2->reg_first = VAR_2->reg_first->Next;

  VAR_3 = VAR_4->urb;
  FUNC_5( &VAR_2->EP0VM_spin_lock );
  if (VAR_3) {
   FUNC_6(VAR_3);
   FUNC_1(VAR_4);
  } else {



  }
  FUNC_4( &VAR_2->EP0VM_spin_lock );

  VAR_4 = VAR_2->reg_first;
 }
 FUNC_5( &VAR_2->EP0VM_spin_lock );
}
