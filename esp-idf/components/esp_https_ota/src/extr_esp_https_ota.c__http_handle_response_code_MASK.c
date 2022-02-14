
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_http_client_handle_t ;
typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static esp_err_t FUNC_5(esp_http_client_handle_t VAR_7, int VAR_8)
{
    esp_err_t VAR_9;
    if (VAR_8 == VAR_4 || VAR_8 == VAR_3) {
        VAR_9 = FUNC_3(VAR_7);
        if (VAR_9 != VAR_2) {
            FUNC_0(VAR_6, "URL redirection Failed");
            return VAR_9;
        }
    } else if (VAR_8 == VAR_5) {
        FUNC_1(VAR_7);
    }

    char VAR_10[VAR_0];
    if (FUNC_4(VAR_8)) {
        while (1) {
            int VAR_11 = FUNC_2(VAR_7, VAR_10, VAR_0);
            if (VAR_11 < 0) {
                FUNC_0(VAR_6, "Error: SSL data read error");
                return VAR_1;
            } else if (VAR_11 == 0) {
                return VAR_2;
            }
        }
    }
    return VAR_2;
}
