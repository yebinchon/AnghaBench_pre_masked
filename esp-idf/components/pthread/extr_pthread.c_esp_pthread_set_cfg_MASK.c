
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ stack_size; } ;
typedef TYPE_1__ esp_pthread_cfg_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_3 ;

esp_err_t FUNC_3(const esp_pthread_cfg_t *VAR_4)
{
    if (VAR_4->stack_size < VAR_2) {
        return VAR_0;
    }


    esp_pthread_cfg_t *VAR_5 = FUNC_1(VAR_3);
    if (!VAR_5) {
        VAR_5 = FUNC_0(sizeof(esp_pthread_cfg_t));
        if (!VAR_5) {
            return VAR_1;
        }
    }
    *VAR_5 = *VAR_4;
    FUNC_2(VAR_3, VAR_5);
    return 0;
}
