
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
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*,int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,int ,int*) ;
 scalar_t__ FUNC_2 (int *,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static esp_err_t FUNC_3(emac_dm9051_t *VAR_6)
{
    esp_err_t VAR_7 = VAR_3;

    FUNC_0(FUNC_2(VAR_6, VAR_0, 0x00) == VAR_3, "write IMR failed", VAR_5, VAR_2);

    uint8_t VAR_8 = 0;
    FUNC_0(FUNC_1(VAR_6, VAR_1, &VAR_8) == VAR_3, "read RCR failed", VAR_5, VAR_2);
    VAR_8 &= ~VAR_4;
    FUNC_0(FUNC_2(VAR_6, VAR_1, VAR_8) == VAR_3, "write RCR failed", VAR_5, VAR_2);
    return VAR_3;
err:
    return VAR_7;
}
