
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fb_var_screeninfo {int pixclock; scalar_t__ xres; } ;
struct TYPE_3__ {scalar_t__ xres; } ;
struct TYPE_4__ {TYPE_1__ ct; } ;
struct atyfb_par {scalar_t__ lcd_table; int lcd_pixclock; TYPE_2__ pll; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct atyfb_par*) ;

__attribute__((used)) static u32 FUNC_1(struct fb_var_screeninfo *VAR_2,
         struct atyfb_par *VAR_3)
{
 u32 VAR_4 = VAR_2->pixclock;
 return VAR_4;
}
