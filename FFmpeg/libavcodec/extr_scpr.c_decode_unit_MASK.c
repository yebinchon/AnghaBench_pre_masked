
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int total_freq; int* lookup; int* freq; } ;
struct TYPE_5__ {int (* get_freq ) (int *,int,int*) ;int (* decode ) (int *,int *,int,int,int) ;int cbits; int rc; int gb; } ;
typedef TYPE_1__ SCPRContext ;
typedef int RangeCoder ;
typedef TYPE_2__ PixelModel ;
typedef int GetByteContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int*) ;
 int FUNC_1 (int *,int *,int,int,int) ;

__attribute__((used)) static int FUNC_2(SCPRContext *VAR_2, PixelModel *VAR_3, uint32_t VAR_4, uint32_t *VAR_5)
{
    GetByteContext *VAR_6 = &VAR_2->gb;
    RangeCoder *VAR_7 = &VAR_2->rc;
    uint32_t VAR_8 = VAR_3->total_freq;
    uint32_t VAR_9, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
    int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

    if ((VAR_15 = VAR_2->get_freq(VAR_7, VAR_8, &VAR_9)) < 0)
        return VAR_15;

    while (VAR_10 < 16) {
        VAR_12 = VAR_3->lookup[VAR_10];
        if (VAR_9 >= VAR_11 + VAR_12)
            VAR_11 += VAR_12;
        else
            break;
        VAR_10++;
    }

    VAR_16 = VAR_10 * 16;
    VAR_17 = 0;
    while (VAR_16 < 256) {
        VAR_17 = VAR_3->freq[VAR_16];
        if (VAR_9 >= VAR_11 + VAR_17)
            VAR_11 += VAR_17;
        else
            break;
        VAR_16++;
    }
    if (VAR_10 >= 16 || VAR_16 >= 256) {
        return VAR_0;
    }

    if ((VAR_15 = VAR_2->decode(VAR_6, VAR_7, VAR_11, VAR_17, VAR_8)) < 0)
        return VAR_15;

    VAR_3->freq[VAR_16] = VAR_17 + VAR_4;
    VAR_3->lookup[VAR_10] = VAR_12 + VAR_4;
    VAR_8 += VAR_4;
    if (VAR_8 > VAR_1) {
        VAR_8 = 0;
        for (VAR_13 = 0; VAR_13 < 256; VAR_13++) {
            uint32_t VAR_18 = (VAR_3->freq[VAR_13] >> 1) + 1;
            VAR_3->freq[VAR_13] = VAR_18;
            VAR_8 += VAR_18;
        }
        for (VAR_13 = 0; VAR_13 < 16; VAR_13++) {
            uint32_t VAR_19 = 0;
            uint32_t VAR_20 = VAR_13 << 4;
            for (VAR_14 = 0; VAR_14 < 16; VAR_14++)
                VAR_19 += VAR_3->freq[VAR_20 + VAR_14];
            VAR_3->lookup[VAR_13] = VAR_19;
        }
    }
    VAR_3->total_freq = VAR_8;

    *VAR_5 = VAR_16 & VAR_2->cbits;

    return 0;
}
