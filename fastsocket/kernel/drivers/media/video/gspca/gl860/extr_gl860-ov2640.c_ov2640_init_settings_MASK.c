
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int backlight; int brightness; int sharpness; int contrast; int gamma; int hue; int saturation; int whitebal; int mirror; int flip; scalar_t__ AC50Hz; } ;
struct TYPE_3__ {int backlight; int sharpness; int gamma; int saturation; int whitebal; scalar_t__ flip; scalar_t__ mirror; scalar_t__ hue; scalar_t__ contrast; scalar_t__ brightness; } ;
struct sd {int dev_post_unset_alt; int dev_init_pre_alt; int dev_configure_alt; int dev_init_at_startup; int dev_camera_settings; TYPE_2__ vmax; TYPE_1__ vcur; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0(struct gspca_dev *VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_5;

 VAR_6->vcur.backlight = 32;
 VAR_6->vcur.brightness = 0;
 VAR_6->vcur.sharpness = 6;
 VAR_6->vcur.contrast = 0;
 VAR_6->vcur.gamma = 32;
 VAR_6->vcur.hue = 0;
 VAR_6->vcur.saturation = 128;
 VAR_6->vcur.whitebal = 64;
 VAR_6->vcur.mirror = 0;
 VAR_6->vcur.flip = 0;

 VAR_6->vmax.backlight = 64;
 VAR_6->vmax.brightness = 255;
 VAR_6->vmax.sharpness = 31;
 VAR_6->vmax.contrast = 255;
 VAR_6->vmax.gamma = 64;
 VAR_6->vmax.hue = 254 + 2;
 VAR_6->vmax.saturation = 255;
 VAR_6->vmax.whitebal = 128;
 VAR_6->vmax.mirror = 1;
 VAR_6->vmax.flip = 1;
 VAR_6->vmax.AC50Hz = 0;

 VAR_6->dev_camera_settings = VAR_0;
 VAR_6->dev_init_at_startup = VAR_2;
 VAR_6->dev_configure_alt = VAR_1;
 VAR_6->dev_init_pre_alt = VAR_3;
 VAR_6->dev_post_unset_alt = VAR_4;
}
