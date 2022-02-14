
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_7__ {int bits_per_pixel; } ;
struct TYPE_5__ {int line_length; int visual; } ;
struct TYPE_8__ {TYPE_3__ var; int cmap; TYPE_1__ fix; } ;
struct pxafb_info {int palette_size; TYPE_4__ fb; TYPE_2__* dma_buff; int * palette_cpu; int cmap_static; } ;
struct fb_var_screeninfo {int bits_per_pixel; int xres_virtual; } ;
struct fb_info {struct fb_var_screeninfo var; } ;
struct TYPE_6__ {int * palette; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fb_var_screeninfo*,struct pxafb_info*) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_3)
{
 struct pxafb_info *VAR_4 = (struct pxafb_info *)VAR_3;
 struct fb_var_screeninfo *VAR_5 = &VAR_3->var;

 if (VAR_5->bits_per_pixel >= 16)
  VAR_4->fb.fix.visual = VAR_2;
 else if (!VAR_4->cmap_static)
  VAR_4->fb.fix.visual = VAR_0;
 else {





  VAR_4->fb.fix.visual = VAR_1;
 }

 VAR_4->fb.fix.line_length = VAR_5->xres_virtual *
      VAR_5->bits_per_pixel / 8;
 if (VAR_5->bits_per_pixel >= 16)
  VAR_4->palette_size = 0;
 else
  VAR_4->palette_size = VAR_5->bits_per_pixel == 1 ?
     4 : 1 << VAR_5->bits_per_pixel;

 VAR_4->palette_cpu = (u16 *)&VAR_4->dma_buff->palette[0];

 if (VAR_4->fb.var.bits_per_pixel >= 16)
  FUNC_1(&VAR_4->fb.cmap);
 else
  FUNC_0(&VAR_4->fb.cmap, 1<<VAR_4->fb.var.bits_per_pixel, 0);

 FUNC_2(VAR_5, VAR_4);

 return 0;
}
