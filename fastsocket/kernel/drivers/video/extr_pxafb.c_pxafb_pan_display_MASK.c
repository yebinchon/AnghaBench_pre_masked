
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxafb_info {scalar_t__ state; int lccr0; int* fdadr; } ;
struct fb_var_screeninfo {int dummy; } ;
struct fb_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pxafb_info*,int ,int) ;
 int FUNC_1 (struct pxafb_info*,int) ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_6,
        struct fb_info *VAR_7)
{
 struct pxafb_info *VAR_8 = (struct pxafb_info *)VAR_7;
 int VAR_9 = VAR_2 + VAR_1;

 if (VAR_8->state != VAR_0)
  return 0;

 FUNC_1(VAR_8, 1);

 if (VAR_8->lccr0 & VAR_5)
  FUNC_0(VAR_8, VAR_4, VAR_8->fdadr[VAR_9 + 1] | 0x1);

 FUNC_0(VAR_8, VAR_3, VAR_8->fdadr[VAR_9] | 0x1);
 return 0;
}
