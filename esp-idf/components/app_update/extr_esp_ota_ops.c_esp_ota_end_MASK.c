
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ handle; scalar_t__ erased_size; scalar_t__ wrote_size; scalar_t__ partial_bytes; TYPE_4__* part; int partial_data; } ;
typedef TYPE_1__ ota_ops_entry_t ;
struct TYPE_11__ {int size; int offset; } ;
typedef TYPE_2__ esp_partition_pos_t ;
typedef scalar_t__ esp_ota_handle_t ;
typedef int esp_image_metadata_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_12__ {int size; int address; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ,TYPE_2__ const*,int *) ;
 scalar_t__ FUNC_4 (TYPE_4__*,scalar_t__,int ,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_7 ;

esp_err_t FUNC_6(esp_ota_handle_t VAR_8)
{
    ota_ops_entry_t *VAR_9;
    esp_err_t VAR_10 = VAR_5;

    for (VAR_9 = FUNC_0(&VAR_7); VAR_9 != ((void*)0); VAR_9 = FUNC_1(VAR_9, VAR_6)) {
        if (VAR_9->handle == VAR_8) {
            break;
        }
    }

    if (VAR_9 == ((void*)0)) {
        return VAR_2;
    }




    if ((VAR_9->erased_size == 0) || (VAR_9->wrote_size == 0)) {
        VAR_10 = VAR_0;
        goto cleanup;
    }

    if (VAR_9->partial_bytes > 0) {

        VAR_10 = FUNC_4(VAR_9->part, VAR_9->wrote_size, VAR_9->partial_data, 16);
        if (VAR_10 != VAR_5) {
            VAR_10 = VAR_1;
            goto cleanup;
        }
        VAR_9->wrote_size += 16;
        VAR_9->partial_bytes = 0;
    }

    esp_image_metadata_t VAR_11;
    const esp_partition_pos_t VAR_12 = {
      .offset = VAR_9->part->address,
      .size = VAR_9->part->size,
    };

    if (FUNC_3(VAR_4, &VAR_12, &VAR_11) != VAR_5) {
        VAR_10 = VAR_3;
        goto cleanup;
    }

 cleanup:
    FUNC_2(VAR_9, VAR_6);
    FUNC_5(VAR_9);
    return VAR_10;
}
