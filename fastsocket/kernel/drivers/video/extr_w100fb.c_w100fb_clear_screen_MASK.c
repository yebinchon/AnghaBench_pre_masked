
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w100fb_par {int xres; int yres; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_1(struct w100fb_par *VAR_4)
{
 FUNC_0(VAR_3 + (VAR_2-VAR_1), 0, (VAR_4->xres * VAR_4->yres * VAR_0/8));
}
