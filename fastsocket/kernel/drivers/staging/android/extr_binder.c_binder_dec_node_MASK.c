
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entry; } ;
struct binder_node {int debug_id; int dead_node; TYPE_2__* proc; int rb_node; TYPE_1__ work; scalar_t__ local_weak_refs; scalar_t__ local_strong_refs; int refs; scalar_t__ has_weak_ref; scalar_t__ has_strong_ref; scalar_t__ internal_strong_refs; } ;
struct TYPE_4__ {int nodes; int wait; int todo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct binder_node*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct binder_node *VAR_2, int VAR_3, int VAR_4)
{
 if (VAR_3) {
  if (VAR_4)
   VAR_2->internal_strong_refs--;
  else
   VAR_2->local_strong_refs--;
  if (VAR_2->local_strong_refs || VAR_2->internal_strong_refs)
   return 0;
 } else {
  if (!VAR_4)
   VAR_2->local_weak_refs--;
  if (VAR_2->local_weak_refs || !FUNC_3(&VAR_2->refs))
   return 0;
 }
 if (VAR_2->proc && (VAR_2->has_strong_ref || VAR_2->has_weak_ref)) {
  if (FUNC_7(&VAR_2->work.entry)) {
   FUNC_5(&VAR_2->work.entry, &VAR_2->proc->todo);
   FUNC_9(&VAR_2->proc->wait);
  }
 } else {
  if (FUNC_3(&VAR_2->refs) && !VAR_2->local_strong_refs &&
      !VAR_2->local_weak_refs) {
   FUNC_6(&VAR_2->work.entry);
   if (VAR_2->proc) {
    FUNC_8(&VAR_2->rb_node, &VAR_2->proc->nodes);
    FUNC_0(VAR_0,
          "binder: refless node %d deleted\n",
          VAR_2->debug_id);
   } else {
    FUNC_2(&VAR_2->dead_node);
    FUNC_0(VAR_0,
          "binder: dead node %d deleted\n",
          VAR_2->debug_id);
   }
   FUNC_4(VAR_2);
   FUNC_1(VAR_1);
  }
 }

 return 0;
}
