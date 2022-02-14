
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sgi_gbe {int dummy; } ;
struct fb_var_screeninfo {int bits_per_pixel; int xres_virtual; } ;
struct fb_fix_screeninfo {unsigned long smem_start; int line_length; int mmio_len; int mmio_start; scalar_t__ ypanstep; scalar_t__ xpanstep; scalar_t__ ywrapstep; int visual; int accel; scalar_t__ type_aux; int type; int smem_len; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct fb_fix_screeninfo*,int ,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct fb_fix_screeninfo *VAR_7,
        struct fb_var_screeninfo *VAR_8)
{
 FUNC_0(VAR_7, 0, sizeof(struct fb_fix_screeninfo));
 FUNC_1(VAR_7->id, "SGI GBE");
 VAR_7->smem_start = (unsigned long) VAR_5;
 VAR_7->smem_len = VAR_6;
 VAR_7->type = VAR_1;
 VAR_7->type_aux = 0;
 VAR_7->accel = VAR_0;
 switch (VAR_8->bits_per_pixel) {
 case 8:
  VAR_7->visual = VAR_2;
  break;
 default:
  VAR_7->visual = VAR_3;
  break;
 }
 VAR_7->ywrapstep = 0;
 VAR_7->xpanstep = 0;
 VAR_7->ypanstep = 0;
 VAR_7->line_length = VAR_8->xres_virtual * VAR_8->bits_per_pixel / 8;
 VAR_7->mmio_start = VAR_4;
 VAR_7->mmio_len = sizeof(struct sgi_gbe);
}
