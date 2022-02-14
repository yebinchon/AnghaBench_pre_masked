
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap24xxcam_device {void* ick; int dev; void* fck; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct omap24xxcam_device*) ;

__attribute__((used)) static int FUNC_5(struct omap24xxcam_device *VAR_0)
{
 int VAR_1 = 0;

 VAR_0->fck = FUNC_2(VAR_0->dev, "fck");
 if (FUNC_0(VAR_0->fck)) {
  FUNC_3(VAR_0->dev, "can't get camera fck");
  VAR_1 = FUNC_1(VAR_0->fck);
  FUNC_4(VAR_0);
  return VAR_1;
 }

 VAR_0->ick = FUNC_2(VAR_0->dev, "ick");
 if (FUNC_0(VAR_0->ick)) {
  FUNC_3(VAR_0->dev, "can't get camera ick");
  VAR_1 = FUNC_1(VAR_0->ick);
  FUNC_4(VAR_0);
 }

 return VAR_1;
}
