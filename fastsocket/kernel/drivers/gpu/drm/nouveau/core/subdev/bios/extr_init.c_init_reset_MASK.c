
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvbios_init {scalar_t__ offset; struct nouveau_bios* bios; } ;
struct nouveau_bios {int dummy; } ;


 int FUNC_0 (struct nvbios_init*,int) ;
 int FUNC_1 (struct nvbios_init*,int,int,int) ;
 int FUNC_2 (struct nvbios_init*,int,int) ;
 int FUNC_3 (struct nouveau_bios*,scalar_t__) ;
 int FUNC_4 (char*,int,int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct nvbios_init *VAR_0)
{
 struct nouveau_bios *VAR_1 = VAR_0->bios;
 u32 VAR_2 = FUNC_3(VAR_1, VAR_0->offset + 1);
 u32 VAR_3 = FUNC_3(VAR_1, VAR_0->offset + 5);
 u32 VAR_4 = FUNC_3(VAR_1, VAR_0->offset + 9);
 u32 VAR_5;

 FUNC_4("RESET\tR[0x%08x] = 0x%08x, 0x%08x", VAR_2, VAR_3, VAR_4);
 VAR_0->offset += 13;
 FUNC_0(VAR_0, 1);

 VAR_5 = FUNC_1(VAR_0, 0x00184c, 0x00000f00, 0x00000000);
 FUNC_2(VAR_0, VAR_2, VAR_3);
 FUNC_5(10);
 FUNC_2(VAR_0, VAR_2, VAR_4);
 FUNC_2(VAR_0, 0x00184c, VAR_5);
 FUNC_1(VAR_0, 0x001850, 0x00000001, 0x00000000);

 FUNC_0(VAR_0, 0);
}
