
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fb_info {int dummy; } ;


 int* VAR_0 ;

__attribute__((used)) static int FUNC_0(u_int VAR_1, u_int VAR_2, u_int VAR_3, u_int VAR_4,
      u_int VAR_5, struct fb_info *VAR_6)
{
 if (VAR_1 > 15)
  return 1;

 VAR_0[VAR_1] = ((VAR_2 & 0xff00) << 8) | (VAR_3 & 0xff00) |
     ((VAR_4 & 0xff00) >> 8);
 return 0;
}
