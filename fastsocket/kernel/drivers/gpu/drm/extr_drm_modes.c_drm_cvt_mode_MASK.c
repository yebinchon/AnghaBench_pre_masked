
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int hdisplay; int vdisplay; int vtotal; int htotal; int hsync_end; int hsync_start; int vsync_start; int vsync_end; int clock; int flags; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
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
 struct drm_display_mode* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_display_mode*) ;

struct drm_display_mode *FUNC_2(struct drm_device *VAR_19, int VAR_20,
          int VAR_21, int VAR_22,
          bool VAR_23, bool VAR_24, bool VAR_25)
{
 struct drm_display_mode *VAR_26;
 unsigned int VAR_27, VAR_28;
 int VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
 int VAR_34;




 VAR_26 = FUNC_0(VAR_19);
 if (!VAR_26)
  return ((void*)0);


 if (!VAR_22)
  VAR_22 = 60;


 if (VAR_24)
  VAR_27 = VAR_22 * 2;
 else
  VAR_27 = VAR_22;


 VAR_29 = VAR_20 - (VAR_20 % 8);


 VAR_30 = 0;
 if (VAR_25) {
  VAR_30 = VAR_29 * 18 / 1000;
  VAR_30 -= VAR_30 % 8;
 }

 VAR_26->hdisplay = VAR_29 + 2 * VAR_30;


 if (VAR_24)
  VAR_31 = VAR_21 / 2;
 else
  VAR_31 = VAR_21;


 VAR_32 = 0;
 if (VAR_25)
  VAR_32 = VAR_31 * 18 / 1000;

 VAR_26->vdisplay = VAR_21 + 2 * VAR_32;


 if (VAR_24)
  VAR_34 = 1;
 else
  VAR_34 = 0;


 if (!(VAR_21 % 3) && ((VAR_21 * 4 / 3) == VAR_20))
  VAR_33 = 4;
 else if (!(VAR_21 % 9) && ((VAR_21 * 16 / 9) == VAR_20))
  VAR_33 = 5;
 else if (!(VAR_21 % 10) && ((VAR_21 * 16 / 10) == VAR_20))
  VAR_33 = 6;
 else if (!(VAR_21 % 4) && ((VAR_21 * 5 / 4) == VAR_20))
  VAR_33 = 7;
 else if (!(VAR_21 % 9) && ((VAR_21 * 15 / 9) == VAR_20))
  VAR_33 = 7;
 else
  VAR_33 = 10;

 if (!VAR_23) {




  int VAR_35, VAR_36;



  unsigned int VAR_37;
  int VAR_38, VAR_39, VAR_40;


  VAR_35 = VAR_18 * 1000000 -
    550 * VAR_18 * VAR_27;
  VAR_36 = (VAR_31 + 2 * VAR_32 + 3) * 2 +
    VAR_34;
  VAR_28 = VAR_35 * 2 / (VAR_36 * VAR_27);

  VAR_35 = 550 * VAR_18 / VAR_28 + 1;

  if (VAR_35 < (VAR_33 + 3))
   VAR_38 = VAR_33 + 3;
  else
   VAR_38 = VAR_35;

  VAR_39 = VAR_38 - VAR_33;
  VAR_26->vtotal = VAR_31 + 2 * VAR_32 +
    VAR_38 + 3;
  VAR_37 = ((40 - 20) * 128 / 256 + 20) * VAR_18 - (600 * 128 / 256) *
     VAR_28 / 1000;

  if (VAR_37 < 20 * VAR_18)
   VAR_37 = 20 * VAR_18;
  VAR_40 = VAR_26->hdisplay * VAR_37 /
    (100 * VAR_18 - VAR_37);
  VAR_40 -= VAR_40 % (2 * 8);

  VAR_26->htotal = VAR_26->hdisplay + VAR_40;
  VAR_26->hsync_end = VAR_26->hdisplay + VAR_40 / 2;
  VAR_26->hsync_start = VAR_26->hsync_end -
   (VAR_26->htotal * 8) / 100;
  VAR_26->hsync_start += 8 -
   VAR_26->hsync_start % 8;

  VAR_26->vsync_start = VAR_26->vdisplay + 3;
  VAR_26->vsync_end = VAR_26->vsync_start + VAR_33;
 } else {
  int VAR_41;
  int VAR_42, VAR_43;

  VAR_42 = VAR_18 * 1000000 -
   460 * VAR_18 * VAR_27;
  VAR_43 = VAR_31 + 2 * VAR_32;
  VAR_28 = VAR_42 / (VAR_43 * VAR_27);

  VAR_41 = 460 * VAR_18 / VAR_28 + 1;

  if (VAR_41 < (3 + VAR_33 + 6))
   VAR_41 = 3 + VAR_33 + 6;

  VAR_26->vtotal = VAR_31 + 2 * VAR_32 + VAR_41;

  VAR_26->htotal = VAR_26->hdisplay + 160;

  VAR_26->hsync_end = VAR_26->hdisplay + 160 / 2;
  VAR_26->hsync_start = VAR_26->hsync_end - 32;

  VAR_26->vsync_start = VAR_26->vdisplay + 3;
  VAR_26->vsync_end = VAR_26->vsync_start + VAR_33;
 }

 VAR_26->clock = VAR_26->htotal * VAR_18 * 1000 / VAR_28;
 VAR_26->clock -= VAR_26->clock % 250;


 if (VAR_24) {
  VAR_26->vtotal *= 2;
  VAR_26->flags |= VAR_13;
 }

 FUNC_1(VAR_26);
 if (VAR_23)
  VAR_26->flags |= (VAR_16 |
     VAR_15);
 else
  VAR_26->flags |= (VAR_17 |
     VAR_14);

 return VAR_26;
}
