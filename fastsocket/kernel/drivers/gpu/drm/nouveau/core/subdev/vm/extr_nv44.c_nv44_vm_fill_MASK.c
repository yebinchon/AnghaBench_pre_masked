
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_gpuobj {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct nouveau_gpuobj*,int) ;
 int FUNC_1 (struct nouveau_gpuobj*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct nouveau_gpuobj *VAR_0, dma_addr_t VAR_1,
      dma_addr_t *VAR_2, u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5 = (VAR_3 << 2) & ~0x0000000f;
 u32 VAR_6[4];

 VAR_6[0] = FUNC_0(VAR_0, VAR_5 + 0x0);
 VAR_6[1] = FUNC_0(VAR_0, VAR_5 + 0x4);
 VAR_6[2] = FUNC_0(VAR_0, VAR_5 + 0x8);
 VAR_6[3] = FUNC_0(VAR_0, VAR_5 + 0xc);

 while (VAR_4--) {
  u32 VAR_7 = VAR_2 ? (*VAR_2++ >> 12) : (VAR_1 >> 12);
  switch (VAR_3++ & 0x3) {
  case 0:
   VAR_6[0] &= ~0x07ffffff;
   VAR_6[0] |= VAR_7;
   break;
  case 1:
   VAR_6[0] &= ~0xf8000000;
   VAR_6[0] |= VAR_7 << 27;
   VAR_6[1] &= ~0x003fffff;
   VAR_6[1] |= VAR_7 >> 5;
   break;
  case 2:
   VAR_6[1] &= ~0xffc00000;
   VAR_6[1] |= VAR_7 << 22;
   VAR_6[2] &= ~0x0001ffff;
   VAR_6[2] |= VAR_7 >> 10;
   break;
  case 3:
   VAR_6[2] &= ~0xfffe0000;
   VAR_6[2] |= VAR_7 << 17;
   VAR_6[3] &= ~0x00000fff;
   VAR_6[3] |= VAR_7 >> 15;
   break;
  }
 }

 FUNC_1(VAR_0, VAR_5 + 0x0, VAR_6[0]);
 FUNC_1(VAR_0, VAR_5 + 0x4, VAR_6[1]);
 FUNC_1(VAR_0, VAR_5 + 0x8, VAR_6[2]);
 FUNC_1(VAR_0, VAR_5 + 0xc, VAR_6[3] | 0x40000000);
}
