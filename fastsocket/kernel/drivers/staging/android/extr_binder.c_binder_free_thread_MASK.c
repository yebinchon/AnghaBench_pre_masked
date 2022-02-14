
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct binder_transaction {struct binder_transaction* from_parent; struct binder_thread* from; struct binder_transaction* to_parent; TYPE_1__* buffer; struct binder_thread* to_thread; int * to_proc; int debug_id; } ;
struct binder_thread {int todo; int pid; struct binder_transaction* transaction_stack; int rb_node; } ;
struct binder_proc {int pid; int threads; } ;
struct TYPE_2__ {int * transaction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int ,int ,int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct binder_transaction*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct binder_thread*) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int FUNC_7(struct binder_proc *VAR_3,
         struct binder_thread *VAR_4)
{
 struct binder_transaction *VAR_5;
 struct binder_transaction *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 FUNC_6(&VAR_4->rb_node, &VAR_3->threads);
 VAR_5 = VAR_4->transaction_stack;
 if (VAR_5 && VAR_5->to_thread == VAR_4)
  VAR_6 = VAR_5;
 while (VAR_5) {
  VAR_7++;
  FUNC_1(VAR_0,
        "binder: release %d:%d transaction %d "
        "%s, still active\n", VAR_3->pid, VAR_4->pid,
        VAR_5->debug_id,
        (VAR_5->to_thread == VAR_4) ? "in" : "out");

  if (VAR_5->to_thread == VAR_4) {
   VAR_5->to_proc = ((void*)0);
   VAR_5->to_thread = ((void*)0);
   if (VAR_5->buffer) {
    VAR_5->buffer->transaction = ((void*)0);
    VAR_5->buffer = ((void*)0);
   }
   VAR_5 = VAR_5->to_parent;
  } else if (VAR_5->from == VAR_4) {
   VAR_5->from = ((void*)0);
   VAR_5 = VAR_5->from_parent;
  } else
   FUNC_0();
 }
 if (VAR_6)
  FUNC_3(VAR_6, VAR_2);
 FUNC_2(&VAR_4->todo);
 FUNC_5(VAR_4);
 FUNC_4(VAR_1);
 return VAR_7;
}
