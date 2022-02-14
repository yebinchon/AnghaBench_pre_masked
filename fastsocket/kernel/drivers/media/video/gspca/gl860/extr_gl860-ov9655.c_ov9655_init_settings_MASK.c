
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int brightness; scalar_t__ AC50Hz; scalar_t__ flip; scalar_t__ mirror; scalar_t__ whitebal; scalar_t__ saturation; scalar_t__ hue; scalar_t__ gamma; scalar_t__ contrast; scalar_t__ sharpness; scalar_t__ backlight; } ;
struct TYPE_3__ {int brightness; scalar_t__ whitebal; scalar_t__ saturation; scalar_t__ hue; scalar_t__ gamma; scalar_t__ contrast; scalar_t__ sharpness; scalar_t__ backlight; } ;
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

 VAR_6->vcur.backlight = 0;
 VAR_6->vcur.brightness = 128;
 VAR_6->vcur.sharpness = 0;
 VAR_6->vcur.contrast = 0;
 VAR_6->vcur.gamma = 0;
 VAR_6->vcur.hue = 0;
 VAR_6->vcur.saturation = 0;
 VAR_6->vcur.whitebal = 0;

 VAR_6->vmax.backlight = 0;
 VAR_6->vmax.brightness = 255;
 VAR_6->vmax.sharpness = 0;
 VAR_6->vmax.contrast = 0;
 VAR_6->vmax.gamma = 0;
 VAR_6->vmax.hue = 0 + 1;
 VAR_6->vmax.saturation = 0;
 VAR_6->vmax.whitebal = 0;
 VAR_6->vmax.mirror = 0;
 VAR_6->vmax.flip = 0;
 VAR_6->vmax.AC50Hz = 0;

 VAR_6->dev_camera_settings = VAR_0;
 VAR_6->dev_init_at_startup = VAR_2;
 VAR_6->dev_configure_alt = VAR_1;
 VAR_6->dev_init_pre_alt = VAR_3;
 VAR_6->dev_post_unset_alt = VAR_4;
}
