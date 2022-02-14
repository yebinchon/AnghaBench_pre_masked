
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvbios_init {scalar_t__ offset; struct nouveau_bios* bios; } ;
struct nouveau_bios {int dummy; } ;


 int FUNC_0 (struct nvbios_init*,int,int ) ;
 int FUNC_1 (struct nvbios_init*,int,int ,int ) ;
 int FUNC_2 (struct nouveau_bios*,scalar_t__) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct nvbios_init *VAR_0)
{
 struct nouveau_bios *VAR_1 = VAR_0->bios;
 u8 VAR_2 = FUNC_2(VAR_1, VAR_0->offset + 1);
 u8 VAR_3 = FUNC_2(VAR_1, VAR_0->offset + 2);
 u8 VAR_4 = FUNC_2(VAR_1, VAR_0->offset + 3);
 u8 VAR_5 = FUNC_2(VAR_1, VAR_0->offset + 4);
 u8 VAR_6;

 FUNC_3("CR_INDEX_ADDR C[%02x] C[%02x]\n", VAR_2, VAR_3);
 VAR_0->offset += 5;

 VAR_6 = FUNC_0(VAR_0, 0x03d4, VAR_2);
 while (VAR_5--) {
  u8 VAR_7 = FUNC_2(VAR_1, VAR_0->offset);

  FUNC_3("\t\t[0x%02x] = 0x%02x\n", VAR_4, VAR_7);
  VAR_0->offset += 1;

  FUNC_1(VAR_0, 0x03d4, VAR_2, VAR_4++);
  FUNC_1(VAR_0, 0x03d4, VAR_3, VAR_7);
 }
 FUNC_1(VAR_0, 0x03d4, VAR_2, VAR_6);
}
