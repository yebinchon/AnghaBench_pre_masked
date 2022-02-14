
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned long) ;

__attribute__((used)) static int FUNC_1(unsigned VAR_1, unsigned VAR_2, unsigned VAR_3,
         unsigned VAR_4, unsigned VAR_5, struct fb_info *VAR_6)
{

 unsigned long VAR_7 = 0;

 VAR_2 >>= 8;
 VAR_3 >>= 8;
 VAR_4 >>= 8;

 VAR_7 = (VAR_4 << 16) + (VAR_3 << 8) + (VAR_2);

 FUNC_0(VAR_0 + VAR_1,
           VAR_7);
 return 0;
}
