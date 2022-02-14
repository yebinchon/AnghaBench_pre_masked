
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w100fb_par {unsigned long hsync_len; scalar_t__ blanked; } ;
struct fb_info {struct w100fb_par* par; } ;
struct device {int dummy; } ;


 struct fb_info* FUNC_0 (struct device*) ;

unsigned long FUNC_1(struct device *VAR_0)
{
 struct fb_info *VAR_1 = FUNC_0(VAR_0);
 struct w100fb_par *VAR_2=VAR_1->par;


 if (VAR_2->blanked)
  return 0;
 else
  return VAR_2->hsync_len;
}
