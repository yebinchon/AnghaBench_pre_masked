
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nouveau_vma {int access; } ;
struct nouveau_mem {int memtype; } ;
struct nouveau_gpuobj {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nouveau_gpuobj*,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nouveau_vma*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct nouveau_vma *VAR_1, struct nouveau_gpuobj *VAR_2,
        struct nouveau_mem *VAR_3, u32 VAR_4, u32 VAR_5, dma_addr_t *VAR_6)
{
 u32 VAR_7 = (VAR_1->access & VAR_0) ? 3 : 2;
 VAR_4 <<= 3;
 while (VAR_5--) {
  u64 VAR_8 = FUNC_3(VAR_1, (u64)*VAR_6++, VAR_3->memtype, VAR_7);
  FUNC_1(VAR_2, VAR_4 + 0, FUNC_0(VAR_8));
  FUNC_1(VAR_2, VAR_4 + 4, FUNC_2(VAR_8));
  VAR_4 += 8;
 }
}
