
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int id; int value; } ;
struct file {int dummy; } ;
struct bttv_fh {int prio; struct bttv* btv; } ;
struct bttv {int opt_chroma_agc; int opt_combfilter; int opt_lumafilter; int opt_automute; int opt_adc_crush; int opt_vcr_hack; int opt_whitecrush_upper; int opt_whitecrush_lower; int opt_uv_ratio; int saturation; int opt_full_luma_range; int opt_coring; int (* volume_gpio ) (struct bttv*,int) ;int prio; } ;


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
 int FUNC_0 (struct bttv*,int) ;
 int FUNC_1 (struct bttv*,int) ;
 int FUNC_2 (struct bttv*,int) ;
 int FUNC_3 (struct bttv*,int) ;
 int FUNC_4 (struct bttv*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct bttv*,int ,int ,struct v4l2_control*) ;
 int FUNC_9 (int,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (struct bttv*,int) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static int FUNC_12(struct file *VAR_17, void *VAR_18,
     struct v4l2_control *VAR_19)
{
 int VAR_20;
 int VAR_21;
 struct bttv_fh *VAR_22 = VAR_18;
 struct bttv *VAR_23 = VAR_22->btv;

 VAR_20 = FUNC_11(&VAR_23->prio, VAR_22->prio);
 if (0 != VAR_20)
  return VAR_20;

 switch (VAR_19->id) {
 case 142:
  FUNC_1(VAR_23, VAR_19->value);
  break;
 case 140:
  FUNC_3(VAR_23, VAR_19->value);
  break;
 case 141:
  FUNC_2(VAR_23, VAR_19->value);
  break;
 case 128:
  FUNC_4(VAR_23, VAR_19->value);
  break;
 case 145:
  FUNC_0(VAR_23, VAR_19->value);

 case 143:
  if (VAR_23->volume_gpio)
   VAR_23->volume_gpio(VAR_23, VAR_19->value);

  FUNC_8(VAR_23, VAR_15, VAR_16, VAR_19);
  break;
 case 147:
 case 146:
 case 144:
  FUNC_8(VAR_23, VAR_15, VAR_16, VAR_19);
  break;

 case 137:
  VAR_23->opt_chroma_agc = VAR_19->value;
  VAR_21 = VAR_23->opt_chroma_agc ? VAR_11 : 0;
  FUNC_9(VAR_21, VAR_5);
  FUNC_9(VAR_21, VAR_10);
  break;
 case 136:
  VAR_23->opt_combfilter = VAR_19->value;
  break;
 case 133:
  VAR_23->opt_lumafilter = VAR_19->value;
  if (VAR_23->opt_lumafilter) {
   FUNC_5(~VAR_3, VAR_4);
   FUNC_5(~VAR_3, VAR_9);
  } else {
   FUNC_7(VAR_3, VAR_4);
   FUNC_7(VAR_3, VAR_9);
  }
  break;
 case 138:
  VAR_23->opt_automute = VAR_19->value;
  break;
 case 139:
  VAR_23->opt_adc_crush = VAR_19->value;
  FUNC_9(VAR_2 |
    (VAR_23->opt_adc_crush ? VAR_1 : 0),
    VAR_0);
  break;
 case 131:
  VAR_23->opt_vcr_hack = VAR_19->value;
  break;
 case 129:
  VAR_23->opt_whitecrush_upper = VAR_19->value;
  FUNC_9(VAR_19->value, VAR_13);
  break;
 case 130:
  VAR_23->opt_whitecrush_lower = VAR_19->value;
  FUNC_9(VAR_19->value, VAR_12);
  break;
 case 132:
  VAR_23->opt_uv_ratio = VAR_19->value;
  FUNC_4(VAR_23, VAR_23->saturation);
  break;
 case 134:
  VAR_23->opt_full_luma_range = VAR_19->value;
  FUNC_6((VAR_19->value<<7), ~VAR_8, VAR_6);
  break;
 case 135:
  VAR_23->opt_coring = VAR_19->value;
  FUNC_6((VAR_19->value<<5), ~VAR_7, VAR_6);
  break;
 default:
  return -VAR_14;
 }
 return 0;
}
