
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sdio_slave_config_t ;
typedef int * intr_handle_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_2__ {int * intr_handle; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int const,int ,int *,int **) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;

esp_err_t FUNC_4(sdio_slave_config_t *VAR_4)
{
    esp_err_t VAR_5;
    intr_handle_t VAR_6 = ((void*)0);
    const int VAR_7 = 0;
    VAR_5 = FUNC_0(VAR_1, VAR_7, VAR_3, ((void*)0), &VAR_6);
    if (VAR_5 != VAR_0) return VAR_5;

    VAR_5 = FUNC_2(VAR_4);
    if (VAR_5 != VAR_0) return VAR_5;
    VAR_5 = FUNC_1(VAR_4);
    if (VAR_5 != VAR_0) return VAR_5;
    VAR_2.intr_handle = VAR_6;

    FUNC_3();
    return VAR_0;
}
