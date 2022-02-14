
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct fsl_usb2_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct fsl_usb2_platform_data {scalar_t__ phy_mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * VAR_1 ;

void FUNC_2(struct platform_device *VAR_2)
{
 struct fsl_usb2_platform_data *VAR_3 = VAR_2->dev.platform_data;


 if (VAR_3->phy_mode == VAR_0) {
  FUNC_0(VAR_1);
  FUNC_1(VAR_1);
  VAR_1 = ((void*)0);
 }
}
