
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {int dummy; } ;
struct fb_cmap {unsigned short* red; unsigned short* green; unsigned short* blue; int len; scalar_t__ start; int * transp; } ;
struct TYPE_2__ {int (* blank ) (int) ;} ;


 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct fb_cmap*,struct fb_info*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (unsigned short*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(int VAR_1, struct fb_info *VAR_2)
{
 unsigned short VAR_3[16];
 struct fb_cmap VAR_4;
 if (VAR_0->blank && !VAR_0->blank(VAR_1))
  return 1;
 if (VAR_1) {
  FUNC_2(VAR_3, 0, 16 * sizeof(unsigned short));
  VAR_4.red = VAR_3;
  VAR_4.green = VAR_3;
  VAR_4.blue = VAR_3;
  VAR_4.transp = ((void*)0);
  VAR_4.start = 0;
  VAR_4.len = 16;
  FUNC_1(&VAR_4, VAR_2);
 }




 return 0;
}
