
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ar231x_board_config* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct ath5k_hw {int ah_mac_srev; int dev; } ;
struct ar231x_board_config {int devid; } ;


 struct platform_device* FUNC_0 (int ) ;

int FUNC_1(struct ath5k_hw *VAR_0)
{
 struct platform_device *VAR_1 = FUNC_0(VAR_0->dev);
 struct ar231x_board_config *VAR_2 = VAR_1->dev.platform_data;
 VAR_0->ah_mac_srev = VAR_2->devid;
 return 0;
}
