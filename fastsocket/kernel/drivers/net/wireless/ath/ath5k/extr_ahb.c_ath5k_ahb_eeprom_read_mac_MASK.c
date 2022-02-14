
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {struct ar231x_board_config* platform_data; } ;
struct platform_device {scalar_t__ id; TYPE_1__ dev; } ;
struct ath5k_hw {int dev; } ;
struct ar231x_board_config {TYPE_2__* config; } ;
struct TYPE_4__ {int * wlan1_mac; int * wlan0_mac; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 struct platform_device* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ath5k_hw *VAR_1, u8 *VAR_2)
{
 struct platform_device *VAR_3 = FUNC_1(VAR_1->dev);
 struct ar231x_board_config *VAR_4 = VAR_3->dev.platform_data;
 u8 *VAR_5;

 if (FUNC_1(VAR_1->dev)->id == 0)
  VAR_5 = VAR_4->config->wlan0_mac;
 else
  VAR_5 = VAR_4->config->wlan1_mac;

 FUNC_0(VAR_2, VAR_5, VAR_0);
 return 0;
}
