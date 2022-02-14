
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ov772x_priv {int band_filter; TYPE_4__* cfmt; TYPE_3__* win; scalar_t__ flag_hflip; scalar_t__ flag_vflip; TYPE_2__* info; } ;
struct i2c_client {int dummy; } ;
typedef enum v4l2_mbus_pixelcode { ____Placeholder_v4l2_mbus_pixelcode } v4l2_mbus_pixelcode ;
struct TYPE_9__ {int code; int dsp3; int com3; int com7; } ;
struct TYPE_8__ {int com7_bit; int height; int width; int regs; } ;
struct TYPE_6__ {int strength; int threshold; int upper; int lower; } ;
struct TYPE_7__ {int flags; TYPE_1__ edgectrl; } ;


 int FUNC_0 (TYPE_4__*) ;
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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 TYPE_4__* VAR_28 ;
 int FUNC_1 (struct i2c_client*,int ,int,int) ;
 int FUNC_2 (struct i2c_client*) ;
 TYPE_3__* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 struct ov772x_priv* FUNC_5 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_29, u32 *VAR_30, u32 *VAR_31,
        enum v4l2_mbus_pixelcode VAR_32)
{
 struct ov772x_priv *VAR_33 = FUNC_5(VAR_29);
 int VAR_34 = -VAR_16;
 u8 VAR_35;
 int VAR_36;




 VAR_33->cfmt = ((void*)0);
 for (VAR_36 = 0; VAR_36 < FUNC_0(VAR_28); VAR_36++) {
  if (VAR_32 == VAR_28[VAR_36].code) {
   VAR_33->cfmt = VAR_28 + VAR_36;
   break;
  }
 }
 if (!VAR_33->cfmt)
  goto ov772x_set_fmt_error;




 VAR_33->win = FUNC_3(*VAR_30, *VAR_31);




 FUNC_2(VAR_29);




 if (VAR_33->info->edgectrl.strength & VAR_23) {
  VAR_34 = FUNC_1(VAR_29, VAR_5, VAR_7, 0x00);
  if (VAR_34 < 0)
   goto ov772x_set_fmt_error;

  VAR_34 = FUNC_1(VAR_29,
          VAR_13, VAR_12,
          VAR_33->info->edgectrl.threshold);
  if (VAR_34 < 0)
   goto ov772x_set_fmt_error;

  VAR_34 = FUNC_1(VAR_29,
          VAR_11, VAR_10,
          VAR_33->info->edgectrl.strength);
  if (VAR_34 < 0)
   goto ov772x_set_fmt_error;

 } else if (VAR_33->info->edgectrl.upper > VAR_33->info->edgectrl.lower) {





  VAR_34 = FUNC_1(VAR_29,
          VAR_14, VAR_15,
          VAR_33->info->edgectrl.upper);
  if (VAR_34 < 0)
   goto ov772x_set_fmt_error;

  VAR_34 = FUNC_1(VAR_29,
          VAR_8, VAR_9,
          VAR_33->info->edgectrl.lower);
  if (VAR_34 < 0)
   goto ov772x_set_fmt_error;
 }




 VAR_34 = FUNC_4(VAR_29, VAR_33->win->regs);
 if (VAR_34 < 0)
  goto ov772x_set_fmt_error;




 VAR_35 = VAR_33->cfmt->dsp3;
 if (VAR_35) {
  VAR_34 = FUNC_1(VAR_29,
          VAR_6, VAR_26, VAR_35);
  if (VAR_34 < 0)
   goto ov772x_set_fmt_error;
 }




 VAR_35 = VAR_33->cfmt->com3;
 if (VAR_33->info->flags & VAR_22)
  VAR_35 |= VAR_27;
 if (VAR_33->info->flags & VAR_21)
  VAR_35 |= VAR_18;
 if (VAR_33->flag_vflip)
  VAR_35 ^= VAR_27;
 if (VAR_33->flag_hflip)
  VAR_35 ^= VAR_18;

 VAR_34 = FUNC_1(VAR_29,
         VAR_2, VAR_25 | VAR_19, VAR_35);
 if (VAR_34 < 0)
  goto ov772x_set_fmt_error;




 VAR_35 = VAR_33->win->com7_bit | VAR_33->cfmt->com7;
 VAR_34 = FUNC_1(VAR_29,
         VAR_3, VAR_24 | VAR_17 | VAR_20,
         VAR_35);
 if (VAR_34 < 0)
  goto ov772x_set_fmt_error;




 if (VAR_33->band_filter) {
  VAR_34 = FUNC_1(VAR_29, VAR_4, VAR_1, 1);
  if (!VAR_34)
   VAR_34 = FUNC_1(VAR_29, VAR_0,
           0xff, 256 - VAR_33->band_filter);
  if (VAR_34 < 0)
   goto ov772x_set_fmt_error;
 }

 *VAR_30 = VAR_33->win->width;
 *VAR_31 = VAR_33->win->height;

 return VAR_34;

ov772x_set_fmt_error:

 FUNC_2(VAR_29);
 VAR_33->win = ((void*)0);
 VAR_33->cfmt = ((void*)0);

 return VAR_34;
}
