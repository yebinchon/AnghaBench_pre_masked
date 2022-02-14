
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct fb_info {scalar_t__ screen_base; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int*,int*) ;
 int FUNC_1 (int *,int,int,int const) ;

void FUNC_2(struct fb_info *VAR_1, u_long VAR_2,
                             int VAR_3, int VAR_4, u32 VAR_5,
                             const u8 *VAR_6, u32 VAR_7, u32 VAR_8)
{
 u32 *VAR_9;
 const u16 *VAR_10;
 int VAR_11;
 u32 VAR_12[4], VAR_13[4], VAR_14;

 VAR_9 = (u32 *)(VAR_1->screen_base + VAR_3 * VAR_2 + (VAR_4 & ~15) / (8 / VAR_0));
 if (VAR_4 & 15) {
  FUNC_1((u8 *)VAR_9 + 1, VAR_8, VAR_7, *VAR_6++);
  VAR_9 += VAR_0 / 2;
  VAR_5 -= 8;
 }

 if (VAR_5 >= 16) {
  VAR_10 = (const u16 *)VAR_6;
  FUNC_0(VAR_8, VAR_7, VAR_12, VAR_13);

  for (VAR_11 = VAR_5 / 16; VAR_11; VAR_11--) {
   u16 VAR_15 = *VAR_10++;
   VAR_14 = VAR_15 | ((u32)VAR_15 << 16);
   *VAR_9++ = (VAR_14 & VAR_12[0]) ^ VAR_13[0];
  }

  VAR_6 = (const u8 *)VAR_10;
  VAR_5 &= 15;
 }

 if (VAR_5)
  FUNC_1((u8 *)VAR_9, VAR_8, VAR_7, *VAR_6);
}
