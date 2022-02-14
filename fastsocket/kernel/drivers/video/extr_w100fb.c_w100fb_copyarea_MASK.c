
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gmc_brush_datatype; int gmc_rop3; } ;
union dp_gui_master_cntl_u {int val; TYPE_1__ f; } ;
typedef int u32 ;
struct fb_info {scalar_t__ state; int flags; } ;
struct fb_copyarea {int dx; int dy; int sx; int sy; int height; int width; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fb_info*,struct fb_copyarea const*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct fb_info *VAR_9,
                            const struct fb_copyarea *VAR_10)
{
 u32 VAR_11 = VAR_10->dx, VAR_12 = VAR_10->dy, VAR_13 = VAR_10->sx, VAR_14 = VAR_10->sy;
 u32 VAR_15 = VAR_10->height, VAR_16 = VAR_10->width;
 union dp_gui_master_cntl_u VAR_17;

 if (VAR_9->state != VAR_1)
  return;
 if (VAR_9->flags & VAR_0) {
  FUNC_0(VAR_9, VAR_10);
  return;
 }

 VAR_17.val = FUNC_1(VAR_8 + VAR_4);
 VAR_17.f.gmc_rop3 = VAR_3;
 VAR_17.f.gmc_brush_datatype = VAR_2;
 FUNC_2(1);
 FUNC_3(VAR_17.val, VAR_8 + VAR_4);

 FUNC_2(3);
 FUNC_3((VAR_14 << 16) | (VAR_13 & 0xffff), VAR_8 + VAR_7);
 FUNC_3((VAR_12 << 16) | (VAR_11 & 0xffff), VAR_8 + VAR_6);
 FUNC_3((VAR_16 << 16) | (VAR_15 & 0xffff), VAR_8 + VAR_5);
}
