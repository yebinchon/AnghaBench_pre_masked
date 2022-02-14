
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct nvbios_init {void* offset; struct nouveau_bios* bios; } ;
struct nouveau_bios {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct nvbios_init*) ;
 void* FUNC_2 (struct nouveau_bios*,void*) ;
 scalar_t__ FUNC_3 (struct nvbios_init*) ;
 int FUNC_4 (char*,void*) ;

__attribute__((used)) static void
FUNC_5(struct nvbios_init *VAR_0)
{
 struct nouveau_bios *VAR_1 = VAR_0->bios;
 u16 VAR_2 = FUNC_2(VAR_1, VAR_0->offset + 1);
 u16 VAR_3;

 FUNC_4("SUB_DIRECT\t0x%04x\n", VAR_2);

 if (FUNC_1(VAR_0)) {
  VAR_3 = VAR_0->offset;
  VAR_0->offset = VAR_2;
  if (FUNC_3(VAR_0)) {
   FUNC_0("error parsing sub-table\n");
   return;
  }
  VAR_0->offset = VAR_3;
 }

 VAR_0->offset += 3;
}
