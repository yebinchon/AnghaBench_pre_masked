
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int modem_dce_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (char const*,int ) ;

__attribute__((used)) static esp_err_t FUNC_2(modem_dce_t *VAR_6, const char *VAR_7)
{
    esp_err_t VAR_8 = VAR_0;
    if (FUNC_1(VAR_7, VAR_3)) {
        VAR_8 = FUNC_0(VAR_6, VAR_5);
    } else if (FUNC_1(VAR_7, VAR_2)) {
        VAR_8 = FUNC_0(VAR_6, VAR_5);
    } else if (FUNC_1(VAR_7, VAR_1)) {
        VAR_8 = FUNC_0(VAR_6, VAR_4);
    }
    return VAR_8;
}
