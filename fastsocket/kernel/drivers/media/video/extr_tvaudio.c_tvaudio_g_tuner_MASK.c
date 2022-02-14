
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int rxsubchans; int capability; int audmode; } ;
struct v4l2_subdev {int dummy; } ;
struct CHIPSTATE {int audmode; scalar_t__ radio; struct CHIPDESC* desc; } ;
struct CHIPDESC {int (* getmode ) (struct CHIPSTATE*) ;} ;


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
 int FUNC_0 (struct CHIPSTATE*) ;
 struct CHIPSTATE* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_10, struct v4l2_tuner *VAR_11)
{
 struct CHIPSTATE *VAR_12 = FUNC_1(VAR_10);
 struct CHIPDESC *VAR_13 = VAR_12->desc;
 int VAR_14 = VAR_4;

 if (!VAR_13->getmode)
  return 0;
 if (VAR_12->radio)
  return 0;

 VAR_11->audmode = VAR_12->audmode;
 VAR_11->rxsubchans = 0;
 VAR_11->capability = VAR_2 |
  VAR_0 | VAR_1;

 VAR_14 = VAR_13->getmode(VAR_12);

 if (VAR_14 & VAR_4)
  VAR_11->rxsubchans |= VAR_8;
 if (VAR_14 & VAR_5)
  VAR_11->rxsubchans |= VAR_9;



 if (VAR_14 & VAR_3)
  VAR_11->rxsubchans = VAR_6 |
   VAR_7;
 return 0;
}
