
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pan_min; int pan_max; int tilt_min; int tilt_max; } ;
struct pwc_device {scalar_t__ tilt_angle; scalar_t__ pan_angle; TYPE_1__ angle_range; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pwc_device*,int,int) ;

int FUNC_1(struct pwc_device *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;


 if (VAR_3 < VAR_2->angle_range.pan_min ||
     VAR_3 > VAR_2->angle_range.pan_max ||
     VAR_4 < VAR_2->angle_range.tilt_min ||
     VAR_4 > VAR_2->angle_range.tilt_max)
  return -VAR_1;


 VAR_3 -= VAR_2->pan_angle;
 VAR_4 -= VAR_2->tilt_angle;

 if (VAR_3 < -36000 || VAR_3 > 36000 || VAR_4 < -36000 || VAR_4 > 36000)
  return -VAR_1;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_5 >= 0) {
  VAR_2->pan_angle += VAR_3;
  VAR_2->tilt_angle += VAR_4;
 }
 if (VAR_5 == -VAR_0)
  VAR_5 = -VAR_1;
 return VAR_5;
}
