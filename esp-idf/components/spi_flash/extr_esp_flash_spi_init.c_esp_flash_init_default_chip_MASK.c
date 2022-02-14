
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int memspi_host_config_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_8__ {int size; TYPE_1__* host; } ;
struct TYPE_7__ {int chip_size; } ;
struct TYPE_6__ {int * driver_data; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 TYPE_2__ VAR_6 ;
 int FUNC_4 (int *,int *) ;

esp_err_t FUNC_5(void)
{
    memspi_host_config_t VAR_7 = FUNC_2();

    FUNC_4(&VAR_4, &VAR_7);
    VAR_3.host->driver_data = &VAR_4;



    esp_err_t VAR_8 = FUNC_3(&VAR_3);
    if (VAR_8 != VAR_1) {
        return VAR_8;
    }
    if (VAR_3.size < VAR_6.chip_size) {
        FUNC_0(VAR_2, "Detected size(%dk) smaller than the size in the binary image header(%dk). Probe failed.", VAR_3.size/1024, VAR_6.chip_size/1024);
        return VAR_0;
    } else if (VAR_3.size > VAR_6.chip_size) {
        FUNC_1(VAR_2, "Detected size(%dk) larger than the size in the binary image header(%dk). Using the size in the binary image header.", VAR_3.size/1024, VAR_6.chip_size/1024);
        VAR_3.size = VAR_6.chip_size;
    }
    VAR_3.size = VAR_6.chip_size;

    VAR_5 = &VAR_3;
    return VAR_1;
}
