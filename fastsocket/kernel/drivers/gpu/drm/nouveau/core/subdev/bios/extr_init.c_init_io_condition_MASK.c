
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvbios_init {scalar_t__ offset; struct nouveau_bios* bios; } ;
struct nouveau_bios {int dummy; } ;


 int FUNC_0 (struct nvbios_init*,int) ;
 int FUNC_1 (struct nvbios_init*,int ) ;
 int FUNC_2 (struct nouveau_bios*,scalar_t__) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void
FUNC_4(struct nvbios_init *VAR_0)
{
 struct nouveau_bios *VAR_1 = VAR_0->bios;
 u8 VAR_2 = FUNC_2(VAR_1, VAR_0->offset + 1);

 FUNC_3("IO_CONDITION\t0x%02x\n", VAR_2);
 VAR_0->offset += 2;

 if (!FUNC_1(VAR_0, VAR_2))
  FUNC_0(VAR_0, 0);
}
