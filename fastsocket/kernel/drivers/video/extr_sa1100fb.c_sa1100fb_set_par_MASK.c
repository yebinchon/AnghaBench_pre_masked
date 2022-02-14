
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__ visual; int line_length; } ;
struct TYPE_4__ {TYPE_1__ fix; } ;
struct sa1100fb_info {int palette_size; unsigned long map_cpu; TYPE_2__ fb; scalar_t__ map_dma; scalar_t__ palette_dma; int * palette_cpu; int cmap_static; } ;
struct fb_var_screeninfo {int bits_per_pixel; int xres_virtual; } ;
struct fb_info {struct fb_var_screeninfo var; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_1 (struct fb_var_screeninfo*,struct sa1100fb_info*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_4)
{
 struct sa1100fb_info *VAR_5 = (struct sa1100fb_info *)VAR_4;
 struct fb_var_screeninfo *VAR_6 = &VAR_4->var;
 unsigned long VAR_7;

 FUNC_0("set_par\n");

 if (VAR_6->bits_per_pixel == 16)
  VAR_5->fb.fix.visual = VAR_2;
 else if (!VAR_5->cmap_static)
  VAR_5->fb.fix.visual = VAR_0;
 else {





  VAR_5->fb.fix.visual = VAR_1;
 }

 VAR_5->fb.fix.line_length = VAR_6->xres_virtual *
      VAR_6->bits_per_pixel / 8;
 VAR_5->palette_size = VAR_6->bits_per_pixel == 8 ? 256 : 16;

 VAR_7 = VAR_5->palette_size * sizeof(u16);

 FUNC_0("palette_mem_size = 0x%08lx\n", (u_long) VAR_7);

 VAR_5->palette_cpu = (u16 *)(VAR_5->map_cpu + VAR_3 - VAR_7);
 VAR_5->palette_dma = VAR_5->map_dma + VAR_3 - VAR_7;




 FUNC_2(VAR_5->fb.fix.visual == VAR_2);
 FUNC_1(VAR_6, VAR_5);

 return 0;
}
