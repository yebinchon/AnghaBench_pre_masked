
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {int code; } ;
struct TYPE_6__ {TYPE_2__ rc; int gb; } ;
typedef TYPE_1__ SCPRContext ;
typedef TYPE_2__ RangeCoder ;
typedef int GetByteContext ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,int,int) ;
 int FUNC_1 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(SCPRContext *VAR_1, uint32_t VAR_2, uint32_t *VAR_3,
                         uint16_t *VAR_4, uint16_t *VAR_5,
                         uint16_t *VAR_6, uint8_t *VAR_7,
                         uint32_t *VAR_8)
{
    GetByteContext *VAR_9 = &VAR_1->gb;
    RangeCoder *VAR_10 = &VAR_1->rc;
    uint32_t VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

    VAR_11 = VAR_7[(VAR_10->code & 0xFFFu) >> 7];
    if (VAR_11 < VAR_2) {
        while (VAR_5[VAR_11 + 1] <= (VAR_10->code & 0xFFF)) {
            if (++VAR_11 >= VAR_2)
                break;
        }
    }

    if (VAR_11 > VAR_2)
        return VAR_0;

    VAR_6[VAR_11] += 16;
    VAR_13 = VAR_4[VAR_11];
    VAR_14 = VAR_5[VAR_11];
    *VAR_3 += 16;
    if (*VAR_3 + 16 > 4096) {
        *VAR_3 = 0;
        for (int VAR_18 = 0, VAR_19 = 0; VAR_19 < VAR_2 + 1; VAR_19++) {
            VAR_15 = VAR_6[VAR_19];
            VAR_5[VAR_19] = VAR_18;
            VAR_4[VAR_19] = VAR_15;
            VAR_16 = (VAR_18 + 127) >> 7;
            VAR_18 += VAR_15;
            VAR_17 = ((VAR_18 - 1) >> 7) + 1;
            if (VAR_17 > VAR_16) {
                for (int VAR_20 = 0; VAR_20 < VAR_17 - VAR_16; VAR_20++)
                    VAR_7[VAR_20 + VAR_16] = VAR_19;
            }
            VAR_12 = VAR_15 - (VAR_15 >> 1);
            VAR_6[VAR_19] = VAR_12;
            *VAR_3 += VAR_12;
        }
    }

    FUNC_0(VAR_9, VAR_10, VAR_13, VAR_14);
    FUNC_1(VAR_9, VAR_10);

    *VAR_8 = VAR_11;

    return 0;
}
