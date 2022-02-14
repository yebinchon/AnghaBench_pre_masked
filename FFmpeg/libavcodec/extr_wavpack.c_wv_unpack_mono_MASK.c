
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_13__ {int crc; } ;
struct TYPE_12__ {int crc; } ;
struct TYPE_16__ {int pos; int samples; int terms; TYPE_4__* avctx; TYPE_3__* decorr; scalar_t__ zeroes; scalar_t__ zero; scalar_t__ one; TYPE_2__ extra_sc; TYPE_1__ sc; } ;
typedef TYPE_5__ WavpackFrameContext ;
struct TYPE_15__ {int err_recognition; } ;
struct TYPE_14__ {int value; unsigned int* samplesA; int weightA; int delta; } ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_5__*,int,int) ;
 int FUNC_3 (TYPE_5__*,int *,int ,int*) ;
 int FUNC_4 (TYPE_5__*,int*,int) ;
 void* FUNC_5 (TYPE_5__*,int*,int) ;
 int FUNC_6 (TYPE_5__*) ;

__attribute__((used)) static inline int FUNC_7(WavpackFrameContext *VAR_5, GetBitContext *VAR_6,
                                 void *VAR_7, const int VAR_8)
{
    int VAR_9, VAR_10, VAR_11 = 0;
    int VAR_12, VAR_13;
    int VAR_14, VAR_15, VAR_16;
    int VAR_17 = VAR_5->pos;
    uint32_t VAR_18 = VAR_5->sc.crc;
    uint32_t VAR_19 = VAR_5->extra_sc.crc;
    int16_t *VAR_20 = VAR_7;
    int32_t *VAR_21 = VAR_7;
    float *VAR_22 = VAR_7;

    VAR_5->one = VAR_5->zero = VAR_5->zeroes = 0;
    do {
        VAR_16 = FUNC_3(VAR_5, VAR_6, 0, &VAR_12);
        VAR_15 = 0;
        if (VAR_12)
            break;
        for (VAR_9 = 0; VAR_9 < VAR_5->terms; VAR_9++) {
            VAR_13 = VAR_5->decorr[VAR_9].value;
            if (VAR_13 > 8) {
                if (VAR_13 & 1)
                    VAR_14 = 2U * VAR_5->decorr[VAR_9].samplesA[0] - VAR_5->decorr[VAR_9].samplesA[1];
                else
                    VAR_14 = (int)(3U * VAR_5->decorr[VAR_9].samplesA[0] - VAR_5->decorr[VAR_9].samplesA[1]) >> 1;
                VAR_5->decorr[VAR_9].samplesA[1] = VAR_5->decorr[VAR_9].samplesA[0];
                VAR_10 = 0;
            } else {
                VAR_14 = VAR_5->decorr[VAR_9].samplesA[VAR_17];
                VAR_10 = (VAR_17 + VAR_13) & 7;
            }
            if (VAR_8 != VAR_3)
                VAR_15 = VAR_16 + ((VAR_5->decorr[VAR_9].weightA * (int64_t)VAR_14 + 512) >> 10);
            else
                VAR_15 = VAR_16 + (unsigned)((int)(VAR_5->decorr[VAR_9].weightA * (unsigned)VAR_14 + 512) >> 10);
            if (VAR_14 && VAR_16)
                VAR_5->decorr[VAR_9].weightA -= ((((VAR_16 ^ VAR_14) >> 30) & 2) - 1) * VAR_5->decorr[VAR_9].delta;
            VAR_5->decorr[VAR_9].samplesA[VAR_10] = VAR_16 = VAR_15;
        }
        VAR_17 = (VAR_17 + 1) & 7;
        VAR_18 = VAR_18 * 3 + VAR_15;

        if (VAR_8 == VAR_2) {
            *VAR_22++ = FUNC_4(VAR_5, &VAR_19, VAR_15);
        } else if (VAR_8 == VAR_4) {
            *VAR_21++ = FUNC_5(VAR_5, &VAR_19, VAR_15);
        } else {
            *VAR_20++ = FUNC_5(VAR_5, &VAR_19, VAR_15);
        }
        VAR_11++;
    } while (!VAR_12 && VAR_11 < VAR_5->samples);

    FUNC_6(VAR_5);

    if (VAR_12 && VAR_11 < VAR_5->samples) {
        int VAR_23 = FUNC_0(VAR_8);
        FUNC_1((uint8_t*)VAR_7 + VAR_11*VAR_23, 0, (VAR_5->samples-VAR_11)*VAR_23);
    }

    if (VAR_5->avctx->err_recognition & VAR_0) {
        int VAR_24 = FUNC_2(VAR_5, VAR_18, VAR_19);
        if (VAR_24 < 0 && VAR_5->avctx->err_recognition & VAR_1)
            return VAR_24;
    }

    return 0;
}
