
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvbios_init {scalar_t__ offset; struct nouveau_bios* bios; } ;
struct nouveau_bios {int dummy; } ;


 int FUNC_0 (struct nvbios_init*,int,int,int) ;
 int FUNC_1 (struct nvbios_init*,int,int) ;
 int FUNC_2 (struct nouveau_bios*,scalar_t__) ;
 int FUNC_3 (struct nouveau_bios*,scalar_t__) ;
 int FUNC_4 (char*,int,int,...) ;

__attribute__((used)) static void
FUNC_5(struct nvbios_init *VAR_0)
{
 struct nouveau_bios *VAR_1 = VAR_0->bios;
 u32 VAR_2 = FUNC_3(VAR_1, VAR_0->offset + 1);
 u32 VAR_3 = FUNC_3(VAR_1, VAR_0->offset + 5);
 u32 VAR_4 = FUNC_3(VAR_1, VAR_0->offset + 9);
 u32 VAR_5 = FUNC_3(VAR_1, VAR_0->offset + 13);
 u8 VAR_6 = FUNC_2(VAR_1, VAR_0->offset + 17);

 FUNC_4("INDEX_ADDRESS_LATCHED\t"
       "R[0x%06x] : R[0x%06x]\n\tCTRL &= 0x%08x |= 0x%08x\n",
       VAR_2, VAR_3, VAR_4, VAR_5);
 VAR_0->offset += 18;

 while (VAR_6--) {
  u8 VAR_7 = FUNC_2(VAR_1, VAR_0->offset + 0);
  u8 VAR_8 = FUNC_2(VAR_1, VAR_0->offset + 1);

  FUNC_4("\t[0x%02x] = 0x%02x\n", VAR_7, VAR_8);
  VAR_0->offset += 2;

  FUNC_1(VAR_0, VAR_3, VAR_8);
  FUNC_0(VAR_0, VAR_2, ~VAR_4, VAR_5 | VAR_7);
 }
}
