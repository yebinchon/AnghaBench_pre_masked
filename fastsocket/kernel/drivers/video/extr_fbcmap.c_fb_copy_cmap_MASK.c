
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fb_cmap {scalar_t__ start; int len; scalar_t__ transp; scalar_t__ blue; scalar_t__ green; scalar_t__ red; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int) ;

int FUNC_1(const struct fb_cmap *VAR_1, struct fb_cmap *VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0;
 int VAR_5;

 if (VAR_2->start > VAR_1->start)
  VAR_4 = VAR_2->start - VAR_1->start;
 else
  VAR_3 = VAR_1->start - VAR_2->start;
 VAR_5 = VAR_2->len - VAR_3;
 if (VAR_5 > (int) (VAR_1->len - VAR_4))
  VAR_5 = VAR_1->len - VAR_4;
 if (VAR_5 <= 0)
  return -VAR_0;
 VAR_5 *= sizeof(u16);

 FUNC_0(VAR_2->red+VAR_3, VAR_1->red+VAR_4, VAR_5);
 FUNC_0(VAR_2->green+VAR_3, VAR_1->green+VAR_4, VAR_5);
 FUNC_0(VAR_2->blue+VAR_3, VAR_1->blue+VAR_4, VAR_5);
 if (VAR_1->transp && VAR_2->transp)
  FUNC_0(VAR_2->transp+VAR_3, VAR_1->transp+VAR_4, VAR_5);
 return 0;
}
