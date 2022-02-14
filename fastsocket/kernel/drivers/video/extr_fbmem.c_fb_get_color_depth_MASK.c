
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int length; scalar_t__ offset; } ;
struct TYPE_5__ {int length; scalar_t__ offset; } ;
struct TYPE_4__ {int length; scalar_t__ offset; } ;
struct fb_var_screeninfo {TYPE_3__ blue; TYPE_2__ red; TYPE_1__ green; } ;
struct fb_fix_screeninfo {scalar_t__ visual; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(struct fb_var_screeninfo *VAR_2,
         struct fb_fix_screeninfo *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3->visual == VAR_0 ||
     VAR_3->visual == VAR_1)
  VAR_4 = 1;
 else {
  if (VAR_2->green.length == VAR_2->blue.length &&
      VAR_2->green.length == VAR_2->red.length &&
      VAR_2->green.offset == VAR_2->blue.offset &&
      VAR_2->green.offset == VAR_2->red.offset)
   VAR_4 = VAR_2->green.length;
  else
   VAR_4 = VAR_2->green.length + VAR_2->red.length +
    VAR_2->blue.length;
 }

 return VAR_4;
}
