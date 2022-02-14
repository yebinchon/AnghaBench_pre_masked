
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
typedef int u8 ;
struct fb_info {scalar_t__ screen_base; } ;


 int FUNC_0 (int *,int *,int) ;

void FUNC_1(struct fb_info *VAR_0, u_long VAR_1,
   int VAR_2, int VAR_3, int VAR_4, int VAR_5,
   int VAR_6, int VAR_7)
{
 u8 *VAR_8, *VAR_9;
 u_int VAR_10;

 if (VAR_3 == 0 && VAR_5 == 0 && VAR_7 == VAR_1) {
  VAR_8 = (u8 *)VAR_0->screen_base + VAR_2 * (VAR_7 >> 3);
  VAR_9 = (u8 *)VAR_0->screen_base + VAR_4 * (VAR_7 >> 3);
  FUNC_0(VAR_9, VAR_8, VAR_6 * (VAR_7 >> 3));
 } else if (VAR_4 <= VAR_2) {
  VAR_8 = (u8 *)VAR_0->screen_base + VAR_2 * VAR_1 + (VAR_3 >> 3);
  VAR_9 = (u8 *)VAR_0->screen_base + VAR_4 * VAR_1 + (VAR_5 >> 3);
  for (VAR_10 = VAR_6; VAR_10--;) {
   FUNC_0(VAR_9, VAR_8, VAR_7 >> 3);
   VAR_8 += VAR_1;
   VAR_9 += VAR_1;
  }
 } else {
  VAR_8 = (u8 *)VAR_0->screen_base + (VAR_2 + VAR_6 - 1) * VAR_1 + (VAR_3 >> 3);
  VAR_9 = (u8 *)VAR_0->screen_base + (VAR_4 + VAR_6 - 1) * VAR_1 + (VAR_5 >> 3);
  for (VAR_10 = VAR_6; VAR_10--;) {
   FUNC_0(VAR_9, VAR_8, VAR_7 >> 3);
   VAR_8 -= VAR_1;
   VAR_9 -= VAR_1;
  }
 }
}
