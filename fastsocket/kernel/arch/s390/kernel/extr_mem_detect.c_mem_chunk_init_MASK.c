
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_chunk {int type; unsigned long addr; unsigned long size; } ;



__attribute__((used)) static void FUNC_0(struct mem_chunk *VAR_0, unsigned long VAR_1,
      unsigned long VAR_2, int VAR_3)
{
 VAR_0->type = VAR_3;
 VAR_0->addr = VAR_1;
 VAR_0->size = VAR_2;
}
