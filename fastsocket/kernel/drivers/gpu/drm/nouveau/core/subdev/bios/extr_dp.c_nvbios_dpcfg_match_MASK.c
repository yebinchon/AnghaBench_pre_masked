
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct nvbios_dpcfg {int dummy; } ;
struct nouveau_bios {int dummy; } ;


 int FUNC_0 (struct nouveau_bios*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct nouveau_bios*,scalar_t__,int,int*,int*,int*,int*) ;
 scalar_t__ FUNC_2 (struct nouveau_bios*,scalar_t__,int,int*,int*,int*,int*,struct nvbios_dpcfg*) ;

u16
FUNC_3(struct nouveau_bios *VAR_0, u16 VAR_1, u8 VAR_2, u8 VAR_3, u8 VAR_4,
     u8 *VAR_5, u8 *VAR_6, u8 *VAR_7, u8 *VAR_8,
     struct nvbios_dpcfg *VAR_9)
{
 u8 VAR_10 = 0xff;
 u16 VAR_11;

 if (*VAR_5 >= 0x30) {
  const u8 VAR_12[] = { 0, 4, 7, 9 };
  VAR_10 = (VAR_2 * 10) + VAR_12[VAR_3] + VAR_4;
 } else {
  while ((VAR_11 = FUNC_1(VAR_0, VAR_1, VAR_10,
        VAR_5, VAR_6, VAR_7, VAR_8))) {
   if (FUNC_0(VAR_0, VAR_11 + 0x00) == VAR_3 &&
       FUNC_0(VAR_0, VAR_11 + 0x01) == VAR_4)
    break;
   VAR_10++;
  }
 }

 return FUNC_2(VAR_0, VAR_1, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
