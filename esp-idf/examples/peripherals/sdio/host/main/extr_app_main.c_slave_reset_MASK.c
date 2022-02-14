
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_slave_context_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int *) ;
 int VAR_4 ;
 int FUNC_5 (int) ;

esp_err_t FUNC_6(esp_slave_context_t *VAR_5)
{
    esp_err_t VAR_6;
    FUNC_1(VAR_3, "send reset to slave...");
    VAR_6 = FUNC_4(VAR_5, 0, VAR_1, ((void*)0));
    if (VAR_6 != VAR_0) {
        return VAR_6;
    }
    VAR_6 = FUNC_2(VAR_5, FUNC_0(VAR_2));
    if (VAR_6 != VAR_0) {
        return VAR_6;
    }

    FUNC_5(500 / VAR_4);
    VAR_6 = FUNC_3(VAR_5);
    FUNC_1(VAR_3, "slave io ready");
    return VAR_6;
}
