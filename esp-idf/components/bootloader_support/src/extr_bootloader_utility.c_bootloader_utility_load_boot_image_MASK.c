
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int size; int offset; } ;
typedef TYPE_1__ esp_partition_pos_t ;
typedef int esp_image_metadata_t ;
struct TYPE_10__ {int app_count; TYPE_1__ test; } ;
typedef TYPE_2__ bootloader_state_t ;


 int FUNC_0 (int ,int ,int,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 TYPE_1__ FUNC_6 (TYPE_2__ const*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_2__ const*,int) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int *) ;

void FUNC_11(const bootloader_state_t *VAR_4, int VAR_5)
{
    int VAR_6 = VAR_5;
    esp_partition_pos_t VAR_7;
    esp_image_metadata_t VAR_8;

    if (VAR_5 == VAR_2) {
        if (FUNC_10(&VAR_4->test, &VAR_8)) {
            FUNC_7(&VAR_8);
        } else {
            FUNC_1(VAR_1, "No bootable test partition in the partition table");
            FUNC_3();
        }
    }


    for (VAR_6 = VAR_5; VAR_6 >= VAR_0; VAR_6--) {
        VAR_7 = FUNC_6(VAR_4, VAR_6);
        if (VAR_7.size == 0) {
            continue;
        }
        FUNC_0(VAR_1, VAR_3, VAR_6, VAR_7.offset, VAR_7.size);
        if (FUNC_5(&VAR_7) && FUNC_10(&VAR_7, &VAR_8)) {
            FUNC_9(VAR_4, VAR_6);
            FUNC_7(&VAR_8);
        }
        FUNC_8(VAR_6);
    }


    for (VAR_6 = VAR_5 + 1; VAR_6 < VAR_4->app_count; VAR_6++) {
        VAR_7 = FUNC_6(VAR_4, VAR_6);
        if (VAR_7.size == 0) {
            continue;
        }
        FUNC_0(VAR_1, VAR_3, VAR_6, VAR_7.offset, VAR_7.size);
        if (FUNC_5(&VAR_7) && FUNC_10(&VAR_7, &VAR_8)) {
            FUNC_9(VAR_4, VAR_6);
            FUNC_7(&VAR_8);
        }
        FUNC_8(VAR_6);
    }

    if (FUNC_10(&VAR_4->test, &VAR_8)) {
        FUNC_2(VAR_1, "Falling back to test app as only bootable partition");
        FUNC_7(&VAR_8);
    }

    FUNC_1(VAR_1, "No bootable app partitions in the partition table");
    FUNC_4(&VAR_8, sizeof(esp_image_metadata_t));
    FUNC_3();
}
