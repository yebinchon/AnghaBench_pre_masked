
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int audmode; } ;
struct v4l2_subdev {int dummy; } ;
struct CHIPSTATE {int audmode; int mode; scalar_t__ watch_stereo; scalar_t__ radio; struct CHIPDESC* desc; } ;
struct CHIPDESC {int (* setmode ) (struct CHIPSTATE*,int) ;} ;


 int VAR_0 ;





 int FUNC_0 (struct CHIPSTATE*,int) ;
 struct CHIPSTATE* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1, struct v4l2_tuner *VAR_2)
{
 struct CHIPSTATE *VAR_3 = FUNC_1(VAR_1);
 struct CHIPDESC *VAR_4 = VAR_3->desc;
 int VAR_5 = 0;

 if (!VAR_4->setmode)
  return 0;
 if (VAR_3->radio)
  return 0;

 switch (VAR_2->audmode) {
 case 129:
 case 128:
 case 132:
 case 130:
  VAR_5 = VAR_2->audmode;
  break;
 case 131:
  VAR_5 = 128;
  break;
 default:
  return -VAR_0;
 }
 VAR_3->audmode = VAR_2->audmode;

 if (VAR_5) {
  VAR_3->watch_stereo = 0;

  VAR_3->mode = VAR_5;
  VAR_4->setmode(VAR_3, VAR_5);
 }
 return 0;
}
