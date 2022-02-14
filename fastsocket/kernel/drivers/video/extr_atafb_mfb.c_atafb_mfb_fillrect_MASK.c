
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
typedef int u8 ;
typedef scalar_t__ u32 ;
struct fb_info {scalar_t__ screen_base; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;

void FUNC_3(struct fb_info *VAR_0, u_long VAR_1, u32 VAR_2,
   int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 u8 *VAR_7;
 u_int VAR_8;

 VAR_7 = (u8 *)VAR_0->screen_base + VAR_3 * VAR_1 + (VAR_4 >> 3);

 if (VAR_4 == 0 && VAR_6 == VAR_1) {
  if (VAR_2)
   FUNC_2(VAR_7, VAR_5 * (VAR_6 >> 3));
  else
   FUNC_0(VAR_7, VAR_5 * (VAR_6 >> 3));
 } else {
  for (VAR_8 = VAR_5; VAR_8--; VAR_7 += VAR_1) {
   if (VAR_2)
    FUNC_2(VAR_7, VAR_6 >> 3);
   else
    FUNC_1(VAR_7, VAR_6 >> 3);
  }
 }
}
