
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int (* walk_band_t ) (TYPE_1__*,int,int,int,int,int,int,int *) ;
typedef int int32_t ;
struct TYPE_5__ {int* band_spectrum; } ;
typedef TYPE_1__ DCAEncContext ;



__attribute__((used)) static void FUNC_0(DCAEncContext *VAR_0, int VAR_1, int VAR_2,
                           walk_band_t VAR_3, int32_t *VAR_4)
{
    int VAR_5;

    if (VAR_1 == 31) {
        for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
            VAR_3(VAR_0, 31, 31, 256 - 4 + VAR_5, 0, -2047, VAR_2, VAR_4);
    } else {
        for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
            VAR_3(VAR_0, VAR_1, VAR_1 + 1, 8 * VAR_1 + 4 + VAR_5,
                    VAR_0->band_spectrum[VAR_5], VAR_0->band_spectrum[7 - VAR_5], VAR_2, VAR_4);
    }
}
