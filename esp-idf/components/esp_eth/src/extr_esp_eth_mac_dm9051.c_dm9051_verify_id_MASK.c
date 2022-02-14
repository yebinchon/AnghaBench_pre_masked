
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ esp_err_t ;
typedef int emac_dm9051_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,char*,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int*) ;
 int VAR_7 ;

__attribute__((used)) static esp_err_t FUNC_2(emac_dm9051_t *VAR_8)
{
    esp_err_t VAR_9 = VAR_6;
    uint8_t VAR_10[2];
    FUNC_0(FUNC_1(VAR_8, VAR_3, &VAR_10[0]) == VAR_6, "read VIDL failed", VAR_7, VAR_5);
    FUNC_0(FUNC_1(VAR_8, VAR_2, &VAR_10[1]) == VAR_6, "read VIDH failed", VAR_7, VAR_5);
    FUNC_0(0x0A == VAR_10[1] && 0x46 == VAR_10[0], "wrong Vendor ID", VAR_7, VAR_4);
    FUNC_0(FUNC_1(VAR_8, VAR_1, &VAR_10[0]) == VAR_6, "read PIDL failed", VAR_7, VAR_5);
    FUNC_0(FUNC_1(VAR_8, VAR_0, &VAR_10[1]) == VAR_6, "read PIDH failed", VAR_7, VAR_5);
    FUNC_0(0x90 == VAR_10[1] && 0x51 == VAR_10[0], "wrong Product ID", VAR_7, VAR_4);
    return VAR_6;
err:
    return VAR_9;
}
