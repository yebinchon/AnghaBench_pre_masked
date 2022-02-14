
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fb_info {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(u_int VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3,
        u_int VAR_4, struct fb_info *VAR_5)
{
 if (VAR_0 > 255)
  return 1;
 VAR_1 >>= 8;
 VAR_2 >>= 8;
 VAR_3 >>= 8;
 FUNC_0(VAR_0, 0x3c8);
 FUNC_1(1);
 FUNC_0(VAR_1, 0x3c9);
 FUNC_0(VAR_2, 0x3c9);
 FUNC_0(VAR_3, 0x3c9);

 return 0;
}
