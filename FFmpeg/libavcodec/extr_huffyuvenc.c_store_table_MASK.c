
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int vlc_n; } ;
typedef TYPE_1__ HYuvContext ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(HYuvContext *VAR_0, const uint8_t *VAR_1, uint8_t *VAR_2)
{
    int VAR_3;
    int VAR_4 = 0;
    int VAR_5 = VAR_0->vlc_n;

    for (VAR_3 = 0; VAR_3 < VAR_5;) {
        int VAR_6 = VAR_1[VAR_3];
        int VAR_7 = 0;

        for (; VAR_3 < VAR_5 && VAR_1[VAR_3] == VAR_6 && VAR_7 < 255; VAR_3++)
            VAR_7++;

        FUNC_0(VAR_6 < 32 && VAR_6 >0 && VAR_7 < 256 && VAR_7>0);
        if (VAR_7 > 7) {
            VAR_2[VAR_4++] = VAR_6;
            VAR_2[VAR_4++] = VAR_7;
        } else {
            VAR_2[VAR_4++] = VAR_6 | (VAR_7 << 5);
        }
    }

    return VAR_4;
}
