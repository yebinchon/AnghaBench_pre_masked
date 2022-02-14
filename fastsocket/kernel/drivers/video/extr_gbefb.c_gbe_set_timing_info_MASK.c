
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gbe_timing_info {int pll_m; int pll_n; int pll_p; int htotal; int vtotal; int vsync_start; int vsync_end; int hsync_start; int hsync_end; int vblank_start; int vblank_end; int hblank_start; int hblank_end; int width; } ;
struct TYPE_2__ {unsigned int dotclock; unsigned int vt_xymax; unsigned int vt_vsync; unsigned int vt_hsync; unsigned int vt_vblank; unsigned int vt_hblank; unsigned int vt_vcmap; unsigned int vt_hcmap; unsigned int did_start_xy; unsigned int crs_start_xy; unsigned int vc_start_xy; unsigned int vt_hpixen; unsigned int vt_vpixen; unsigned int vt_flags; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int ,int ,unsigned int,int) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 scalar_t__ VAR_46 ;
 TYPE_1__* VAR_47 ;
 int FUNC_1 (struct gbe_timing_info*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct gbe_timing_info *VAR_48)
{
 int VAR_49;
 unsigned int VAR_50;


 VAR_50 = 0;
 FUNC_0(VAR_6, VAR_18, VAR_50, VAR_48->pll_m - 1);
 FUNC_0(VAR_6, VAR_21, VAR_50, VAR_48->pll_n - 1);
 FUNC_0(VAR_6, VAR_22, VAR_50, VAR_48->pll_p);
 FUNC_0(VAR_6, VAR_23, VAR_50, 0);
 VAR_47->dotclock = VAR_50;
 FUNC_2(10000);


 VAR_50 = 0;
 FUNC_0(VAR_45, VAR_19, VAR_50, VAR_48->htotal);
 FUNC_0(VAR_45, VAR_20, VAR_50, VAR_48->vtotal);
 VAR_47->vt_xymax = VAR_50;


 VAR_50 = 0;
 FUNC_0(VAR_44, VAR_35, VAR_50, VAR_48->vsync_start);
 FUNC_0(VAR_44, VAR_34, VAR_50, VAR_48->vsync_end);
 VAR_47->vt_vsync = VAR_50;
 VAR_50 = 0;
 FUNC_0(VAR_40, VAR_17, VAR_50, VAR_48->hsync_start);
 FUNC_0(VAR_40, VAR_16, VAR_50, VAR_48->hsync_end);
 VAR_47->vt_hsync = VAR_50;
 VAR_50 = 0;
 FUNC_0(VAR_41, VAR_26, VAR_50, VAR_48->vblank_start);
 FUNC_0(VAR_41, VAR_25, VAR_50, VAR_48->vblank_end);
 VAR_47->vt_vblank = VAR_50;
 VAR_50 = 0;
 FUNC_0(VAR_37, VAR_11, VAR_50,
        VAR_48->hblank_start - 5);
 FUNC_0(VAR_37, VAR_10, VAR_50,
        VAR_48->hblank_end - 3);
 VAR_47->vt_hblank = VAR_50;


 VAR_50 = 0;
 FUNC_0(VAR_42, VAR_28, VAR_50, VAR_48->vblank_start);
 FUNC_0(VAR_42, VAR_27, VAR_50, VAR_48->vblank_end);
 VAR_47->vt_vcmap = VAR_50;
 VAR_50 = 0;
 FUNC_0(VAR_38, VAR_13, VAR_50, VAR_48->hblank_start);
 FUNC_0(VAR_38, VAR_12, VAR_50, VAR_48->hblank_end);
 VAR_47->vt_hcmap = VAR_50;

 VAR_50 = 0;
 VAR_49 = VAR_48->vblank_start - VAR_48->vblank_end - 1;
 if (VAR_49 > 0)
  VAR_49 = -VAR_49;

 if (VAR_46)
  FUNC_1(VAR_48);

 FUNC_0(VAR_5, VAR_4, VAR_50, (u32) VAR_49);
 if (VAR_48->hblank_end >= 20)
  FUNC_0(VAR_5, VAR_3, VAR_50,
         VAR_48->hblank_end - 20);
 else
  FUNC_0(VAR_5, VAR_3, VAR_50,
         VAR_48->htotal - (20 - VAR_48->hblank_end));
 VAR_47->did_start_xy = VAR_50;

 VAR_50 = 0;
 FUNC_0(VAR_2, VAR_1, VAR_50, (u32) (VAR_49 + 1));
 if (VAR_48->hblank_end >= VAR_7)
  FUNC_0(VAR_2, VAR_0, VAR_50,
         VAR_48->hblank_end - VAR_7);
 else
  FUNC_0(VAR_2, VAR_0, VAR_50,
         VAR_48->htotal - (VAR_7 -
      VAR_48->hblank_end));
 VAR_47->crs_start_xy = VAR_50;

 VAR_50 = 0;
 FUNC_0(VAR_31, VAR_30, VAR_50, (u32) VAR_49);
 FUNC_0(VAR_31, VAR_29, VAR_50, VAR_48->hblank_end - 4);
 VAR_47->vc_start_xy = VAR_50;

 VAR_50 = 0;
 VAR_49 = VAR_48->hblank_end - VAR_9;
 if (VAR_49 < 0)
  VAR_49 += VAR_48->htotal;

 FUNC_0(VAR_39, VAR_15, VAR_50, VAR_49);
 FUNC_0(VAR_39, VAR_14, VAR_50,
        ((VAR_49 + VAR_48->width -
   VAR_8) % VAR_48->htotal));
 VAR_47->vt_hpixen = VAR_50;

 VAR_50 = 0;
 FUNC_0(VAR_43, VAR_33, VAR_50, VAR_48->vblank_end);
 FUNC_0(VAR_43, VAR_32, VAR_50, VAR_48->vblank_start);
 VAR_47->vt_vpixen = VAR_50;


 VAR_50 = 0;
 FUNC_0(VAR_36, VAR_24, VAR_50, 1);
 VAR_47->vt_flags = VAR_50;
}
