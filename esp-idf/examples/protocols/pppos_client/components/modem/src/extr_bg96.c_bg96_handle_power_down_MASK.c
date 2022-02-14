
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
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (char const*,int ) ;

__attribute__((used)) static esp_err_t FUNC_2(modem_dce_t *VAR_5, const char *VAR_6)
{
    esp_err_t VAR_7 = VAR_0;
    if (FUNC_1(VAR_6, VAR_3)) {
        VAR_7 = VAR_1;
    } else if (FUNC_1(VAR_6, VAR_2)) {
        VAR_7 = FUNC_0(VAR_5, VAR_4);
    }
    return VAR_7;
}
