
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u32 ;
struct fb_info {int* pseudo_palette; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(u_int VAR_1, u_int VAR_2, u_int VAR_3, u_int VAR_4,
      u_int VAR_5, struct fb_info *VAR_6)
{
 u32 VAR_7, VAR_8 = 1;

 if (VAR_1 < VAR_0) {
  u32 *VAR_9 = VAR_6->pseudo_palette;

  VAR_7 = (VAR_2 & 0xf800) | ((VAR_3 & 0xfc00) >> 5) |
   ((VAR_4 & 0xf800) >> 11);
  VAR_9[VAR_1] = VAR_7;
  VAR_8 = 0;
 }

 return VAR_8;
}
