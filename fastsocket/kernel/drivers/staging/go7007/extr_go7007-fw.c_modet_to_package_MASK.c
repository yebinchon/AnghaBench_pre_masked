
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct go7007 {int* modet_map; TYPE_1__* modet; } ;
typedef int __le16 ;
struct TYPE_2__ {int pixel_threshold; int motion_threshold; int mb_threshold; } ;


 int FUNC_0 (int *,int*,int,int) ;
 int FUNC_1 (int*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct go7007 *VAR_0, __le16 *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7 = 0;
 u16 VAR_8[32];
 u16 VAR_9[] = {
  0x200e, 0,
  0xbf82, VAR_0->modet[0].pixel_threshold,
  0xbf83, VAR_0->modet[1].pixel_threshold,
  0xbf84, VAR_0->modet[2].pixel_threshold,
  0xbf85, VAR_0->modet[3].pixel_threshold,
  0xbf86, VAR_0->modet[0].motion_threshold,
  0xbf87, VAR_0->modet[1].motion_threshold,
  0xbf88, VAR_0->modet[2].motion_threshold,
  0xbf89, VAR_0->modet[3].motion_threshold,
  0xbf8a, VAR_0->modet[0].mb_threshold,
  0xbf8b, VAR_0->modet[1].mb_threshold,
  0xbf8c, VAR_0->modet[2].mb_threshold,
  0xbf8d, VAR_0->modet[3].mb_threshold,
  0xbf8e, 0,
  0xbf8f, 0,
  0, 0,
 };

 VAR_3 = FUNC_0(VAR_1, VAR_9, 1, VAR_2);
 if (VAR_3 < 0)
  return -1;
 VAR_7 += VAR_3;

 VAR_6 = 0xbac0;
 FUNC_1(VAR_8, 0, 64);
 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < 1624; ++VAR_4) {
  VAR_8[VAR_5 * 2 + 3] <<= 2;
  VAR_8[VAR_5 * 2 + 3] |= VAR_0->modet_map[VAR_4];
  if (VAR_4 % 8 != 7)
   continue;
  VAR_8[VAR_5 * 2 + 2] = VAR_6++;
  ++VAR_5;
  if (VAR_5 == 10 || VAR_4 == 1623) {
   VAR_8[0] = 0x2000 | VAR_5;
   VAR_3 = FUNC_0(VAR_1 + VAR_7, VAR_8, 1, VAR_2 - VAR_7);
   if (VAR_3 < 0)
    return -1;
   VAR_7 += VAR_3;
   VAR_5 = 0;
   FUNC_1(VAR_8, 0, 64);
  }
  VAR_8[VAR_5 * 2 + 3] = 0;
 }

 FUNC_1(VAR_8, 0, 64);
 VAR_5 = 0;
 for (VAR_6 = 0xbb90; VAR_6 < 0xbbfa; ++VAR_6) {
  VAR_8[VAR_5 * 2 + 2] = VAR_6;
  VAR_8[VAR_5 * 2 + 3] = 0;
  ++VAR_5;
  if (VAR_5 == 10 || VAR_6 == 0xbbf9) {
   VAR_8[0] = 0x2000 | VAR_5;
   VAR_3 = FUNC_0(VAR_1 + VAR_7, VAR_8, 1, VAR_2 - VAR_7);
   if (VAR_3 < 0)
    return -1;
   VAR_7 += VAR_3;
   VAR_5 = 0;
   FUNC_1(VAR_8, 0, 64);
  }
 }
 return VAR_7;
}
