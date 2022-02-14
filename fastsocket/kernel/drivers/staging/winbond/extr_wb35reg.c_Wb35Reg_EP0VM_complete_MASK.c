
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb35_reg_queue {struct wb35_reg_queue* Next; } ;
struct wb35_reg {void* EP0vm_state; scalar_t__ EP0VM_status; int EP0VM_spin_lock; struct wb35_reg_queue* reg_first; struct wb35_reg_queue* reg_last; int RegFireCount; } ;
struct urb {scalar_t__ status; scalar_t__ context; } ;
struct hw_data {int SurpriseRemove; struct wb35_reg reg; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct hw_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wb35_reg_queue*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct urb*) ;

void
FUNC_7(struct urb *VAR_2)
{
 struct hw_data * VAR_3 = (struct hw_data *)VAR_2->context;
 struct wb35_reg *VAR_4 = &VAR_3->reg;
 struct wb35_reg_queue *VAR_5;



 VAR_4->EP0vm_state = VAR_0;
 VAR_4->EP0VM_status = VAR_2->status;

 if (VAR_3->SurpriseRemove) {
  VAR_4->EP0vm_state = VAR_1;
  FUNC_1(&VAR_4->RegFireCount);
 } else {

  FUNC_4( &VAR_4->EP0VM_spin_lock );
  VAR_5 = VAR_4->reg_first;
  if (VAR_5 == VAR_4->reg_last)
   VAR_4->reg_last = ((void*)0);
  VAR_4->reg_first = VAR_4->reg_first->Next;
  FUNC_5( &VAR_4->EP0VM_spin_lock );

  if (VAR_4->EP0VM_status) {



   VAR_4->EP0vm_state = VAR_1;
   VAR_3->SurpriseRemove = 1;
  } else {



   FUNC_0(VAR_3);
  }

     FUNC_2(VAR_5);
 }

 FUNC_6(VAR_2);
}
