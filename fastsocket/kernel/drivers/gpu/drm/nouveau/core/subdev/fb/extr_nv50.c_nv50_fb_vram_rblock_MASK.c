
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int size; } ;
struct nouveau_fb {TYPE_1__ ram; } ;


 int FUNC_0 (struct nouveau_fb*,char*,int,...) ;
 int FUNC_1 (struct nouveau_fb*,int) ;
 int FUNC_2 (struct nouveau_fb*,char*,int) ;

__attribute__((used)) static u32
FUNC_3(struct nouveau_fb *VAR_0)
{
 int VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
 u64 VAR_7, VAR_8;
 u32 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_9 = FUNC_1(VAR_0, 0x100200);
 VAR_10 = FUNC_1(VAR_0, 0x100204);
 VAR_11 = FUNC_1(VAR_0, 0x100250);
 VAR_12 = FUNC_1(VAR_0, 0x001540);
 FUNC_0(VAR_0, "memcfg 0x%08x 0x%08x 0x%08x 0x%08x\n", VAR_9, VAR_10, VAR_11, VAR_12);

 for (VAR_1 = 0, VAR_2 = 0; VAR_1 < 8; VAR_1++) {
  if (VAR_12 & (0x00010000 << VAR_1))
   VAR_2++;
 }

 VAR_3 = (VAR_10 & 0x0000f000) >> 12;
 VAR_4 = ((VAR_10 & 0x000f0000) >> 16) + 8;
 VAR_5 = ((VAR_10 & 0x00f00000) >> 20) + 8;
 VAR_6 = 1 << (((VAR_10 & 0x03000000) >> 24) + 2);

 VAR_7 = VAR_2 * VAR_6 * (1 << VAR_3) * 8;
 VAR_8 = VAR_7 << VAR_4;
 if (VAR_9 & 0x00000004)
  VAR_8 += VAR_7 << VAR_5;

 if (VAR_8 != VAR_0->ram.size) {
  FUNC_2(VAR_0, "memory controller reports %d MiB VRAM\n",
   (u32)(VAR_0->ram.size >> 20));
 }

 VAR_13 = VAR_7;
 if (VAR_11 & 1)
  VAR_13 *= 3;

 FUNC_0(VAR_0, "rblock %d bytes\n", VAR_13);
 return VAR_13;
}
