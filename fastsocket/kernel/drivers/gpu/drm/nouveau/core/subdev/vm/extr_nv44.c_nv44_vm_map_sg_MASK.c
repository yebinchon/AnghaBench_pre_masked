
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nv04_vmmgr_priv {int null; } ;
struct nouveau_vma {TYPE_1__* vm; } ;
struct nouveau_mem {int dummy; } ;
struct nouveau_gpuobj {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {scalar_t__ vmm; } ;


 int FUNC_0 (struct nouveau_gpuobj*,int ,int *,int,int) ;
 int FUNC_1 (struct nouveau_gpuobj*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct nouveau_vma *VAR_0, struct nouveau_gpuobj *VAR_1,
        struct nouveau_mem *VAR_2, u32 VAR_3, u32 VAR_4, dma_addr_t *VAR_5)
{
 struct nv04_vmmgr_priv *VAR_6 = (void *)VAR_0->vm->vmm;
 u32 VAR_7[4];
 int VAR_8;

 if (VAR_3 & 3) {
  u32 VAR_9 = 4 - (VAR_3 & 3);
  u32 VAR_10 = (VAR_4 > VAR_9) ? VAR_9 : VAR_4;
  FUNC_0(VAR_1, VAR_6->null, VAR_5, VAR_3, VAR_10);
  VAR_3 += VAR_10;
  VAR_5 += VAR_10;
  VAR_4 -= VAR_10;
 }

 while (VAR_4 >= 4) {
  for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
   VAR_7[VAR_8] = *VAR_5++ >> 12;
  FUNC_1(VAR_1, VAR_3++ * 4, VAR_7[0] >> 0 | VAR_7[1] << 27);
  FUNC_1(VAR_1, VAR_3++ * 4, VAR_7[1] >> 5 | VAR_7[2] << 22);
  FUNC_1(VAR_1, VAR_3++ * 4, VAR_7[2] >> 10 | VAR_7[3] << 17);
  FUNC_1(VAR_1, VAR_3++ * 4, VAR_7[3] >> 15 | 0x40000000);
  VAR_4 -= 4;
 }

 if (VAR_4)
  FUNC_0(VAR_1, VAR_6->null, VAR_5, VAR_3, VAR_4);
}
