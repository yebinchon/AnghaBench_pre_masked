
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct au1200_lcd_window_regs_t {int xpos; int ypos; int alpha_color; int alpha_mode; int priority; int channel; int buffer_format; int color_order; int pixel_order; int xsize; int ysize; int colorkey_mode; int double_buffer_mode; int ram_array_mode; unsigned int enable; } ;
struct TYPE_4__ {unsigned int winenable; TYPE_1__* window; } ;
struct TYPE_3__ {int winctrl0; int winctrl1; int winctrl2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 () ;
 TYPE_2__* VAR_14 ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_15,
 struct au1200_lcd_window_regs_t *VAR_16)
{

 VAR_16->xpos = (VAR_14->window[VAR_15].winctrl0 & VAR_2) >> 21;
 VAR_16->ypos = (VAR_14->window[VAR_15].winctrl0 & VAR_3) >> 10;
 VAR_16->alpha_color = (VAR_14->window[VAR_15].winctrl0 & VAR_0) >> 2;
 VAR_16->alpha_mode = (VAR_14->window[VAR_15].winctrl0 & VAR_1) >> 1;


 VAR_16->priority = (VAR_14->window[VAR_15].winctrl1& VAR_8) >> 30;
 VAR_16->channel = (VAR_14->window[VAR_15].winctrl1 & VAR_6) >> 29;
 VAR_16->buffer_format = (VAR_14->window[VAR_15].winctrl1 & VAR_5) >> 25;
 VAR_16->color_order = (VAR_14->window[VAR_15].winctrl1 & VAR_4) >> 24;
 VAR_16->pixel_order = (VAR_14->window[VAR_15].winctrl1 & VAR_7) >> 22;
 VAR_16->xsize = ((VAR_14->window[VAR_15].winctrl1 & VAR_9) >> 11) + 1;
 VAR_16->ysize = (VAR_14->window[VAR_15].winctrl1 & VAR_10) + 1;


 VAR_16->colorkey_mode = (VAR_14->window[VAR_15].winctrl2 & VAR_11) >> 24;
 VAR_16->double_buffer_mode = (VAR_14->window[VAR_15].winctrl2 & VAR_12) >> 23;
 VAR_16->ram_array_mode = (VAR_14->window[VAR_15].winctrl2 & VAR_13) >> 21;

 VAR_16->enable = (VAR_14->winenable >> VAR_15) & 1;
 FUNC_0();
}
