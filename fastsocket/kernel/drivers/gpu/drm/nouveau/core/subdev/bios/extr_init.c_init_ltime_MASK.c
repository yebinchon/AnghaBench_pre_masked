
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nvbios_init {scalar_t__ offset; struct nouveau_bios* bios; } ;
struct nouveau_bios {int dummy; } ;


 scalar_t__ FUNC_0 (struct nvbios_init*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nouveau_bios*,scalar_t__) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void
FUNC_4(struct nvbios_init *VAR_0)
{
 struct nouveau_bios *VAR_1 = VAR_0->bios;
 u16 VAR_2 = FUNC_2(VAR_1, VAR_0->offset + 1);

 FUNC_3("LTIME\t0x%04x\n", VAR_2);
 VAR_0->offset += 3;

 if (FUNC_0(VAR_0))
  FUNC_1(VAR_2);
}
