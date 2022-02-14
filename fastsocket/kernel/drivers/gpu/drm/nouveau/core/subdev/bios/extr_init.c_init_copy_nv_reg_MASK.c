
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvbios_init {scalar_t__ offset; struct nouveau_bios* bios; } ;
struct nouveau_bios {int dummy; } ;


 int FUNC_0 (struct nvbios_init*,int,int,int) ;
 int FUNC_1 (struct nvbios_init*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct nouveau_bios*,scalar_t__) ;
 int FUNC_4 (struct nouveau_bios*,scalar_t__) ;
 int FUNC_5 (char*,int,int,int,char*,int,int,int) ;

__attribute__((used)) static void
FUNC_6(struct nvbios_init *VAR_0)
{
 struct nouveau_bios *VAR_1 = VAR_0->bios;
 u32 VAR_2 = FUNC_4(VAR_1, VAR_0->offset + 1);
 u8 VAR_3 = FUNC_3(VAR_1, VAR_0->offset + 5);
 u32 VAR_4 = FUNC_4(VAR_1, VAR_0->offset + 6);
 u32 VAR_5 = FUNC_4(VAR_1, VAR_0->offset + 10);
 u32 VAR_6 = FUNC_4(VAR_1, VAR_0->offset + 14);
 u32 VAR_7 = FUNC_4(VAR_1, VAR_0->offset + 18);
 u32 VAR_8;

 FUNC_5("COPY_NV_REG\tR[0x%06x] &= 0x%08x |= "
       "((R[0x%06x] %s 0x%02x) & 0x%08x ^ 0x%08x)\n",
       VAR_6, VAR_7, VAR_2, (VAR_3 & 0x80) ? "<<" : ">>",
       (VAR_3 & 0x80) ? (0x100 - VAR_3) : VAR_3, VAR_4, VAR_5);
 VAR_0->offset += 22;

 VAR_8 = FUNC_2(FUNC_1(VAR_0, VAR_2), VAR_3);
 FUNC_0(VAR_0, VAR_6, ~VAR_7, (VAR_8 & VAR_4) ^ VAR_5);
}
