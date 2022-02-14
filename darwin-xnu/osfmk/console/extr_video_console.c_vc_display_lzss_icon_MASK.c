
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int member_2; int member_3; int member_4; int* member_5; int const* member_6; int member_1; int member_0; } ;
typedef TYPE_1__ lzss_image_state ;
struct TYPE_5__ {int v_rowbytes; scalar_t__ v_baseaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int,TYPE_1__*) ;
 TYPE_2__ VAR_3 ;

int
FUNC_2(uint32_t VAR_4, uint32_t VAR_5,
                     uint32_t VAR_6, uint32_t VAR_7,
                     const uint8_t *VAR_8,
                     uint32_t VAR_9,
                     const uint8_t *VAR_10)
{
    uint32_t* VAR_11;
    uint32_t VAR_12 = 4;
    uint32_t VAR_13 = VAR_3.v_rowbytes;

    FUNC_0();

    VAR_11 = (uint32_t *) (VAR_3.v_baseaddr + (VAR_5 * VAR_13) + (VAR_4 * VAR_12));

    lzss_image_state VAR_14 = {0, 0, VAR_6, &VAR_7, &VAR_13, *VAR_11, VAR_10};

    int VAR_15 = 0;

    const uint8_t *VAR_16 = VAR_8;
    uint32_t VAR_17 = VAR_9;


    uint8_t VAR_18[VAR_1 + VAR_0 - 1];
    const uint8_t *VAR_19 = VAR_16 + VAR_17;
    int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
    unsigned int VAR_25;

    VAR_19 = VAR_16 + VAR_17;
    for (VAR_20 = 0; VAR_20 < VAR_1 - VAR_0; VAR_20++)
        VAR_18[VAR_20] = ' ';
    VAR_23 = VAR_1 - VAR_0;
    VAR_25 = 0;
    for ( ; ; ) {
        if (((VAR_25 >>= 1) & 0x100) == 0) {
            if (VAR_16 < VAR_19) VAR_24 = *VAR_16++; else break;
            VAR_25 = VAR_24 | 0xFF00;
        }
        if (VAR_25 & 1) {
            if (VAR_16 < VAR_19) VAR_24 = *VAR_16++; else break;
            VAR_15 = FUNC_1(VAR_24, &VAR_14);
            if (VAR_15 != 0)
                return VAR_15;
            VAR_18[VAR_23++] = VAR_24;
            VAR_23 &= (VAR_1 - 1);
        } else {
            if (VAR_16 < VAR_19) VAR_20 = *VAR_16++; else break;
            if (VAR_16 < VAR_19) VAR_21 = *VAR_16++; else break;
            VAR_20 |= ((VAR_21 & 0xF0) << 4);
            VAR_21 = (VAR_21 & 0x0F) + VAR_2;
            for (VAR_22 = 0; VAR_22 <= VAR_21; VAR_22++) {
                VAR_24 = VAR_18[(VAR_20 + VAR_22) & (VAR_1 - 1)];
                VAR_15 = FUNC_1(VAR_24, &VAR_14);
                if (VAR_15 != 0 )
                    return VAR_15;
                VAR_18[VAR_23++] = VAR_24;
                VAR_23 &= (VAR_1 - 1);
            }
        }
    }
    return 0;
}
