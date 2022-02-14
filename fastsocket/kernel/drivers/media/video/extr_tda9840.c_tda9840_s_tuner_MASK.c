
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int audmode; scalar_t__ index; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_8, struct v4l2_tuner *VAR_9)
{
 int VAR_10;

 if (VAR_9->index)
  return -VAR_0;

 switch (VAR_9->audmode) {
 case 128:
  VAR_10 = VAR_6;
  break;
 case 130:
  VAR_10 = VAR_2;
  break;
 case 131:
  VAR_10 = VAR_3;
  break;
 case 129:
  VAR_10 = VAR_4;
  break;
 default:
  VAR_10 = VAR_5;
  break;
 }
 FUNC_1(1, VAR_7, VAR_8, "TDA9840_SWITCH: 0x%02x\n", VAR_10);
 FUNC_0(VAR_8, VAR_1, VAR_10);
 return 0;
}
