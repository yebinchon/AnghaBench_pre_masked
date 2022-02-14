
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {unsigned int** thres2; } ;
typedef TYPE_1__ PP7Context ;


 int* VAR_0 ;

__attribute__((used)) static int FUNC_0(PP7Context *VAR_1, int16_t *VAR_2, int VAR_3)
{
    int VAR_4;
    int VAR_5;

    VAR_5 = VAR_2[0] * VAR_0[0];
    for (VAR_4 = 1; VAR_4 < 16; VAR_4++) {
        unsigned int VAR_6 = VAR_1->thres2[VAR_3][VAR_4];
        unsigned int VAR_7 = VAR_6 << 1;
        int VAR_8 = VAR_2[VAR_4];
        if (((unsigned)(VAR_8 + VAR_6)) > VAR_7) {
            if (((unsigned)(VAR_8 + 2 * VAR_6)) > 2 * VAR_7)
                VAR_5 += VAR_8 * VAR_0[VAR_4];
            else {
                if (VAR_8 > 0)
                    VAR_5 += 2 * (VAR_8 - (int)VAR_6) * VAR_0[VAR_4];
                else
                    VAR_5 += 2 * (VAR_8 + (int)VAR_6) * VAR_0[VAR_4];
            }
        }
    }
    return (VAR_5 + (1 << 11)) >> 12;
}
