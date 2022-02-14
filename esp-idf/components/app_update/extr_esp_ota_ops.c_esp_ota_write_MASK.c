
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_5__ {scalar_t__ handle; scalar_t__ erased_size; scalar_t__ wrote_size; int partial_bytes; scalar_t__ const* partial_data; int part; } ;
typedef TYPE_1__ ota_ops_entry_t ;
typedef scalar_t__ esp_ota_handle_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ const VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ) ;
 size_t FUNC_3 (int,size_t) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,scalar_t__,scalar_t__ const*,size_t) ;
 int FUNC_7 (scalar_t__ const*,scalar_t__ const*,size_t) ;
 int FUNC_8 (scalar_t__ const*,int,int) ;
 int VAR_6 ;

esp_err_t FUNC_9(esp_ota_handle_t VAR_7, const void *VAR_8, size_t VAR_9)
{
    const uint8_t *VAR_10 = (const uint8_t *)VAR_8;
    esp_err_t VAR_11;
    ota_ops_entry_t *VAR_12;

    if (VAR_8 == ((void*)0)) {
        FUNC_0(VAR_4, "write data is invalid");
        return VAR_0;
    }


    for (VAR_12 = FUNC_1(&VAR_6); VAR_12 != ((void*)0); VAR_12 = FUNC_2(VAR_12, VAR_5)) {
        if (VAR_12->handle == VAR_7) {

            FUNC_4(VAR_12->erased_size > 0 && "must erase the partition before writing to it");
            if (VAR_12->wrote_size == 0 && VAR_12->partial_bytes == 0 && VAR_9 > 0 && VAR_10[0] != VAR_2) {
                FUNC_0(VAR_4, "OTA image has invalid magic byte (expected 0xE9, saw 0x%02x)", VAR_10[0]);
                return VAR_1;
            }

            if (FUNC_5()) {

                size_t VAR_13;


                if (VAR_12->partial_bytes != 0) {
                    VAR_13 = FUNC_3(16 - VAR_12->partial_bytes, VAR_9);
                    FUNC_7(VAR_12->partial_data + VAR_12->partial_bytes, VAR_10, VAR_13);
                    VAR_12->partial_bytes += VAR_13;
                    if (VAR_12->partial_bytes != 16) {
                        return VAR_3;
                    }

                    VAR_11 = FUNC_6(VAR_12->part, VAR_12->wrote_size, VAR_12->partial_data, 16);
                    if (VAR_11 != VAR_3) {
                        return VAR_11;
                    }
                    VAR_12->partial_bytes = 0;
                    FUNC_8(VAR_12->partial_data, 0xFF, 16);
                    VAR_12->wrote_size += 16;
                    VAR_10 += VAR_13;
                    VAR_9 -= VAR_13;
                }


                VAR_12->partial_bytes = VAR_9 % 16;
                if (VAR_12->partial_bytes != 0) {
                    VAR_9 -= VAR_12->partial_bytes;
                    FUNC_7(VAR_12->partial_data, VAR_10 + VAR_9, VAR_12->partial_bytes);
                }
            }

            VAR_11 = FUNC_6(VAR_12->part, VAR_12->wrote_size, VAR_10, VAR_9);
            if(VAR_11 == VAR_3){
                VAR_12->wrote_size += VAR_9;
            }
            return VAR_11;
        }
    }


    FUNC_0(VAR_4,"not found the handle");
    return VAR_0;
}
