
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u8 ;
typedef size_t u32 ;
struct vxge_hw_mempool {size_t memblock_size; size_t item_size; size_t items_per_memblock; size_t items_priv_size; scalar_t__* memblocks_priv_arr; void** memblocks_arr; } ;
typedef size_t ptrdiff_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void*
FUNC_1(
 struct vxge_hw_mempool *VAR_0,
 u32 VAR_1,
 void *VAR_2,
 u32 *VAR_3)
{
 ptrdiff_t VAR_4;
 void *VAR_5 = VAR_0->memblocks_arr[VAR_1];


 VAR_4 = (u32)((u8 *)VAR_2 - (u8 *)VAR_5);
 FUNC_0(VAR_4 >= 0 && (u32)VAR_4 < VAR_0->memblock_size);

 (*VAR_3) = (u32) VAR_4 / VAR_0->item_size;
 FUNC_0((*VAR_3) < VAR_0->items_per_memblock);

 return (u8 *)VAR_0->memblocks_priv_arr[VAR_1] +
       (*VAR_3) * VAR_0->items_priv_size;
}
