
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct au1200_lcd_global_regs_t {int xsize; int ysize; unsigned int brightness; int mask; int colorkey; int backcolor; } ;
struct TYPE_2__ {int screen; int pwmhi; int pwmdiv; int colorkeymsk; int colorkey; int backcolor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_1(u_int VAR_3, struct au1200_lcd_global_regs_t *VAR_4)
{
 unsigned int VAR_5, VAR_6;

 VAR_4->xsize = ((VAR_2->screen & VAR_0) >> 19) + 1;
 VAR_4->ysize = ((VAR_2->screen & VAR_1) >> 8) + 1;

 VAR_4->backcolor = VAR_2->backcolor;
 VAR_4->colorkey = VAR_2->colorkey;
 VAR_4->mask = VAR_2->colorkeymsk;


 VAR_5 = (VAR_2->pwmhi >> 16) + 1;
 VAR_6 = (VAR_2->pwmdiv & 0x3FFFF) + 1;
 VAR_4->brightness = ((VAR_5 << 8) / VAR_6) - 1;
 FUNC_0();
}
