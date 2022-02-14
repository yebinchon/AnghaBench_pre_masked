
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct nvbios_init {struct nouveau_bios* bios; scalar_t__ offset; } ;
struct nouveau_bios {int dummy; } ;
struct TYPE_2__ {scalar_t__ card_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nvbios_init*,int,int,int) ;
 int FUNC_1 (struct nvbios_init*,int) ;
 int FUNC_2 (struct nvbios_init*,int,int) ;
 int FUNC_3 (struct nvbios_init*,int,int) ;
 int FUNC_4 (int) ;
 TYPE_1__* FUNC_5 (struct nouveau_bios*) ;
 int FUNC_6 (struct nouveau_bios*,scalar_t__) ;
 int FUNC_7 (char*,int,int,int) ;

__attribute__((used)) static void
FUNC_8(struct nvbios_init *VAR_1)
{
 struct nouveau_bios *VAR_2 = VAR_1->bios;
 u16 VAR_3 = FUNC_6(VAR_2, VAR_1->offset + 1);
 u8 VAR_4 = FUNC_6(VAR_2, VAR_1->offset + 3);
 u8 VAR_5 = FUNC_6(VAR_2, VAR_1->offset + 4);
 u8 VAR_6;

 FUNC_7("IO\t\tI[0x%04x] &= 0x%02x |= 0x%02x\n", VAR_3, VAR_4, VAR_5);
 VAR_1->offset += 5;





 if (FUNC_5(VAR_1->bios)->card_type >= VAR_0 &&
     VAR_3 == 0x03c3 && VAR_5 == 0x01) {
  FUNC_0(VAR_1, 0x614100, 0xf0800000, 0x00800000);
  FUNC_0(VAR_1, 0x00e18c, 0x00020000, 0x00020000);
  FUNC_0(VAR_1, 0x614900, 0xf0800000, 0x00800000);
  FUNC_0(VAR_1, 0x000200, 0x40000000, 0x00000000);
  FUNC_4(10);
  FUNC_0(VAR_1, 0x00e18c, 0x00020000, 0x00000000);
  FUNC_0(VAR_1, 0x000200, 0x40000000, 0x40000000);
  FUNC_2(VAR_1, 0x614100, 0x00800018);
  FUNC_2(VAR_1, 0x614900, 0x00800018);
  FUNC_4(10);
  FUNC_2(VAR_1, 0x614100, 0x10000018);
  FUNC_2(VAR_1, 0x614900, 0x10000018);
 }

 VAR_6 = FUNC_1(VAR_1, VAR_3) & VAR_4;
 FUNC_3(VAR_1, VAR_3, VAR_5 | VAR_6);
}
