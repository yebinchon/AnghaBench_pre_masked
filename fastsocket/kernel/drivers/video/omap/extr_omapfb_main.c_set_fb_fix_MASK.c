
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omapfb_plane_struct {size_t idx; TYPE_2__* fbdev; } ;
struct omapfb_mem_region {int size; int paddr; int vaddr; } ;
struct fb_var_screeninfo {int bits_per_pixel; int xres_virtual; scalar_t__ nonstd; } ;
struct fb_fix_screeninfo {int line_length; int accel; void* visual; int type; int smem_len; int smem_start; } ;
struct fb_info {int mm_lock; int screen_base; struct omapfb_plane_struct* par; struct fb_var_screeninfo var; struct fb_fix_screeninfo fix; } ;
struct TYPE_3__ {struct omapfb_mem_region* region; } ;
struct TYPE_4__ {TYPE_1__ mem_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_4, int VAR_5)
{
 struct fb_fix_screeninfo *VAR_6 = &VAR_4->fix;
 struct fb_var_screeninfo *VAR_7 = &VAR_4->var;
 struct omapfb_plane_struct *VAR_8 = VAR_4->par;
 struct omapfb_mem_region *VAR_9;
 int VAR_10;

 VAR_9 = &VAR_8->fbdev->mem_desc.region[VAR_8->idx];
 VAR_4->screen_base = VAR_9->vaddr;

 if (!VAR_5) {
  FUNC_0(&VAR_4->mm_lock);
  VAR_6->smem_start = VAR_9->paddr;
  VAR_6->smem_len = VAR_9->size;
  FUNC_1(&VAR_4->mm_lock);
 } else {
  VAR_6->smem_start = VAR_9->paddr;
  VAR_6->smem_len = VAR_9->size;
 }

 VAR_6->type = VAR_1;
 VAR_10 = VAR_7->bits_per_pixel;
 if (VAR_7->nonstd)
  VAR_6->visual = VAR_2;
 else switch (VAR_7->bits_per_pixel) {
 case 16:
 case 12:
  VAR_6->visual = VAR_3;

  VAR_10 = 16;
  break;
 case 1:
 case 2:
 case 4:
 case 8:
  VAR_6->visual = VAR_2;
  break;
 }
 VAR_6->accel = VAR_0;
 VAR_6->line_length = VAR_7->xres_virtual * VAR_10 / 8;
}
