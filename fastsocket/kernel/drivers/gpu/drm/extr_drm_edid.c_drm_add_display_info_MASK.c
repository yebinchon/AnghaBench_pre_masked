
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct edid {int width_cm; int height_cm; int revision; int input; int features; } ;
struct drm_display_info {int width_mm; int height_mm; int bpc; int cea_rev; int color_formats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int* FUNC_0 (struct edid*) ;

__attribute__((used)) static void FUNC_1(struct edid *VAR_9,
     struct drm_display_info *VAR_10)
{
 u8 *VAR_11;

 VAR_10->width_mm = VAR_9->width_cm * 10;
 VAR_10->height_mm = VAR_9->height_cm * 10;


 VAR_10->bpc = 0;
 VAR_10->color_formats = 0;

 if (VAR_9->revision < 3)
  return;

 if (!(VAR_9->input & VAR_6))
  return;


 VAR_11 = FUNC_0(VAR_9);
 if (VAR_11) {
  VAR_10->cea_rev = VAR_11[1];


  VAR_10->color_formats = VAR_0;
  if (VAR_11[3] & VAR_8)
   VAR_10->color_formats |= VAR_2;
  if (VAR_11[3] & VAR_7)
   VAR_10->color_formats |= VAR_1;
 }


 if (VAR_9->revision < 4)
  return;

 switch (VAR_9->input & VAR_3) {
 case 130:
  VAR_10->bpc = 6;
  break;
 case 129:
  VAR_10->bpc = 8;
  break;
 case 134:
  VAR_10->bpc = 10;
  break;
 case 133:
  VAR_10->bpc = 12;
  break;
 case 132:
  VAR_10->bpc = 14;
  break;
 case 131:
  VAR_10->bpc = 16;
  break;
 case 128:
 default:
  VAR_10->bpc = 0;
  break;
 }

 VAR_10->color_formats |= VAR_0;
 if (VAR_9->features & VAR_5)
  VAR_10->color_formats |= VAR_2;
 if (VAR_9->features & VAR_4)
  VAR_10->color_formats |= VAR_1;
}
