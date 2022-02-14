
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wl_handle_t ;
typedef scalar_t__ esp_err_t ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;

esp_err_t FUNC_6(const char *VAR_2, wl_handle_t VAR_3)
{
    BYTE VAR_4 = FUNC_3(VAR_3);
    if (VAR_4 == 0xff) {
        return VAR_0;
    }
    char VAR_5[3] = {(char)('0' + VAR_4), ':', 0};

    FUNC_1(0, VAR_5, 0);
    FUNC_4(VAR_4);
    FUNC_2(VAR_3);

    esp_err_t VAR_6 = FUNC_5(VAR_3);
    esp_err_t VAR_7 = FUNC_0(VAR_2);
    if (VAR_7 == VAR_1) VAR_7 = VAR_6;
    return VAR_7;
}
