
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ magic; int text_offset; size_t text_size; size_t data_size; int bss_size; } ;
typedef TYPE_1__ ulp_binary_header_t ;
typedef TYPE_1__ uint8_t ;
typedef int uint32_t ;
typedef int header ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,size_t,size_t,int,size_t,size_t,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__ const*,size_t) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

esp_err_t FUNC_3(uint32_t VAR_8, const uint8_t* VAR_9, size_t VAR_10)
{
    size_t VAR_11 = VAR_10 * sizeof(uint32_t);
    size_t VAR_12 = VAR_8 * sizeof(uint32_t);

    if (VAR_11 < sizeof(ulp_binary_header_t)) {
        return VAR_1;
    }
    if (VAR_12 > VAR_7) {
        return VAR_0;
    }
    if (VAR_12 + VAR_11 > VAR_7) {
        return VAR_1;
    }


    ulp_binary_header_t VAR_13;
    FUNC_1(&VAR_13, VAR_9, sizeof(VAR_13));

    if (VAR_13.magic != VAR_6) {
        return VAR_2;
    }

    size_t VAR_14 = (size_t) VAR_13.text_offset + (size_t) VAR_13.text_size +
            (size_t) VAR_13.data_size;

    FUNC_0(VAR_5, "program_size_bytes: %d total_size: %d offset: %d .text: %d, .data: %d, .bss: %d",
            VAR_11, VAR_14, VAR_13.text_offset,
            VAR_13.text_size, VAR_13.data_size, VAR_13.bss_size);

    if (VAR_14 != VAR_11) {
        return VAR_1;
    }

    size_t VAR_15 = VAR_13.text_size + VAR_13.data_size;
    uint8_t* VAR_16 = (uint8_t*) VAR_4;

    FUNC_1(VAR_16 + VAR_12, VAR_9 + VAR_13.text_offset, VAR_15);
    FUNC_2(VAR_16 + VAR_12 + VAR_15, 0, VAR_13.bss_size);

    return VAR_3;
}
