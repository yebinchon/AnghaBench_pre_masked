
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fb_info {int dummy; } ;
struct fb_fillrect {int color; scalar_t__ rop; int height; int width; int dy; int dx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_10, const struct fb_fillrect *VAR_11)
{
 u8 VAR_12;

 VAR_12 = VAR_11->color & 0xff;

 while (FUNC_0(VAR_9 + VAR_0) & VAR_8)
  ;


 FUNC_1(VAR_9 + VAR_6, VAR_8 & VAR_12);
 FUNC_1(VAR_9 + VAR_7, (VAR_11->rop == VAR_1 ? VAR_5 : VAR_3));


 FUNC_1(VAR_9 + VAR_6, VAR_8 & ~VAR_12);
 FUNC_1(VAR_9 + VAR_7, (VAR_11->rop == VAR_1 ? VAR_2 : VAR_4));

 FUNC_2(VAR_11->dx, VAR_11->dy, VAR_11->dx, VAR_11->dy, VAR_11->width, VAR_11->height, -1);
}
