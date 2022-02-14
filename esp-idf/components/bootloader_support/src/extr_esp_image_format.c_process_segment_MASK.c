
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_6__ {intptr_t load_addr; int data_len; } ;
typedef TYPE_1__ esp_image_segment_header_t ;
typedef scalar_t__ esp_err_t ;
typedef int * bootloader_sha256_handle_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int ,char*,int,int,intptr_t,int,int,char*) ;
 int FUNC_3 (int ,char*,int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (scalar_t__,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 intptr_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (int,TYPE_1__*,int,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,TYPE_1__*,int) ;
 scalar_t__ FUNC_9 (intptr_t const,intptr_t const,intptr_t,intptr_t const) ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 (intptr_t,int,int,int,int *,int*) ;
 scalar_t__ FUNC_12 (intptr_t) ;
 int FUNC_13 (intptr_t) ;
 scalar_t__ FUNC_14 (int,TYPE_1__*,int,int) ;

__attribute__((used)) static esp_err_t FUNC_15(int VAR_9, uint32_t VAR_10, esp_image_segment_header_t *VAR_11, bool VAR_12, bool VAR_13, bootloader_sha256_handle_t VAR_14, uint32_t *VAR_15)
{
    esp_err_t VAR_16;


    VAR_16 = FUNC_6(VAR_10, VAR_11, sizeof(esp_image_segment_header_t), 1);
    if (VAR_16 != VAR_1) {
        FUNC_1(VAR_6, "bootloader_flash_read failed at 0x%08x", VAR_10);
        return VAR_16;
    }
    if (VAR_14 != ((void*)0)) {
        FUNC_8(VAR_14, VAR_11, sizeof(esp_image_segment_header_t));
    }

    intptr_t VAR_17 = VAR_11->load_addr;
    uint32_t VAR_18 = VAR_11->data_len;
    uint32_t VAR_19 = VAR_10 + sizeof(esp_image_segment_header_t);

    FUNC_3(VAR_6, "segment data length 0x%x data starts 0x%x", VAR_18, VAR_19);

    VAR_16 = FUNC_14(VAR_9, VAR_11, VAR_19, VAR_12);
    if (VAR_16 != VAR_1) {
        return VAR_16;
    }

    if (VAR_18 % 4 != 0) {
        FUNC_4("unaligned segment length 0x%x", VAR_18);
    }

    bool VAR_20 = FUNC_13(VAR_17);
    VAR_13 = VAR_13 && FUNC_12(VAR_17);

    if (!VAR_12) {
        FUNC_2(VAR_6, "segment %d: paddr=0x%08x vaddr=0x%08x size=0x%05x (%6d) %s",
                 VAR_9, VAR_19, VAR_17,
                 VAR_18, VAR_18,
                 (VAR_13) ? "load" : (VAR_20) ? "map" : "");
    }
    uint32_t VAR_21 = FUNC_7();
    FUNC_0(VAR_6, "free data page_count 0x%08x", VAR_21);

    int32_t VAR_22 = VAR_18;
    while (VAR_22 > 0) {
        uint32_t VAR_23 = ((VAR_19 & VAR_2) != 0) ? 1 : 0;

        VAR_18 = FUNC_5(VAR_22, ((VAR_21 - VAR_23) * VAR_4));
        VAR_16 = FUNC_11(VAR_17, VAR_19, VAR_18, VAR_13, VAR_14, VAR_15);
        if (VAR_16 != VAR_1) {
            return VAR_16;
        }
        VAR_19 += VAR_18;
        VAR_22 -= VAR_18;
    }

    return VAR_1;

err:
    if (VAR_16 == VAR_1) {
        VAR_16 = VAR_0;
    }

    return VAR_16;
}
