
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpc_fifo_head_uv {scalar_t__ n_entries; int lock; int * last; int * first; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct xpc_fifo_head_uv *VAR_0)
{
 VAR_0->first = ((void*)0);
 VAR_0->last = ((void*)0);
 FUNC_0(&VAR_0->lock);
 VAR_0->n_entries = 0;
}
