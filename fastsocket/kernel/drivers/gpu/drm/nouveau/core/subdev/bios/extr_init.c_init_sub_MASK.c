
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u16 ;
struct nvbios_init {void* offset; struct nouveau_bios* bios; } ;
struct nouveau_bios {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct nvbios_init*) ;
 void* FUNC_2 (struct nouveau_bios*,int ) ;
 int FUNC_3 (struct nouveau_bios*,void*) ;
 scalar_t__ FUNC_4 (struct nvbios_init*) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void
FUNC_6(struct nvbios_init *VAR_0)
{
 struct nouveau_bios *VAR_1 = VAR_0->bios;
 u8 VAR_2 = FUNC_3(VAR_1, VAR_0->offset + 1);
 u16 VAR_3, VAR_4;

 FUNC_5("SUB\t0x%02x\n", VAR_2);

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3 && FUNC_1(VAR_0)) {
  VAR_4 = VAR_0->offset;
  VAR_0->offset = VAR_3;
  if (FUNC_4(VAR_0)) {
   FUNC_0("error parsing sub-table\n");
   return;
  }
  VAR_0->offset = VAR_4;
 }

 VAR_0->offset += 2;
}
