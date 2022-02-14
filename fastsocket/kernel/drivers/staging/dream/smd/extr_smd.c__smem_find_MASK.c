
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smem_shared {struct smem_heap_entry* heap_toc; } ;
struct smem_heap_entry {unsigned int size; scalar_t__ offset; scalar_t__ allocated; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static void *FUNC_0(unsigned VAR_2, unsigned *VAR_3)
{
 struct smem_shared *VAR_4 = (void *) VAR_0;
 struct smem_heap_entry *VAR_5 = VAR_4->heap_toc;

 if (VAR_2 >= VAR_1)
  return 0;

 if (VAR_5[VAR_2].allocated) {
  *VAR_3 = VAR_5[VAR_2].size;
  return (void *) (VAR_0 + VAR_5[VAR_2].offset);
 }

 return 0;
}
