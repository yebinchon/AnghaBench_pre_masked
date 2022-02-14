
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_transaction_log_entry {int debug_id; int call_type; int from_proc; int from_thread; int to_proc; int to_thread; int to_node; int target_handle; int data_size; int offsets_size; } ;


 int FUNC_0 (char*,int,char*,int,char*,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static char *FUNC_1(char *VAR_0, char *VAR_1,
     struct binder_transaction_log_entry *VAR_2)
{
 VAR_0 += FUNC_0(VAR_0, VAR_1 - VAR_0,
   "%d: %s from %d:%d to %d:%d node %d handle %d "
   "size %d:%d\n",
   VAR_2->debug_id, (VAR_2->call_type == 2) ? "reply" :
   ((VAR_2->call_type == 1) ? "async" : "call "), VAR_2->from_proc,
   VAR_2->from_thread, VAR_2->to_proc, VAR_2->to_thread, VAR_2->to_node,
   VAR_2->target_handle, VAR_2->data_size, VAR_2->offsets_size);
 return VAR_0;
}
