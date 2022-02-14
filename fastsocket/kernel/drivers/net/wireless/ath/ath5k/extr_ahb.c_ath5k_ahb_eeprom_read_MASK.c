
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {struct ar231x_board_config* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct ath_common {struct ath5k_hw* priv; } ;
struct ath5k_hw {int dev; } ;
struct ar231x_board_config {scalar_t__ config; scalar_t__ radio; } ;


 int VAR_0 ;
 struct platform_device* FUNC_0 (int ) ;

__attribute__((used)) static bool
FUNC_1(struct ath_common *VAR_1, u32 VAR_2, u16 *VAR_3)
{
 struct ath5k_hw *VAR_4 = VAR_1->priv;
 struct platform_device *VAR_5 = FUNC_0(VAR_4->dev);
 struct ar231x_board_config *VAR_6 = VAR_5->dev.platform_data;
 u16 *VAR_7, *VAR_8;



 VAR_6 = VAR_5->dev.platform_data;
 VAR_7 = (u16 *) VAR_6->radio;
 VAR_8 = ((void *) VAR_6->config) + VAR_0;

 VAR_7 += VAR_2;
 if (VAR_7 > VAR_8)
  return 0;

 *VAR_3 = *VAR_7;
 return 1;
}
