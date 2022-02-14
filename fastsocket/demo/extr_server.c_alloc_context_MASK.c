
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context_pool {scalar_t__ allocated; scalar_t__ total; size_t next_idx; struct conn_context* arr; } ;
struct conn_context {size_t next_idx; struct context_pool* pool; scalar_t__ end_fd_added; scalar_t__ end_fd; scalar_t__ fd_added; scalar_t__ fd; } ;


 int FUNC_0 (int) ;

struct conn_context *FUNC_1(struct context_pool *VAR_0)
{
 struct conn_context *VAR_1;

 FUNC_0(VAR_0->allocated < VAR_0->total);
 VAR_0->allocated++;

 VAR_1 = &VAR_0->arr[VAR_0->next_idx];
 VAR_0->next_idx = VAR_0->arr[VAR_0->next_idx].next_idx;

 VAR_1->fd = 0;
 VAR_1->fd_added = 0;
 VAR_1->end_fd = 0;
 VAR_1->end_fd_added = 0;
 VAR_1->next_idx = -1;

 VAR_1->pool = VAR_0;

 return VAR_1;
}
