
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_int_device {int name; } ;
struct omap24xxcam_device {int dev; struct v4l2_int_device* sdev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct omap24xxcam_device*) ;
 int FUNC_3 (struct omap24xxcam_device*) ;
 int FUNC_4 (struct omap24xxcam_device*) ;
 int FUNC_5 (struct omap24xxcam_device*) ;
 int FUNC_6 (struct v4l2_int_device*) ;
 int FUNC_7 (struct v4l2_int_device*,int) ;

__attribute__((used)) static int FUNC_8(struct omap24xxcam_device *VAR_0)
{
 int VAR_1 = 0;
 struct v4l2_int_device *VAR_2 = VAR_0->sdev;

 FUNC_3(VAR_0);
 VAR_1 = FUNC_5(VAR_0);
 if (VAR_1) {
  FUNC_0(VAR_0->dev, "sensor interface could not be enabled at "
   "initialisation, %d\n", VAR_1);
  VAR_0->sdev = ((void*)0);
  goto out;
 }


 FUNC_7(VAR_2, 1);

 VAR_1 = FUNC_6(VAR_2);
 if (VAR_1) {
  FUNC_0(VAR_0->dev, "cannot initialize sensor, error %d\n", VAR_1);

  VAR_0->sdev = ((void*)0);
  goto out;
 }

 FUNC_1(VAR_0->dev, "sensor is %s\n", VAR_2->name);

out:
 FUNC_4(VAR_0);
 FUNC_2(VAR_0);

 FUNC_7(VAR_2, 0);

 return VAR_1;
}
