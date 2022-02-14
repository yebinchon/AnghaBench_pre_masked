
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int large_const_buffer ;
struct TYPE_10__ {int host_id; void* speed; void* io_mode; } ;
typedef TYPE_1__ flashtest_config_t ;
struct TYPE_11__ {scalar_t__ size; } ;
typedef TYPE_2__ esp_partition_t ;
typedef int esp_flash_t ;
typedef scalar_t__ esp_flash_speed_t ;
typedef scalar_t__ esp_flash_io_mode_t ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 () ;
 int * FUNC_5 (int const) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,TYPE_2__ const*,int *,int const) ;
 int FUNC_9 (TYPE_1__*,int **) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,TYPE_2__ const*,int *,int const) ;

void FUNC_13(flashtest_config_t* VAR_6)
{

    flashtest_config_t VAR_7;
    FUNC_6(&VAR_7, VAR_6, sizeof(flashtest_config_t));
    flashtest_config_t* VAR_8 = &VAR_7;
    esp_flash_t* VAR_9;

    const int VAR_10 = sizeof(large_const_buffer);
    uint8_t *VAR_11 = FUNC_5(VAR_10);
    FUNC_2(VAR_11);
    FUNC_10(778);
    for (int VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
        VAR_11[VAR_12] = FUNC_7();
    }

    const esp_partition_t *VAR_13 = FUNC_4();
    FUNC_1(VAR_13->size > VAR_10 + 2 + VAR_4);


    VAR_8->io_mode = VAR_3;
    VAR_8->speed = VAR_1;
    FUNC_9(VAR_8, &VAR_9);
    FUNC_12(VAR_9, VAR_13, VAR_11, VAR_10);
    FUNC_8(VAR_9, VAR_13, VAR_11, VAR_10);
    FUNC_11(VAR_9, VAR_8->host_id);


    if (VAR_6->host_id != -1) {
        esp_flash_speed_t VAR_14 = VAR_1;
        while (VAR_14 != VAR_0) {


            esp_flash_io_mode_t VAR_15 = VAR_3;
            while (VAR_15 != VAR_2) {
                FUNC_0(VAR_5, "test flash io mode: %d, speed: %d", VAR_15, VAR_14);
                VAR_8->io_mode = VAR_15;
                VAR_8->speed = VAR_14;
                FUNC_9(VAR_8, &VAR_9);
                FUNC_8(VAR_9, VAR_13, VAR_11, VAR_10);
                FUNC_11(VAR_9, VAR_8->host_id);
                VAR_15++;
            }
            VAR_14++;
        }
    } else {

        FUNC_12(((void*)0), VAR_13, VAR_11, VAR_10);
        FUNC_8(((void*)0), VAR_13, VAR_11, VAR_10);
    }

    FUNC_3(VAR_11);
}
