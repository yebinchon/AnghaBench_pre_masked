
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nouveau_bios {int dummy; } ;
struct bit_entry {int version; int length; scalar_t__ offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nouveau_bios*,char,struct bit_entry*) ;
 int FUNC_1 (struct nouveau_bios*,int) ;
 int FUNC_2 (struct nouveau_bios*,int) ;
 int FUNC_3 (struct nouveau_bios*,scalar_t__) ;

int
FUNC_4(struct nouveau_bios *VAR_5)
{
 struct bit_entry VAR_6;
 u8 VAR_7;

 VAR_7 = (FUNC_1(VAR_5, 0x101000) & 0x0000003c) >> 2;
 if (!FUNC_0(VAR_5, 'M', &VAR_6) && VAR_6.version == 2 && VAR_6.length >= 5) {
  u16 VAR_8 = FUNC_3(VAR_5, VAR_6.offset + 3);
  u8 VAR_9 = FUNC_2(VAR_5, VAR_8 + 0);
  u8 VAR_10 = FUNC_2(VAR_5, VAR_8 + 1);
  u8 VAR_11 = FUNC_2(VAR_5, VAR_8 + 2);
  u8 VAR_12 = FUNC_2(VAR_5, VAR_8 + 3);
  if (VAR_8 && VAR_9 == 0x10 && VAR_7 < VAR_12) {
   u16 VAR_13 = VAR_8 + VAR_10 + (VAR_7 * VAR_11);
   switch (FUNC_2(VAR_5, VAR_13) & 0x0f) {
   case 0: return VAR_0;
   case 1: return VAR_1;
   case 2: return VAR_2;
   case 3: return VAR_3;
   default:
    break;
   }

  }
 }

 return VAR_4;
}
