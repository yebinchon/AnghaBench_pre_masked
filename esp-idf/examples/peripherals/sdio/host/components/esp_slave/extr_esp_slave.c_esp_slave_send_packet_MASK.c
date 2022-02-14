
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef size_t uint16_t ;
typedef int sdmmc_card_t ;
struct TYPE_4__ {size_t buffer_size; int tx_sent_buffers; int * card; } ;
typedef TYPE_1__ esp_slave_context_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,size_t,int) ;
 int FUNC_1 (int ,char*,size_t,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,size_t*) ;
 size_t VAR_4 ;
 int FUNC_4 (int *,int,scalar_t__,int *,int) ;
 int FUNC_5 (int *,int,scalar_t__,int *,int) ;
 int FUNC_6 (int) ;
 size_t FUNC_7 () ;

esp_err_t FUNC_8(esp_slave_context_t *VAR_5, const void* VAR_6, size_t VAR_7, uint32_t VAR_8)
{
    sdmmc_card_t *VAR_9 = VAR_5->card;
    uint16_t VAR_10 = VAR_5->buffer_size;
    int VAR_11 = (VAR_7 + VAR_10 - 1)/VAR_10;
    esp_err_t VAR_12;
    const uint32_t VAR_13 = VAR_8/VAR_4;
    uint32_t VAR_14 = FUNC_7();

    FUNC_2(VAR_7>0);
    for(;;) {
        uint32_t VAR_15 = 0;
        VAR_12 = FUNC_3(VAR_5, &VAR_15);
        if (VAR_12 == VAR_1 && VAR_15 * VAR_10 >= VAR_7) break;
        if (VAR_12 != VAR_1 && VAR_12 != VAR_0) return VAR_12;

        uint32_t VAR_16 = FUNC_7();
        if (VAR_16-VAR_14 >= VAR_13) {
            FUNC_0(VAR_3, "buffer is not enough: %d, %d required.", VAR_15, VAR_11);
            return VAR_0;
        } else {
            FUNC_1(VAR_3, "buffer is not enough: %d, %d required. Retry...", VAR_15, VAR_11);
        }
        FUNC_6(1);
    }

    FUNC_1(VAR_3, "send_packet: len: %d", VAR_7);
    uint8_t *VAR_17 = (uint8_t*)VAR_6;
    uint32_t VAR_18 = VAR_7;
    do {
        const int VAR_19 = 512;





        int VAR_20 = VAR_18/VAR_19;
        int VAR_21;
        if (VAR_20) {
            VAR_21 = VAR_20 * VAR_19;
            VAR_12 = FUNC_4(VAR_9, 1, VAR_2 - VAR_18, VAR_17, VAR_21);
        } else {
            VAR_21 = VAR_18;
            VAR_12 = FUNC_5(VAR_9, 1, VAR_2 - VAR_18, VAR_17, (VAR_21 + 3) & (~3));
        }
        if (VAR_12 != VAR_1) return VAR_12;
        VAR_17 += VAR_21;
        VAR_18 -= VAR_21;
    } while (VAR_18);

    VAR_5->tx_sent_buffers += VAR_11;
    return VAR_1;
}
