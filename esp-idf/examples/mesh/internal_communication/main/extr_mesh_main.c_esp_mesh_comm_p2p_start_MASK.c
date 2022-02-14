
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int *,int,int *) ;

esp_err_t FUNC_1(void)
{
    static bool VAR_3 = 0;
    if (!VAR_3) {
        VAR_3 = 1;
        FUNC_0(VAR_2, "MPTX", 3072, ((void*)0), 5, ((void*)0));
        FUNC_0(VAR_1, "MPRX", 3072, ((void*)0), 5, ((void*)0));
    }
    return VAR_0;
}
