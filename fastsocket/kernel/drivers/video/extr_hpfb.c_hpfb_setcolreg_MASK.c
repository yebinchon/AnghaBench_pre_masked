
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int len; } ;
struct fb_info {TYPE_1__ cmap; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(unsigned VAR_1, unsigned VAR_2, unsigned VAR_3,
     unsigned VAR_4, unsigned VAR_5,
     struct fb_info *VAR_6)
{

 unsigned char VAR_7 =VAR_2>>8;
 unsigned char VAR_8=VAR_3>>8;
 unsigned char VAR_9 =VAR_4>>8;
 unsigned char VAR_10=VAR_1;
 if (VAR_1 >= VAR_6->cmap.len)
  return 1;

 while (FUNC_0(VAR_0 + 0x6002) & 0x4) FUNC_2(1);

 FUNC_1(VAR_0 + 0x60ba, 0xff);

 FUNC_1(VAR_0 + 0x60b2, VAR_7);
 FUNC_1(VAR_0 + 0x60b4, VAR_8);
 FUNC_1(VAR_0 + 0x60b6, VAR_9);
 FUNC_1(VAR_0 + 0x60b8, ~VAR_10);
 FUNC_1(VAR_0 + 0x60f0, 0xff);

 FUNC_2(100);

 while (FUNC_0(VAR_0 + 0x6002) & 0x4) FUNC_2(1);
 FUNC_1(VAR_0 + 0x60b2, 0);
 FUNC_1(VAR_0 + 0x60b4, 0);
 FUNC_1(VAR_0 + 0x60b6, 0);
 FUNC_1(VAR_0 + 0x60b8, 0);

 return 0;
}
