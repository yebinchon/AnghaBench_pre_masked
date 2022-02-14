
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvs_handle_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*,char const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char const*) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;

__attribute__((used)) static esp_err_t FUNC_5(const char *VAR_4)
{
    nvs_handle_t VAR_5;

    esp_err_t VAR_6 = FUNC_4(VAR_3, VAR_1, &VAR_5);
    if (VAR_6 == VAR_0) {
        VAR_6 = FUNC_3(VAR_5, VAR_4);
        if (VAR_6 == VAR_0) {
            VAR_6 = FUNC_2(VAR_5);
            if (VAR_6 == VAR_0) {
                FUNC_0(VAR_2, "Value with key '%s' erased", VAR_4);
            }
        }
        FUNC_1(VAR_5);
    }

    return VAR_6;
}
