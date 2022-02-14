
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct CHIPSTATE {struct v4l2_subdev sd; } ;
typedef int audiocmd ;






 int FUNC_0 (struct CHIPSTATE*,char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static void FUNC_2(struct CHIPSTATE *VAR_5, int VAR_6)
{
 struct v4l2_subdev *VAR_7 = &VAR_5->sd;
 int VAR_8 = 1;
 audiocmd *VAR_9 = ((void*)0);

 FUNC_1(1, VAR_0, VAR_7, "ta8874z_setmode(): mode: 0x%02x\n", VAR_6);

 switch(VAR_6){
 case 129:
  VAR_9 = &VAR_2;
  break;
 case 128:
  VAR_9 = &VAR_3;
  break;
 case 131:
  VAR_9 = &VAR_1;
  break;
 case 130:
  VAR_9 = &VAR_4;
  break;
 default:
  VAR_8 = 0;
 }

 if(VAR_8)
  FUNC_0(VAR_5, "TA8874Z", VAR_9);
}
