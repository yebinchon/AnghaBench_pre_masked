
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u8 ;
typedef int u32 ;
struct fb_info {scalar_t__ screen_base; } ;


 int VAR_0 ;
 int FUNC_0 (int,int*) ;
 int FUNC_1 (int,int*) ;
 int* FUNC_2 (int*,int,int*) ;
 int FUNC_3 (int *,int*) ;

void FUNC_4(struct fb_info *VAR_1, u_long VAR_2, u32 VAR_3,
                             int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 u32 *VAR_8;
 int VAR_9, VAR_10;
 u32 VAR_11[4];

 VAR_8 = (u32 *)(VAR_1->screen_base + VAR_4 * VAR_2 + (VAR_5 & ~15) / (8 / VAR_0));
 if (VAR_5 & 15) {
  u8 *VAR_12 = (u8 *)VAR_8 + 1;

  FUNC_1(VAR_3, VAR_11);

  for (VAR_10 = VAR_6; VAR_10; VAR_10--) {
   FUNC_3(VAR_12, VAR_11);
   VAR_12 += VAR_2;
  }
  VAR_8 += VAR_0 / 2;
  VAR_7 -= 8;
 }

 FUNC_0(VAR_3, VAR_11);
 VAR_9 = VAR_7 >> 4;
 if (VAR_9) {
  u32 *VAR_13 = VAR_8;
  u32 VAR_14 = VAR_2 - VAR_9 * VAR_0 * 2;
  for (VAR_10 = VAR_6; VAR_10; VAR_10--) {
   VAR_13 = FUNC_2(VAR_13, VAR_9, VAR_11);
   VAR_13 = (u32 *)((long)VAR_13 + VAR_14);
  }
  VAR_8 += VAR_9 * VAR_0 / 2;
  VAR_7 &= 15;
 }

 if (VAR_7) {
  u8 *VAR_15 = (u8 *)VAR_8;

  FUNC_1(VAR_3, VAR_11);

  for (VAR_10 = VAR_6; VAR_10; VAR_10--) {
   FUNC_3(VAR_15, VAR_11);
   VAR_15 += VAR_2;
  }
 }
}
