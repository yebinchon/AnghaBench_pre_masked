
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_2__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; int member_8; int member_9; int member_10; int member_11; int member_12; int member_13; int member_14; int member_15; } ;
struct lcn_tx_iir_filter {int member_0; scalar_t__ type; int * values; TYPE_1__ member_1; } ;
struct b43_wldev {int dummy; } ;


 int FUNC_0 (struct lcn_tx_iir_filter*) ;
 int FUNC_1 (struct b43_wldev*,int,int ) ;

__attribute__((used)) static bool FUNC_2(struct b43_wldev *VAR_0,
            u8 VAR_1)
{
 int VAR_2, VAR_3;
 u16 VAR_4[] = { 0x910, 0x91e, 0x91f, 0x924, 0x925, 0x926, 0x920,
      0x921, 0x927, 0x928, 0x929, 0x922, 0x923, 0x930,
      0x931, 0x932 };


 struct lcn_tx_iir_filter VAR_5[] = {
  { 0, { 1, 415, 1874, 64, 128, 64, 792, 1656, 64, 128, 64, 778,
   1582, 64, 128, 64 } },
  { 1, { 1, 402, 1847, 259, 59, 259, 671, 1794, 68, 54, 68, 608,
   1863, 93, 167, 93 } },
  { 2, { 1, 415, 1874, 64, 128, 64, 792, 1656, 192, 384, 192,
   778, 1582, 64, 128, 64 } },
  { 3, { 1, 302, 1841, 129, 258, 129, 658, 1720, 205, 410, 205,
   754, 1760, 170, 340, 170 } },
  { 20, { 1, 360, 1884, 242, 1734, 242, 752, 1720, 205, 1845, 205,
   767, 1760, 256, 185, 256 } },
  { 21, { 1, 360, 1884, 149, 1874, 149, 752, 1720, 205, 1883, 205,
   767, 1760, 256, 273, 256 } },
  { 22, { 1, 360, 1884, 98, 1948, 98, 752, 1720, 205, 1924, 205,
   767, 1760, 256, 352, 256 } },
  { 23, { 1, 350, 1884, 116, 1966, 116, 752, 1720, 205, 2008, 205,
   767, 1760, 128, 233, 128 } },
  { 24, { 1, 325, 1884, 32, 40, 32, 756, 1720, 256, 471, 256, 766,
   1760, 256, 1881, 256 } },
  { 25, { 1, 299, 1884, 51, 64, 51, 736, 1720, 256, 471, 256, 765,
   1760, 262, 1878, 262 } },


  { 26, { 1, 277, 1943, 39, 117, 88, 637, 1838, 64, 192, 144, 614,
   1864, 128, 384, 288 } },
  { 27, { 1, 245, 1943, 49, 147, 110, 626, 1838, 256, 768, 576,
   613, 1864, 128, 384, 288 } },
  { 30, { 1, 302, 1841, 61, 122, 61, 658, 1720, 205, 410, 205,
   754, 1760, 170, 340, 170 } },
 };

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_5); VAR_2++) {
  if (VAR_5[VAR_2].type == VAR_1) {
   for (VAR_3 = 0; VAR_3 < 16; VAR_3++)
    FUNC_1(VAR_0, VAR_4[VAR_3],
           VAR_5[VAR_2].values[VAR_3]);
   return 1;
  }
 }

 return 0;
}
