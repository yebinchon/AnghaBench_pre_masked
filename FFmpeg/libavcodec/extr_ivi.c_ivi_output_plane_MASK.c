
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int16_t ;
struct TYPE_5__ {int height; int width; TYPE_1__* bands; } ;
struct TYPE_4__ {int* buf; int pitch; } ;
typedef TYPE_2__ IVIPlaneDesc ;


 int FUNC_0 (int const) ;

__attribute__((used)) static void FUNC_1(IVIPlaneDesc *VAR_0, uint8_t *VAR_1, ptrdiff_t VAR_2)
{
    int VAR_3, VAR_4;
    const int16_t *VAR_5 = VAR_0->bands[0].buf;
    ptrdiff_t VAR_6 = VAR_0->bands[0].pitch;

    if (!VAR_5)
        return;

    for (VAR_4 = 0; VAR_4 < VAR_0->height; VAR_4++) {
        int VAR_7 = 0;
        int VAR_8 = VAR_0->width;
        for (VAR_3 = 0; VAR_3 < VAR_8; VAR_3++) {
            int VAR_9 = VAR_5[VAR_3] + 128;
            VAR_1[VAR_3] = VAR_9;
            VAR_7 |= VAR_9;
        }
        if (VAR_7 & ~255)
            for (VAR_3 = 0; VAR_3 < VAR_8; VAR_3++)
                VAR_1[VAR_3] = FUNC_0(VAR_5[VAR_3] + 128);
        VAR_5 += VAR_6;
        VAR_1 += VAR_2;
    }
}
