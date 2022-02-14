
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fb_cmap_user {scalar_t__ start; int len; scalar_t__ transp; scalar_t__ blue; scalar_t__ green; scalar_t__ red; } ;
struct fb_cmap {scalar_t__ start; int len; scalar_t__ transp; scalar_t__ blue; scalar_t__ green; scalar_t__ red; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int) ;

int FUNC_1(const struct fb_cmap *VAR_2, struct fb_cmap_user *VAR_3)
{
 int VAR_4 = 0, VAR_5 = 0;
 int VAR_6;

 if (VAR_3->start > VAR_2->start)
  VAR_5 = VAR_3->start - VAR_2->start;
 else
  VAR_4 = VAR_2->start - VAR_3->start;
 VAR_6 = VAR_3->len - VAR_4;
 if (VAR_6 > (int) (VAR_2->len - VAR_5))
  VAR_6 = VAR_2->len - VAR_5;
 if (VAR_6 <= 0)
  return -VAR_1;
 VAR_6 *= sizeof(u16);

 if (FUNC_0(VAR_3->red+VAR_4, VAR_2->red+VAR_5, VAR_6))
  return -VAR_0;
 if (FUNC_0(VAR_3->green+VAR_4, VAR_2->green+VAR_5, VAR_6))
  return -VAR_0;
 if (FUNC_0(VAR_3->blue+VAR_4, VAR_2->blue+VAR_5, VAR_6))
  return -VAR_0;
 if (VAR_2->transp && VAR_3->transp)
  if (FUNC_0(VAR_3->transp+VAR_4, VAR_2->transp+VAR_5, VAR_6))
   return -VAR_0;
 return 0;
}
