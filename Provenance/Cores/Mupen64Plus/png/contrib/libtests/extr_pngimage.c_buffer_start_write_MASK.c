
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int * current; scalar_t__ end_count; int first; int * last; } ;



__attribute__((used)) static void
FUNC_0(struct buffer *VAR_0)
{
   VAR_0->last = &VAR_0->first;
   VAR_0->end_count = 0;
   VAR_0->current = ((void*)0);
}
