
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvs_handle_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*,char const*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const*,int ,int *) ;

__attribute__((used)) static esp_err_t FUNC_5(const char *VAR_3)
{
    nvs_handle_t VAR_4;

    esp_err_t VAR_5 = FUNC_4(VAR_3, VAR_1, &VAR_4);
    if (VAR_5 == VAR_0) {
        VAR_5 = FUNC_3(VAR_4);
        if (VAR_5 == VAR_0) {
            VAR_5 = FUNC_2(VAR_4);
        }
    }

    FUNC_0(VAR_2, "Namespace '%s' was %s erased", VAR_3, (VAR_5 == VAR_0) ? "" : "not");

    FUNC_1(VAR_4);
    return VAR_0;
}
