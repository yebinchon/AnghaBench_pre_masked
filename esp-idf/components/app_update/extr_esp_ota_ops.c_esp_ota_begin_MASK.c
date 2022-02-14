
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {size_t erased_size; scalar_t__ handle; TYPE_2__ const* part; } ;
typedef TYPE_1__ ota_ops_entry_t ;
struct TYPE_12__ {size_t size; } ;
typedef TYPE_2__ esp_partition_t ;
typedef scalar_t__ esp_ota_img_states_t ;
typedef scalar_t__ esp_ota_handle_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_10 ;
 TYPE_2__* FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_2__ const*,scalar_t__*) ;
 scalar_t__ FUNC_5 (TYPE_2__ const*,int ,size_t) ;
 TYPE_2__* FUNC_6 (TYPE_2__ const*) ;
 int FUNC_7 (TYPE_2__ const*) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;

esp_err_t FUNC_8(const esp_partition_t *VAR_13, size_t VAR_14, esp_ota_handle_t *VAR_15)
{
    ota_ops_entry_t *VAR_16;
    esp_err_t VAR_17 = VAR_5;

    if ((VAR_13 == ((void*)0)) || (VAR_15 == ((void*)0))) {
        return VAR_0;
    }

    VAR_13 = FUNC_6(VAR_13);
    if (VAR_13 == ((void*)0)) {
        return VAR_1;
    }

    if (!FUNC_7(VAR_13)) {
        return VAR_0;
    }

    const esp_partition_t* VAR_18 = FUNC_3();
    if (VAR_13 == VAR_18) {
        return VAR_3;
    }
    if ((VAR_14 == 0) || (VAR_14 == VAR_7)) {
        VAR_17 = FUNC_5(VAR_13, 0, VAR_13->size);
    } else {
        VAR_17 = FUNC_5(VAR_13, 0, (VAR_14 / VAR_8 + 1) * VAR_8);
    }

    if (VAR_17 != VAR_5) {
        return VAR_17;
    }

    VAR_16 = (ota_ops_entry_t *) FUNC_2(sizeof(ota_ops_entry_t), 1);
    if (VAR_16 == ((void*)0)) {
        return VAR_2;
    }

    FUNC_1(&VAR_11, VAR_16, VAR_10);

    if ((VAR_14 == 0) || (VAR_14 == VAR_7)) {
        VAR_16->erased_size = VAR_13->size;
    } else {
        VAR_16->erased_size = VAR_14;
    }

    VAR_16->part = VAR_13;
    VAR_16->handle = ++VAR_12;
    *VAR_15 = VAR_16->handle;
    return VAR_5;
}
