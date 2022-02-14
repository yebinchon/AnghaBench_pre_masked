
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context_pool {scalar_t__ allocated; int arr; struct conn_context* next_idx; } ;
struct conn_context {struct conn_context* next_idx; struct context_pool* pool; } ;


 int FUNC_0 (int) ;

void FUNC_1(struct conn_context *VAR_0)
{
 struct context_pool *VAR_1 = VAR_0->pool;

 FUNC_0(VAR_1->allocated > 0);
 VAR_1->allocated--;

 VAR_0->next_idx = VAR_1->next_idx;
 VAR_1->next_idx = VAR_0 - VAR_1->arr;
}
