
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lcd_ctrl_config {scalar_t__ invert_frm_clock; scalar_t__ invert_line_clock; scalar_t__ sync_edge; scalar_t__ sync_ctrl; int stn_565_mode; int tft_alt_mode; int mono_8bit_mode; TYPE_1__* p_disp_panel; } ;
struct TYPE_2__ {int panel_shade; } ;




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

 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(const struct lcd_ctrl_config *VAR_13)
{
 u32 VAR_14;

 VAR_14 = FUNC_0(VAR_5) & ~(VAR_11 |
      VAR_4 |
      VAR_3);

 switch (VAR_13->p_disp_panel->panel_shade) {
 case 128:
  VAR_14 |= VAR_3;
  if (VAR_13->mono_8bit_mode)
   VAR_14 |= VAR_4;
  break;
 case 130:
  VAR_14 |= VAR_11;
  if (VAR_13->tft_alt_mode)
   VAR_14 |= VAR_10;
  break;

 case 129:
  if (VAR_13->stn_565_mode)
   VAR_14 |= VAR_7;
  break;

 default:
  return -VAR_0;
 }


 VAR_14 |= VAR_12;

 FUNC_1(VAR_14, VAR_5);

 VAR_14 = FUNC_0(VAR_6);

 if (VAR_13->sync_ctrl)
  VAR_14 |= VAR_8;
 else
  VAR_14 &= ~VAR_8;

 if (VAR_13->sync_edge)
  VAR_14 |= VAR_9;
 else
  VAR_14 &= ~VAR_9;

 if (VAR_13->invert_line_clock)
  VAR_14 |= VAR_2;
 else
  VAR_14 &= ~VAR_2;

 if (VAR_13->invert_frm_clock)
  VAR_14 |= VAR_1;
 else
  VAR_14 &= ~VAR_1;

 FUNC_1(VAR_14, VAR_6);

 return 0;
}
