
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; } ;
struct fb_var_screeninfo {TYPE_1__ green; } ;



__attribute__((used)) static int FUNC_0(const struct fb_var_screeninfo *VAR_0)
{
 int VAR_1 = 256;

 switch (VAR_0->green.length) {
 case 8:
  VAR_1 = 256;
  break;
 case 5:
  VAR_1 = 32;
  break;
 case 6:
  VAR_1 = 64;
  break;
 default:

  break;
 }
 return VAR_1;
}
