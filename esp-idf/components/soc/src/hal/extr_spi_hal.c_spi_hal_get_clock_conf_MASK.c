
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ timing_dummy; int timing_miso_delay; int clock_reg; } ;
typedef TYPE_1__ spi_hal_timing_conf_t ;
struct TYPE_6__ {scalar_t__ no_compensate; scalar_t__ half_duplex; } ;
typedef TYPE_2__ spi_hal_context_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ,int const) ;
 int FUNC_1 (int,int,int,scalar_t__*,int *) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int,int,int *) ;

esp_err_t FUNC_4(const spi_hal_context_t *VAR_3, int VAR_4, int VAR_5, bool VAR_6, int VAR_7, int *VAR_8, spi_hal_timing_conf_t *VAR_9)
{
    spi_hal_timing_conf_t VAR_10;

    int VAR_11 = FUNC_3(VAR_0, VAR_4, VAR_5, &VAR_10.clock_reg);



    FUNC_1(VAR_11, VAR_6, VAR_7, &VAR_10.timing_dummy, &VAR_10.timing_miso_delay);
    if (VAR_9) {
        *VAR_9 = VAR_10;
    }
    if (VAR_8) {
        *VAR_8 = VAR_11;
    }
    return VAR_2;
}
