
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap24xxcam_device {int sdev; } ;


 int FUNC_0 (struct omap24xxcam_device*) ;
 int FUNC_1 (struct omap24xxcam_device*) ;
 int FUNC_2 (struct omap24xxcam_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct omap24xxcam_device *VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0);

 FUNC_2(VAR_0);

 VAR_1 = FUNC_4(VAR_0->sdev, 1);
 if (VAR_1)
  goto out;

 VAR_1 = FUNC_3(VAR_0->sdev);
 if (VAR_1)
  goto out;

 return 0;

out:
 FUNC_1(VAR_0);

 return VAR_1;
}
