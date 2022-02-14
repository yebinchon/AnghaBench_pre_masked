
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabinfo {unsigned long alloc_fastpath; unsigned long free_fastpath; unsigned long alloc_slowpath; unsigned long free_slowpath; } ;



__attribute__((used)) static unsigned long FUNC_0(struct slabinfo *VAR_0)
{
 return VAR_0->alloc_fastpath + VAR_0->free_fastpath +
  VAR_0->alloc_slowpath + VAR_0->free_slowpath;
}
