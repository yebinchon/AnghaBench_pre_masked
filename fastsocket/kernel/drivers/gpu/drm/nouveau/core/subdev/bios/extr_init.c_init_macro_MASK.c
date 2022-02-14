
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct nvbios_init {scalar_t__ offset; struct nouveau_bios* bios; } ;
struct nouveau_bios {int dummy; } ;


 scalar_t__ FUNC_0 (struct nvbios_init*) ;
 int FUNC_1 (struct nvbios_init*,int ,int ) ;
 int FUNC_2 (struct nouveau_bios*,scalar_t__) ;
 int FUNC_3 (struct nouveau_bios*,scalar_t__) ;
 int FUNC_4 (char*,int,...) ;

__attribute__((used)) static void
FUNC_5(struct nvbios_init *VAR_0)
{
 struct nouveau_bios *VAR_1 = VAR_0->bios;
 u8 VAR_2 = FUNC_2(VAR_1, VAR_0->offset + 1);
 u16 VAR_3;

 FUNC_4("MACRO\t0x%02x\n", VAR_2);

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3) {
  u32 VAR_4 = FUNC_3(VAR_1, VAR_3 + (VAR_2 * 8) + 0);
  u32 VAR_5 = FUNC_3(VAR_1, VAR_3 + (VAR_2 * 8) + 4);
  FUNC_4("\t\tR[0x%06x] = 0x%08x\n", VAR_4, VAR_5);
  FUNC_1(VAR_0, VAR_4, VAR_5);
 }

 VAR_0->offset += 2;
}
