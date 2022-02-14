
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int cnt; } ;
struct TYPE_8__ {TYPE_3__ vsync; } ;
struct TYPE_5__ {scalar_t__ yres; } ;
struct TYPE_6__ {TYPE_1__ var; } ;
struct matrox_fb_info {TYPE_4__ crtc1; int irq_flags; TYPE_2__ fbcon; } ;
struct fb_vblank {int flags; scalar_t__ vcount; int count; } ;


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
 int FUNC_0 (struct matrox_fb_info*,int ) ;
 int FUNC_1 (struct fb_vblank*,int ,int) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct matrox_fb_info *VAR_10,
          struct fb_vblank *VAR_11)
{
 unsigned int VAR_12;

 FUNC_0(VAR_10, 0);
 FUNC_1(VAR_11, 0, sizeof(*VAR_11));
 VAR_11->flags = VAR_3 | VAR_4 |
   VAR_2 | VAR_1;
 VAR_12 = FUNC_2(VAR_8);
 VAR_11->vcount = FUNC_3(VAR_9);



 if (VAR_12 & 1)
  VAR_11->flags |= VAR_5;
 if (VAR_12 & 8)
  VAR_11->flags |= VAR_7;
 if (VAR_11->vcount >= VAR_10->fbcon.var.yres)
  VAR_11->flags |= VAR_6;
 if (FUNC_4(0, &VAR_10->irq_flags)) {
  VAR_11->flags |= VAR_0;


  VAR_11->count = VAR_10->crtc1.vsync.cnt;
 }
 return 0;
}
