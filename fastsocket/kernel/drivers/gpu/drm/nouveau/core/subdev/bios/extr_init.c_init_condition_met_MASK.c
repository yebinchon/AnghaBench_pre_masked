
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct nvbios_init {struct nouveau_bios* bios; } ;
struct nouveau_bios {int dummy; } ;


 scalar_t__ FUNC_0 (struct nvbios_init*) ;
 int FUNC_1 (struct nvbios_init*,int) ;
 int FUNC_2 (struct nouveau_bios*,scalar_t__) ;
 int FUNC_3 (char*,int,int,int,int) ;

__attribute__((used)) static bool
FUNC_4(struct nvbios_init *VAR_0, u8 VAR_1)
{
 struct nouveau_bios *VAR_2 = VAR_0->bios;
 u16 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3) {
  u32 VAR_4 = FUNC_2(VAR_2, VAR_3 + (VAR_1 * 12) + 0);
  u32 VAR_5 = FUNC_2(VAR_2, VAR_3 + (VAR_1 * 12) + 4);
  u32 VAR_6 = FUNC_2(VAR_2, VAR_3 + (VAR_1 * 12) + 8);
  FUNC_3("\t[0x%02x] (R[0x%06x] & 0x%08x) == 0x%08x\n",
        VAR_1, VAR_4, VAR_5, VAR_6);
  return (FUNC_1(VAR_0, VAR_4) & VAR_5) == VAR_6;
 }
 return 0;
}
