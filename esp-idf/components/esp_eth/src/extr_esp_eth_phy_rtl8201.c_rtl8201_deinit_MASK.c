
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_eth_phy_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static esp_err_t FUNC_2(esp_eth_phy_t *VAR_3)
{

    FUNC_0(FUNC_1(VAR_3, 0) == VAR_1, "power control failed", VAR_2);
    return VAR_1;
err:
    return VAR_0;
}
