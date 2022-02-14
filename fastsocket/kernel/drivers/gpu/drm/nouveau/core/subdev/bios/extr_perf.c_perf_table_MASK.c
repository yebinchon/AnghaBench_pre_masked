
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nouveau_bios {int bmp_offset; } ;
struct bit_entry {int version; int offset; } ;


 int FUNC_0 (struct nouveau_bios*,char,struct bit_entry*) ;
 int FUNC_1 (struct nouveau_bios*,char*,int) ;
 int FUNC_2 (struct nouveau_bios*,int) ;
 int FUNC_3 (struct nouveau_bios*,int) ;

__attribute__((used)) static u16
FUNC_4(struct nouveau_bios *VAR_0, u8 *VAR_1, u8 *VAR_2, u8 *VAR_3, u8 *VAR_4)
{
 struct bit_entry VAR_5;
 u16 VAR_6 = 0x0000;

 if (!FUNC_0(VAR_0, 'P', &VAR_5)) {
  if (VAR_5.version <= 2) {
   VAR_6 = FUNC_3(VAR_0, VAR_5.offset + 0);
   if (VAR_6) {
    *VAR_1 = FUNC_2(VAR_0, VAR_6 + 0);
    *VAR_2 = FUNC_2(VAR_0, VAR_6 + 1);
   }
  } else
   FUNC_1(VAR_0, "unknown offset for perf in BIT P %d\n",
    VAR_5.version);
 }

 if (VAR_0->bmp_offset) {
  if (FUNC_2(VAR_0, VAR_0->bmp_offset + 6) >= 0x25) {
   VAR_6 = FUNC_3(VAR_0, VAR_0->bmp_offset + 0x94);
   if (VAR_6) {
    *VAR_2 = FUNC_2(VAR_0, VAR_6 + 0);
    *VAR_1 = FUNC_2(VAR_0, VAR_6 + 1);
   }
  }
 }

 return VAR_6;
}
