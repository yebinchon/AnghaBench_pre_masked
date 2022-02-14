
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum Rate { ____Placeholder_Rate } Rate ;
struct TYPE_3__ {int index; int opt_gain; int sc_gain; } ;
typedef TYPE_1__ PPFParam ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int* VAR_0 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(int VAR_1, PPFParam *VAR_2, enum Rate VAR_3,
                           int VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7;
    int VAR_8, VAR_9;

    VAR_2->index = VAR_1;

    VAR_8 = VAR_4 * VAR_6 >> 1;
    VAR_9 = VAR_5 * VAR_5 << 1;

    if (VAR_9 > VAR_8) {
        if (VAR_5 >= VAR_6) {
            VAR_2->opt_gain = VAR_0[VAR_3];
        } else {
            VAR_2->opt_gain = (VAR_5 << 15) / VAR_6 *
                            VAR_0[VAR_3] >> 15;
        }

        VAR_8 = (VAR_4 << 15) + (VAR_5 * VAR_2->opt_gain << 1);
        VAR_9 = (VAR_2->opt_gain * VAR_2->opt_gain >> 15) * VAR_6;
        VAR_7 = FUNC_1(VAR_8, VAR_9 + (1 << 15)) >> 16;

        if (VAR_4 >= VAR_7 << 1) {
            VAR_8 = 0x7fff;
        } else {
            VAR_8 = (VAR_4 << 14) / VAR_7;
        }


        VAR_2->sc_gain = FUNC_2(VAR_8 << 16);
    } else {
        VAR_2->opt_gain = 0;
        VAR_2->sc_gain = 0x7fff;
    }

    VAR_2->opt_gain = FUNC_0(VAR_2->opt_gain * VAR_2->sc_gain >> 15);
}
