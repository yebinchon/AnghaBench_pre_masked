
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_cmap {int dummy; } ;


 struct fb_cmap const VAR_0 ;
 struct fb_cmap const VAR_1 ;
 struct fb_cmap const VAR_2 ;
 struct fb_cmap const VAR_3 ;

const struct fb_cmap *FUNC_0(int VAR_4)
{
    if (VAR_4 <= 2)
 return &VAR_1;
    if (VAR_4 <= 4)
 return &VAR_2;
    if (VAR_4 <= 8)
 return &VAR_3;
    return &VAR_0;
}
