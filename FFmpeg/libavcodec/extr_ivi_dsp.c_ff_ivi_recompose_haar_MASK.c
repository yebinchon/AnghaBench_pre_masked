
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
struct TYPE_5__ {int height; int width; TYPE_1__* bands; } ;
struct TYPE_4__ {int pitch; short* buf; } ;
typedef TYPE_2__ IVIPlaneDesc ;


 int FUNC_0 (int) ;

void FUNC_1(const IVIPlaneDesc *VAR_0, uint8_t *VAR_1,
                           const ptrdiff_t VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    const short *VAR_14, *VAR_15, *VAR_16, *VAR_17;
    ptrdiff_t VAR_18;


    VAR_18 = VAR_0->bands[0].pitch;


    VAR_14 = VAR_0->bands[0].buf;
    VAR_15 = VAR_0->bands[1].buf;
    VAR_16 = VAR_0->bands[2].buf;
    VAR_17 = VAR_0->bands[3].buf;

    for (VAR_4 = 0; VAR_4 < VAR_0->height; VAR_4 += 2) {
        for (VAR_3 = 0, VAR_5 = 0; VAR_3 < VAR_0->width; VAR_3 += 2, VAR_5++) {

            VAR_6 = VAR_14[VAR_5];
            VAR_7 = VAR_15[VAR_5];
            VAR_8 = VAR_16[VAR_5];
            VAR_9 = VAR_17[VAR_5];


            VAR_10 = (VAR_6 + VAR_7 + VAR_8 + VAR_9 + 2) >> 2;
            VAR_11 = (VAR_6 + VAR_7 - VAR_8 - VAR_9 + 2) >> 2;
            VAR_12 = (VAR_6 - VAR_7 + VAR_8 - VAR_9 + 2) >> 2;
            VAR_13 = (VAR_6 - VAR_7 - VAR_8 + VAR_9 + 2) >> 2;


            VAR_1[VAR_3] = FUNC_0(VAR_10 + 128);
            VAR_1[VAR_3 + 1] = FUNC_0(VAR_11 + 128);
            VAR_1[VAR_2 + VAR_3] = FUNC_0(VAR_12 + 128);
            VAR_1[VAR_2 + VAR_3 + 1] = FUNC_0(VAR_13 + 128);
        }

        VAR_1 += VAR_2 << 1;

        VAR_14 += VAR_18;
        VAR_15 += VAR_18;
        VAR_16 += VAR_18;
        VAR_17 += VAR_18;
    }
}
