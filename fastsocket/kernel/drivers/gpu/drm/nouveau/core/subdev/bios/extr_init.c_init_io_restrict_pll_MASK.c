
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct nvbios_init {scalar_t__ offset; struct nouveau_bios* bios; } ;
struct nouveau_bios {int dummy; } ;
typedef scalar_t__ s8 ;


 scalar_t__ FUNC_0 (struct nvbios_init*,scalar_t__) ;
 int FUNC_1 (struct nvbios_init*,int,int) ;
 int FUNC_2 (struct nvbios_init*,int,int) ;
 void* FUNC_3 (struct nouveau_bios*,scalar_t__) ;
 int FUNC_4 (struct nouveau_bios*,scalar_t__) ;
 int FUNC_5 (struct nouveau_bios*,scalar_t__) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void
FUNC_7(struct nvbios_init *VAR_0)
{
 struct nouveau_bios *VAR_1 = VAR_0->bios;
 u16 VAR_2 = FUNC_4(VAR_1, VAR_0->offset + 1);
 u8 VAR_3 = FUNC_3(VAR_1, VAR_0->offset + 3);
 u8 VAR_4 = FUNC_3(VAR_1, VAR_0->offset + 4);
 u8 VAR_5 = FUNC_3(VAR_1, VAR_0->offset + 5);
 s8 VAR_6 = FUNC_3(VAR_1, VAR_0->offset + 6);
 u8 VAR_7 = FUNC_3(VAR_1, VAR_0->offset + 7);
 u32 VAR_8 = FUNC_5(VAR_1, VAR_0->offset + 8);
 u8 VAR_9, VAR_10;

 FUNC_6("IO_RESTRICT_PLL\tR[0x%06x] =PLL= "
       "((0x%04x[0x%02x] & 0x%02x) >> 0x%02x) IOFCOND 0x%02x [{\n",
       VAR_8, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 VAR_0->offset += 12;

 VAR_9 = (FUNC_2(VAR_0, VAR_2, VAR_3) & VAR_4) >> VAR_5;
 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  u32 VAR_11 = FUNC_4(VAR_1, VAR_0->offset) * 10;

  if (VAR_10 == VAR_9) {
   FUNC_6("\t%dkHz *\n", VAR_11);
   if (VAR_6 > 0 && FUNC_0(VAR_0, VAR_6))
    VAR_11 *= 2;
   FUNC_1(VAR_0, VAR_8, VAR_11);
  } else {
   FUNC_6("\t%dkHz\n", VAR_11);
  }

  VAR_0->offset += 2;
 }
 FUNC_6("}]\n");
}
