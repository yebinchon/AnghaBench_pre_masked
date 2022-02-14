
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct nvbios_init {int offset; struct nouveau_bios* bios; } ;
struct TYPE_2__ {int major; } ;
struct nouveau_bios {TYPE_1__ version; } ;


 int FUNC_0 (struct nouveau_bios*) ;
 int FUNC_1 (struct nouveau_bios*) ;
 int FUNC_2 (struct nvbios_init*) ;
 int FUNC_3 (struct nvbios_init*) ;
 int FUNC_4 (struct nvbios_init*,int) ;
 int FUNC_5 (struct nvbios_init*,int,int) ;
 int FUNC_6 (struct nvbios_init*,int,int) ;
 int FUNC_7 (struct nvbios_init*,int,int,int) ;
 int FUNC_8 (struct nouveau_bios*,int) ;
 int FUNC_9 (struct nouveau_bios*,int) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11(struct nvbios_init *VAR_0)
{
 struct nouveau_bios *VAR_1 = VAR_0->bios;
 u16 VAR_2, VAR_3;
 u32 VAR_4, VAR_5;

 FUNC_10("CONFIGURE_MEM\n");
 VAR_0->offset += 1;

 if (VAR_1->version.major > 2) {
  FUNC_3(VAR_0);
  return;
 }
 FUNC_4(VAR_0, 1);

 VAR_2 = FUNC_2(VAR_0);
 VAR_3 = FUNC_1(VAR_1);
 if (FUNC_8(VAR_1, VAR_2) & 0x01)
  VAR_3 = FUNC_0(VAR_1);
 VAR_2 += 6;

 VAR_5 = FUNC_5(VAR_0, 0x03c4, 0x01);
 FUNC_7(VAR_0, 0x03c4, 0x01, VAR_5 | 0x20);

 while ((VAR_4 = FUNC_9(VAR_1, VAR_3)) != 0xffffffff) {
  switch (VAR_4) {
  case 0x10021c:
  case 0x1002d0:
  case 0x1002d4:
   VAR_5 = 0x00000001;
   break;
  default:
   VAR_5 = FUNC_9(VAR_1, VAR_2);
   VAR_2 += 4;
   if (VAR_5 == 0xffffffff)
    continue;
   break;
  }

  FUNC_6(VAR_0, VAR_4, VAR_5);
 }

 FUNC_4(VAR_0, 0);
}
