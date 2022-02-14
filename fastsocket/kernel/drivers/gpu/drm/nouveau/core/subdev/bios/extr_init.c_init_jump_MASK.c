
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct nvbios_init {scalar_t__ offset; struct nouveau_bios* bios; } ;
struct nouveau_bios {int dummy; } ;


 scalar_t__ FUNC_0 (struct nouveau_bios*,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct nvbios_init *VAR_0)
{
 struct nouveau_bios *VAR_1 = VAR_0->bios;
 u16 VAR_2 = FUNC_0(VAR_1, VAR_0->offset + 1);

 FUNC_1("JUMP\t0x%04x\n", VAR_2);
 VAR_0->offset = VAR_2;
}
