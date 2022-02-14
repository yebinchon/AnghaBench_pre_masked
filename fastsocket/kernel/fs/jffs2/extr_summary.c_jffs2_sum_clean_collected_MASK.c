
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {union jffs2_sum_mem* next; } ;
union jffs2_sum_mem {TYPE_1__ u; } ;
struct jffs2_summary {scalar_t__ sum_num; scalar_t__ sum_padded; int * sum_list_tail; union jffs2_sum_mem* sum_list_head; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (union jffs2_sum_mem*) ;

__attribute__((used)) static void FUNC_2(struct jffs2_summary *VAR_0)
{
 union jffs2_sum_mem *VAR_1;

 if (!VAR_0->sum_list_head) {
  FUNC_0("already empty\n");
 }
 while (VAR_0->sum_list_head) {
  VAR_1 = VAR_0->sum_list_head;
  VAR_0->sum_list_head = VAR_0->sum_list_head->u.next;
  FUNC_1(VAR_1);
 }
 VAR_0->sum_list_tail = ((void*)0);
 VAR_0->sum_padded = 0;
 VAR_0->sum_num = 0;
}
