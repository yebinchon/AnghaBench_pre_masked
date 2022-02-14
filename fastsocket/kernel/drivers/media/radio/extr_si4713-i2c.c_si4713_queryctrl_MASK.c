
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_queryctrl {int id; } ;


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
 int VAR_28 ;
 int FUNC_0 (struct v4l2_queryctrl*,int,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_29, struct v4l2_queryctrl *VAR_30)
{
 int VAR_31 = 0;

 switch (VAR_30->id) {

 case 139:
  VAR_31 = FUNC_0(VAR_30, 0, 1, 1, VAR_6);
  break;

 case 134:
  VAR_31 = FUNC_0(VAR_30, 0, 0xFFFF, 1, VAR_11);
  break;
 case 132:
  VAR_31 = FUNC_0(VAR_30, 0, 31, 1, VAR_12);
  break;
 case 135:
  VAR_31 = FUNC_0(VAR_30, 0, VAR_22,
      10, VAR_10);
  break;
 case 133:





  VAR_31 = FUNC_0(VAR_30, 0, VAR_23, 8, 0);
  break;
 case 131:





  VAR_31 = FUNC_0(VAR_30, 0, VAR_24, 32, 0);
  break;

 case 141:
  VAR_31 = FUNC_0(VAR_30, 0, 1, 1, 1);
  break;
 case 140:
  VAR_31 = FUNC_0(VAR_30, 250, VAR_19,
      50, VAR_5);
  break;
 case 142:
  VAR_31 = FUNC_0(VAR_30, 0, VAR_18,
      10, VAR_4);
  break;

 case 146:
  VAR_31 = FUNC_0(VAR_30, 0, 1, 1, 1);
  break;
 case 145:
  VAR_31 = FUNC_0(VAR_30, 0, VAR_15, 1,
      VAR_1);
  break;
 case 143:
  VAR_31 = FUNC_0(VAR_30, VAR_25,
      VAR_17, 1,
      VAR_3);
  break;
 case 147:
  VAR_31 = FUNC_0(VAR_30, 0, VAR_14,
      500, VAR_0);
  break;
 case 144:
  VAR_31 = FUNC_0(VAR_30, 100000, VAR_16,
      100000, VAR_2);
  break;

 case 137:
  VAR_31 = FUNC_0(VAR_30, 0, 1, 1, 1);
  break;
 case 138:
  VAR_31 = FUNC_0(VAR_30, 0, VAR_20,
      10, VAR_7);
  break;
 case 136:
  VAR_31 = FUNC_0(VAR_30, 0, VAR_21,
      1, VAR_8);
  break;

 case 128:
  VAR_31 = FUNC_0(VAR_30, VAR_28,
      VAR_27, 1,
      VAR_26);
  break;
 case 129:
  VAR_31 = FUNC_0(VAR_30, 0, 120, 1, VAR_9);
  break;
 case 130:
  VAR_31 = FUNC_0(VAR_30, 0, 191, 1, 0);
  break;
 default:
  VAR_31 = -VAR_13;
  break;
 };

 return VAR_31;
}
