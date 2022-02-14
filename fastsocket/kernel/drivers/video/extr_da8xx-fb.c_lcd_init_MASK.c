
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lcd_ctrl_config {scalar_t__ bpp; int fdd; int raster_order; TYPE_1__* p_disp_panel; int ac_bias_intrpt; int ac_bias; int dma_burst_sz; } ;
struct da8xx_panel {scalar_t__ height; scalar_t__ width; int hfp; int hsw; int hbp; int vfp; int vsw; int vbp; scalar_t__ invert_pxl_clk; int pxl_clk; } ;
struct da8xx_fb_par {int dummy; } ;
struct TYPE_2__ {scalar_t__ panel_type; scalar_t__ max_bpp; scalar_t__ min_bpp; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct lcd_ctrl_config const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct da8xx_fb_par*,unsigned int,unsigned int,int,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct da8xx_fb_par*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int ) ;

__attribute__((used)) static int FUNC_10(struct da8xx_fb_par *VAR_7, const struct lcd_ctrl_config *VAR_8,
  struct da8xx_panel *VAR_9)
{
 u32 VAR_10;
 int VAR_11 = 0;

 FUNC_7(VAR_7);


 FUNC_9(FUNC_0(VAR_9->pxl_clk) |
   (VAR_4 & 0x1), VAR_1);

 if (VAR_9->invert_pxl_clk)
  FUNC_9((FUNC_8(VAR_5) |
   VAR_2), VAR_5);
 else
  FUNC_9((FUNC_8(VAR_5) &
   ~VAR_2), VAR_5);


 VAR_11 = FUNC_3(VAR_8->dma_burst_sz);
 if (VAR_11 < 0)
  return VAR_11;


 FUNC_1(VAR_8->ac_bias, VAR_8->ac_bias_intrpt);


 FUNC_6(VAR_9->vbp, VAR_9->vsw, VAR_9->vfp);
 FUNC_5(VAR_9->hbp, VAR_9->hsw, VAR_9->hfp);


 VAR_11 = FUNC_2(VAR_8);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_6 != VAR_8->p_disp_panel->panel_type)
  return -VAR_0;

 if (VAR_8->bpp <= VAR_8->p_disp_panel->max_bpp &&
     VAR_8->bpp >= VAR_8->p_disp_panel->min_bpp)
  VAR_10 = VAR_8->bpp;
 else
  VAR_10 = VAR_8->p_disp_panel->max_bpp;
 if (VAR_10 == 12)
  VAR_10 = 16;
 VAR_11 = FUNC_4(VAR_7, (unsigned int)VAR_9->width,
    (unsigned int)VAR_9->height, VAR_10,
    VAR_8->raster_order);
 if (VAR_11 < 0)
  return VAR_11;


 FUNC_9((FUNC_8(VAR_3) & 0xfff00fff) |
         (VAR_8->fdd << 12), VAR_3);

 return 0;
}
