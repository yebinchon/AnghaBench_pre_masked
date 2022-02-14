
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {scalar_t__ read_count; int first; int * current; } ;



__attribute__((used)) static void
FUNC_0(struct buffer *VAR_0)
{
   VAR_0->current = &VAR_0->first;
   VAR_0->read_count = 0;
}
