
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int entry; } ;
struct binder_ref {struct binder_ref* death; TYPE_2__ work; int desc; int debug_id; TYPE_1__* proc; TYPE_3__* node; int node_entry; scalar_t__ strong; int rb_node_node; int rb_node_desc; } ;
struct TYPE_6__ {int debug_id; } ;
struct TYPE_4__ {int pid; int refs_by_node; int refs_by_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ,int ,...) ;
 int FUNC_1 (TYPE_3__*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct binder_ref*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static void FUNC_7(struct binder_ref *VAR_4)
{
 FUNC_0(VAR_1,
       "binder: %d delete ref %d desc %d for "
       "node %d\n", VAR_4->proc->pid, VAR_4->debug_id,
       VAR_4->desc, VAR_4->node->debug_id);

 FUNC_6(&VAR_4->rb_node_desc, &VAR_4->proc->refs_by_desc);
 FUNC_6(&VAR_4->rb_node_node, &VAR_4->proc->refs_by_node);
 if (VAR_4->strong)
  FUNC_1(VAR_4->node, 1, 1);
 FUNC_3(&VAR_4->node_entry);
 FUNC_1(VAR_4->node, 0, 1);
 if (VAR_4->death) {
  FUNC_0(VAR_0,
        "binder: %d delete ref %d desc %d "
        "has death notification\n", VAR_4->proc->pid,
        VAR_4->debug_id, VAR_4->desc);
  FUNC_5(&VAR_4->death->work.entry);
  FUNC_4(VAR_4->death);
  FUNC_2(VAR_2);
 }
 FUNC_4(VAR_4);
 FUNC_2(VAR_3);
}
