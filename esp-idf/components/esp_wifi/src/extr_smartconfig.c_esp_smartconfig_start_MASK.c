
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int smartconfig_start_config_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int const*) ;
 int VAR_4 ;

esp_err_t FUNC_4(const smartconfig_start_config_t *VAR_5)
{
    esp_err_t VAR_6 = VAR_0;

    VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_4, ((void*)0));
    if (VAR_6 != VAR_0) {
        FUNC_0(VAR_3, "Register smartconfig default event handler fail!");
        return VAR_6;
    }

    VAR_6 = FUNC_3(VAR_5);
    if (VAR_6 != VAR_0) {
        FUNC_2(VAR_1, VAR_2, VAR_4);
    }
    return VAR_6;
}
