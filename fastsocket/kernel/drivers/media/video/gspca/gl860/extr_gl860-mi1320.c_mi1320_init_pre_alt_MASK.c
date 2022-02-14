
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int backlight; int brightness; int sharpness; int contrast; int saturation; int gamma; int hue; int whitebal; int mirror; int flip; int AC50Hz; } ;
struct sd {TYPE_1__ vold; scalar_t__ mirrorMask; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;

 VAR_1->mirrorMask = 0;

 VAR_1->vold.backlight = -1;
 VAR_1->vold.brightness = -1;
 VAR_1->vold.sharpness = -1;
 VAR_1->vold.contrast = -1;
 VAR_1->vold.saturation = -1;
 VAR_1->vold.gamma = -1;
 VAR_1->vold.hue = -1;
 VAR_1->vold.whitebal = -1;
 VAR_1->vold.mirror = -1;
 VAR_1->vold.flip = -1;
 VAR_1->vold.AC50Hz = -1;

 FUNC_0(VAR_0);

 FUNC_2(VAR_0);

 FUNC_1(VAR_0);

 return 0;
}
