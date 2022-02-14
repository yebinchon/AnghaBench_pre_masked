
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int backlight; int brightness; int whitebal; int contrast; int saturation; int sharpness; int hue; int gamma; int mirror; int flip; } ;
struct TYPE_5__ {int backlight; int brightness; int whitebal; int contrast; int saturation; int sharpness; int hue; int gamma; } ;
struct TYPE_4__ {int backlight; int brightness; int sharpness; int gamma; int contrast; int saturation; int hue; int whitebal; scalar_t__ mirror; scalar_t__ flip; } ;
struct sd {int mirrorMask; int swapRB; TYPE_3__ vold; TYPE_2__ vmax; TYPE_1__ vcur; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int,int,int,int,int,int ) ;
 int FUNC_1 (struct gspca_dev*,int,int,int,int,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;

 s32 VAR_5 = VAR_4->vcur.backlight;
 s32 VAR_6 = VAR_4->vcur.brightness;
 s32 VAR_7 = VAR_4->vcur.sharpness;
 s32 VAR_8 = VAR_4->vcur.gamma;
 s32 VAR_9 = VAR_4->vcur.contrast;
 s32 VAR_10 = VAR_4->vcur.saturation;
 s32 VAR_11 = VAR_4->vcur.hue;
 s32 VAR_12 = VAR_4->vcur.whitebal;
 s32 VAR_13 = (((VAR_4->vcur.mirror > 0) ^ VAR_4->mirrorMask) == 0);
 s32 VAR_14 = (((VAR_4->vcur.flip > 0) ^ VAR_4->mirrorMask) == 0);

 if (VAR_5 != VAR_4->vold.backlight) {

  if (VAR_5 < 0 || VAR_5 > VAR_4->vmax.backlight)
   VAR_5 = 0;

  FUNC_1(VAR_3, 0x40, 1, 0x6001 , 0x00ff,
    0, ((void*)0));
  FUNC_1(VAR_3, 0x40, 1, 0x601e + VAR_5 , 0x0024,
    0, ((void*)0));
  FUNC_1(VAR_3, 0x40, 1, 0x601e + VAR_5 - 10, 0x0025,
    0, ((void*)0));
 }

 if (VAR_6 != VAR_4->vold.brightness) {
  VAR_4->vold.brightness = VAR_6;
  if (VAR_6 < 0 || VAR_6 > VAR_4->vmax.brightness)
   VAR_6 = 0;

  FUNC_1(VAR_3, 0x40, 1, 0x6000 , 0x00ff, 0, ((void*)0));
  FUNC_1(VAR_3, 0x40, 1, 0x6009 , 0x007c, 0, ((void*)0));
  FUNC_1(VAR_3, 0x40, 1, 0x6000 + VAR_6, 0x007d, 0, ((void*)0));
 }

 if (VAR_12 != VAR_4->vold.whitebal) {
  VAR_4->vold.whitebal = VAR_12;
  if (VAR_12 < 0 || VAR_12 > VAR_4->vmax.whitebal)
   VAR_12 = 0;

  FUNC_1(VAR_3, 0x40, 1, 0x6000 , 0x00ff, 0, ((void*)0));
  FUNC_1(VAR_3, 0x40, 1, 0x6003 , 0x007c, 0, ((void*)0));
  FUNC_1(VAR_3, 0x40, 1, 0x6000 + VAR_12, 0x007d, 0, ((void*)0));
 }

 if (VAR_9 != VAR_4->vold.contrast) {
  VAR_4->vold.contrast = VAR_9;
  if (VAR_9 < 0 || VAR_9 > VAR_4->vmax.contrast)
   VAR_9 = 0;

  FUNC_1(VAR_3, 0x40, 1, 0x6000 , 0x00ff, 0, ((void*)0));
  FUNC_1(VAR_3, 0x40, 1, 0x6007 , 0x007c, 0, ((void*)0));
  FUNC_1(VAR_3, 0x40, 1, 0x6000 + VAR_9, 0x007d, 0, ((void*)0));
 }

 if (VAR_10 != VAR_4->vold.saturation) {
  VAR_4->vold.saturation = VAR_10;
  if (VAR_10 < 0 || VAR_10 > VAR_4->vmax.saturation)
   VAR_10 = 0;

  FUNC_1(VAR_3, 0x40, 1, 0x6000 , 0x00ff, 0, ((void*)0));
  FUNC_1(VAR_3, 0x40, 1, 0x6001 , 0x007c, 0, ((void*)0));
  FUNC_1(VAR_3, 0x40, 1, 0x6000 + VAR_10, 0x007d, 0, ((void*)0));
 }

 if (VAR_7 != VAR_4->vold.sharpness) {
  VAR_4->vold.sharpness = VAR_7;
  if (VAR_7 < 0 || VAR_7 > VAR_4->vmax.sharpness)
   VAR_7 = 0;

  FUNC_1(VAR_3, 0x40, 1, 0x6000 , 0x00ff, 0, ((void*)0));
  FUNC_1(VAR_3, 0x40, 1, 0x6001 , 0x0092, 0, ((void*)0));
  FUNC_1(VAR_3, 0x40, 1, 0x60c0 + VAR_7, 0x0093, 0, ((void*)0));
 }

 if (VAR_11 != VAR_4->vold.hue) {
  VAR_4->vold.hue = VAR_11;
  if (VAR_11 < 0 || VAR_11 > VAR_4->vmax.hue)
   VAR_11 = 0;

  FUNC_1(VAR_3, 0x40, 1, 0x6000 , 0x00ff, 0, ((void*)0));
  FUNC_1(VAR_3, 0x40, 1, 0x6002 , 0x007c, 0, ((void*)0));
  FUNC_1(VAR_3, 0x40, 1, 0x6000 + VAR_11 * (VAR_11 < 255), 0x007d,
    0, ((void*)0));
  if (VAR_11 >= 255)
   VAR_4->swapRB = 1;
  else
   VAR_4->swapRB = 0;
 }

 if (VAR_8 != VAR_4->vold.gamma) {
  VAR_4->vold.gamma = VAR_8;
  if (VAR_8 < 0 || VAR_8 > VAR_4->vmax.gamma)
   VAR_8 = 0;

  FUNC_1(VAR_3, 0x40, 1, 0x6000 , 0x00ff, 0, ((void*)0));
  FUNC_1(VAR_3, 0x40, 1, 0x6008 , 0x007c, 0, ((void*)0));
  FUNC_1(VAR_3, 0x40, 1, 0x6000 + VAR_8, 0x007d, 0, ((void*)0));
 }

 if (VAR_13 != VAR_4->vold.mirror || VAR_14 != VAR_4->vold.flip) {
  VAR_4->vold.mirror = VAR_13;
  VAR_4->vold.flip = VAR_14;

  VAR_13 = 0x80 * VAR_13;
  FUNC_1(VAR_3, 0x40, 1, 0x6001, 0x00ff, 0, ((void*)0));
  FUNC_1(VAR_3, 0x40, 1, 0x6000, 0x8004, 0, ((void*)0));
  FUNC_0(VAR_3, 0xc0, 2, 0x6000, 0x8004, 1, VAR_0);
  FUNC_1(VAR_3, 0x40, 1, 0x6028 + VAR_13, 0x0004, 0, ((void*)0));

  VAR_14 = 0x50 * VAR_14 + VAR_13;
  FUNC_1(VAR_3, 0x40, 1, 0x6001, 0x00ff, 0, ((void*)0));
  FUNC_1(VAR_3, 0x40, 1, 0x6000, 0x8004, 0, ((void*)0));
  FUNC_0(VAR_3, 0xc0, 2, 0x6000, 0x8004, 1, VAR_2);
  FUNC_1(VAR_3, 0x40, 1, 0x6028 + VAR_14, 0x0004, 0, ((void*)0));

  FUNC_0(VAR_3, 0xc0, 2, 0x0000, 0x0000, 1, VAR_1);
 }

 if (VAR_5 != VAR_4->vold.backlight) {
  VAR_4->vold.backlight = VAR_5;

  FUNC_1(VAR_3, 0x40, 1, 0x6001 , 0x00ff,
    0, ((void*)0));
  FUNC_1(VAR_3, 0x40, 1, 0x601e + VAR_5 , 0x0024,
    0, ((void*)0));
  FUNC_1(VAR_3, 0x40, 1, 0x601e + VAR_5 - 10, 0x0025,
    0, ((void*)0));
 }

 return 0;
}
