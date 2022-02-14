
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct nvbios_init {struct nouveau_bios* bios; } ;
struct TYPE_2__ {int major; } ;
struct nouveau_bios {int bmp_offset; TYPE_1__ version; } ;


 int FUNC_0 (struct nouveau_bios*) ;
 int FUNC_1 (struct nvbios_init*) ;
 int FUNC_2 (struct nouveau_bios*,int) ;

__attribute__((used)) static u16
FUNC_3(struct nouveau_bios *VAR_0, int VAR_1)
{
 struct nvbios_init VAR_2 = { .bios = VAR_0 };
 u16 VAR_3;

 if (FUNC_0(VAR_0) && FUNC_0(VAR_0) < 0x0510) {
  if (VAR_1 > 1)
   return 0x0000;

  VAR_3 = VAR_0->bmp_offset + (VAR_0->version.major < 2 ? 14 : 18);
  return FUNC_2(VAR_0, VAR_3 + (VAR_1 * 2));
 }

 VAR_3 = FUNC_1(&VAR_2);
 if (VAR_3)
  return FUNC_2(VAR_0, VAR_3 + (VAR_1 * 2));

 return 0x0000;
}
