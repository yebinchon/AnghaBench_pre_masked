
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct binder_transaction {TYPE_1__* buffer; scalar_t__ need_reply; struct binder_thread* from; struct binder_transaction* from_parent; } ;
struct binder_thread {struct binder_transaction* transaction_stack; } ;
struct TYPE_2__ {int * transaction; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct binder_transaction*) ;

__attribute__((used)) static void FUNC_3(struct binder_thread *VAR_1,
       struct binder_transaction *VAR_2)
{
 if (VAR_1) {
  FUNC_0(VAR_1->transaction_stack != VAR_2);
  FUNC_0(VAR_1->transaction_stack->from != VAR_1);
  VAR_1->transaction_stack =
   VAR_1->transaction_stack->from_parent;
  VAR_2->from = ((void*)0);
 }
 VAR_2->need_reply = 0;
 if (VAR_2->buffer)
  VAR_2->buffer->transaction = ((void*)0);
 FUNC_2(VAR_2);
 FUNC_1(VAR_0);
}
