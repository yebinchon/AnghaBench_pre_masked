
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {scalar_t__ tilt_angle; scalar_t__ pan_angle; } ;


 int FUNC_0 (struct pwc_device*,int) ;

int FUNC_1(struct pwc_device *VAR_0, int VAR_1)
{
 int VAR_2;
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 >= 0) {
  VAR_0->pan_angle = 0;
  VAR_0->tilt_angle = 0;
 }
 return VAR_2;
}
