
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap24xxcam_device {int dev; int in_reset; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct omap24xxcam_device*) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 struct omap24xxcam_device *VAR_1 = (struct omap24xxcam_device *)VAR_0;

 if (!FUNC_0(&VAR_1->in_reset)) {
  FUNC_1(VAR_1->dev, "dma stalled, resetting camera\n");
  FUNC_2(VAR_1);
 }
}
