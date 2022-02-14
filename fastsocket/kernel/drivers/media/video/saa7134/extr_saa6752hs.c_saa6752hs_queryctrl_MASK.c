
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_queryctrl {int id; int flags; } ;
struct saa6752hs_mpeg_params {int vi_bitrate_mode; } ;
struct saa6752hs_state {int has_ac3; struct saa6752hs_mpeg_params params; } ;


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
 struct saa6752hs_state* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_queryctrl*,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_15, struct v4l2_queryctrl *VAR_16)
{
 struct saa6752hs_state *VAR_17 = FUNC_0(VAR_15);
 struct saa6752hs_mpeg_params *VAR_18 = &VAR_17->params;
 int VAR_19;

 switch (VAR_16->id) {
 case 140:
  return FUNC_1(VAR_16,
    VAR_5,
    VAR_17->has_ac3 ? VAR_4 :
     VAR_5,
    1, VAR_5);

 case 139:
  return FUNC_1(VAR_16,
    VAR_6,
    VAR_7, 1,
    VAR_6);

 case 141:
  if (!VAR_17->has_ac3)
   return -VAR_0;
  return FUNC_1(VAR_16,
    VAR_2,
    VAR_3, 1,
    VAR_2);

 case 138:
  return FUNC_1(VAR_16,
    VAR_8,
    VAR_8, 1,
    VAR_8);

 case 128:
  return FUNC_1(VAR_16,
    VAR_14,
    VAR_14, 1,
    VAR_14);

 case 132:
  return FUNC_1(VAR_16,
    VAR_11,
    VAR_10, 1,
    VAR_11);

 case 129:
  VAR_19 = FUNC_1(VAR_16, 0, 27000000, 1, 8000000);
  if (VAR_19 == 0 &&
      VAR_18->vi_bitrate_mode ==
    VAR_12)
   VAR_16->flags |= VAR_1;
  return VAR_19;

 case 133:
  return FUNC_1(VAR_16,
    VAR_9,
    VAR_9, 1,
    VAR_9);

 case 130:
  return FUNC_1(VAR_16,
    VAR_13,
    VAR_12, 1,
    VAR_13);
 case 131:
  return FUNC_1(VAR_16, 0, 27000000, 1, 6000000);
 case 135:
  return FUNC_1(VAR_16, 0, (1 << 14) - 1, 1, 16);
 case 137:
  return FUNC_1(VAR_16, 0, (1 << 14) - 1, 1, 260);
 case 134:
  return FUNC_1(VAR_16, 0, (1 << 14) - 1, 1, 256);
 case 136:
  return FUNC_1(VAR_16, 0, (1 << 14) - 1, 1, 259);

 default:
  break;
 }
 return -VAR_0;
}
