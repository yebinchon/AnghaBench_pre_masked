
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fib {int size; int * callback_data; int * callback; int flags; TYPE_2__* hw_fib_va; int type; struct fib* next; } ;
struct aac_dev {int fib_lock; struct fib* free_fib; } ;
struct TYPE_3__ {scalar_t__ XferState; } ;
struct TYPE_4__ {TYPE_1__ header; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

struct fib *FUNC_2(struct aac_dev *VAR_1)
{
 struct fib * VAR_2;
 unsigned long VAR_3;
 FUNC_0(&VAR_1->fib_lock, VAR_3);
 VAR_2 = VAR_1->free_fib;
 if(!VAR_2){
  FUNC_1(&VAR_1->fib_lock, VAR_3);
  return VAR_2;
 }
 VAR_1->free_fib = VAR_2->next;
 FUNC_1(&VAR_1->fib_lock, VAR_3);



 VAR_2->type = VAR_0;
 VAR_2->size = sizeof(struct fib);




 VAR_2->hw_fib_va->header.XferState = 0;
 VAR_2->flags = 0;
 VAR_2->callback = ((void*)0);
 VAR_2->callback_data = ((void*)0);

 return VAR_2;
}
