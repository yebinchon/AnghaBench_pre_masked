
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int id; int value; } ;
struct file {int dummy; } ;
struct bttv_fh {struct bttv* btv; } ;
struct bttv {int opt_coring; int opt_full_luma_range; int opt_uv_ratio; int opt_whitecrush_lower; int opt_whitecrush_upper; int opt_vcr_hack; int opt_adc_crush; int opt_automute; int opt_lumafilter; int opt_combfilter; int opt_chroma_agc; int saturation; int contrast; int hue; int bright; } ;


 int VAR_0 ;
 int FUNC_0 (struct bttv*,int ,int ,struct v4l2_control*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
     struct v4l2_control *VAR_5)
{
 struct bttv_fh *VAR_6 = VAR_4;
 struct bttv *VAR_7 = VAR_6->btv;

 switch (VAR_5->id) {
 case 142:
  VAR_5->value = VAR_7->bright;
  break;
 case 140:
  VAR_5->value = VAR_7->hue;
  break;
 case 141:
  VAR_5->value = VAR_7->contrast;
  break;
 case 128:
  VAR_5->value = VAR_7->saturation;
  break;

 case 145:
 case 143:
 case 147:
 case 146:
 case 144:
  FUNC_0(VAR_7, VAR_1, VAR_2, VAR_5);
  break;

 case 137:
  VAR_5->value = VAR_7->opt_chroma_agc;
  break;
 case 136:
  VAR_5->value = VAR_7->opt_combfilter;
  break;
 case 133:
  VAR_5->value = VAR_7->opt_lumafilter;
  break;
 case 138:
  VAR_5->value = VAR_7->opt_automute;
  break;
 case 139:
  VAR_5->value = VAR_7->opt_adc_crush;
  break;
 case 131:
  VAR_5->value = VAR_7->opt_vcr_hack;
  break;
 case 129:
  VAR_5->value = VAR_7->opt_whitecrush_upper;
  break;
 case 130:
  VAR_5->value = VAR_7->opt_whitecrush_lower;
  break;
 case 132:
  VAR_5->value = VAR_7->opt_uv_ratio;
  break;
 case 134:
  VAR_5->value = VAR_7->opt_full_luma_range;
  break;
 case 135:
  VAR_5->value = VAR_7->opt_coring;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
