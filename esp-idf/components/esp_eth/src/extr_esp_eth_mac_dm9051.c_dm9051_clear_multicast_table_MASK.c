
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ esp_err_t ;
typedef int emac_dm9051_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*,int ,int ) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int) ;
 int VAR_4 ;

__attribute__((used)) static esp_err_t FUNC_2(emac_dm9051_t *VAR_5)
{
    esp_err_t VAR_6 = VAR_3;

    FUNC_0(FUNC_1(VAR_5, VAR_0, 0x00) == VAR_3, "write BCASTCR failed", VAR_4, VAR_2);
    for (int VAR_7 = 0; VAR_7 < 7; VAR_7++) {
        FUNC_0(FUNC_1(VAR_5, VAR_1 + VAR_7, 0x00) == VAR_3, "write MAR failed", VAR_4, VAR_2);
    }

    FUNC_0(FUNC_1(VAR_5, VAR_1 + 7, 0x80) == VAR_3, "write MAR failed", VAR_4, VAR_2);
    return VAR_3;
err:
    return VAR_6;
}
