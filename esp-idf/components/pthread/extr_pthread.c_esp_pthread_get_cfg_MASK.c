
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_pthread_cfg_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int * FUNC_1 (int ) ;
 int VAR_2 ;

esp_err_t FUNC_2(esp_pthread_cfg_t *VAR_3)
{
    esp_pthread_cfg_t *VAR_4 = FUNC_1(VAR_2);
    if (VAR_4) {
        *VAR_3 = *VAR_4;
        return VAR_1;
    }
    FUNC_0(VAR_3, 0, sizeof(*VAR_3));
    return VAR_0;
}
