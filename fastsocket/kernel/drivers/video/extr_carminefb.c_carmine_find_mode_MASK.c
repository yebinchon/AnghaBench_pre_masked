
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fb_var_screeninfo {scalar_t__ xres; scalar_t__ yres; } ;
struct TYPE_3__ {scalar_t__ hdp; scalar_t__ vdp; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(const struct fb_var_screeninfo *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
  if (VAR_1[VAR_3].hdp == VAR_2->xres &&
      VAR_1[VAR_3].vdp == VAR_2->yres)
   return VAR_3;
 return -VAR_0;
}
