
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,int ,int ,int *,int ,int *,scalar_t__) ;

esp_err_t FUNC_2(void)
{
    int VAR_9;

    VAR_9 = FUNC_1(VAR_6, VAR_2, VAR_4, ((void*)0), VAR_3, ((void*)0), VAR_8 - 1);

    if (VAR_9 != VAR_7) {
        FUNC_0(VAR_5, "create task %s failed", VAR_2);
        return VAR_0;
    }

    return VAR_1;
}
