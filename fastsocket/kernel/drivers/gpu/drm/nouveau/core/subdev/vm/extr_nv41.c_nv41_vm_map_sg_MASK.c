
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nouveau_vma {int dummy; } ;
struct nouveau_mem {int dummy; } ;
struct nouveau_gpuobj {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nouveau_gpuobj*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct nouveau_vma *VAR_2, struct nouveau_gpuobj *VAR_3,
        struct nouveau_mem *VAR_4, u32 VAR_5, u32 VAR_6, dma_addr_t *VAR_7)
{
 VAR_5 = VAR_5 * 4;
 while (VAR_6) {
  u32 VAR_8 = VAR_1 / VAR_0;
  u64 VAR_9 = (u64)*VAR_7++;
  while (VAR_6 && VAR_8--) {
   FUNC_0(VAR_3, VAR_5, (VAR_9 >> 7) | 1);
   VAR_9 += VAR_0;
   VAR_5 += 4;
   VAR_6 -= 1;
  }
 }
}
