
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* ref_count; } ;
typedef TYPE_1__ PPS ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*,int ,char*,int,unsigned int,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(int *VAR_6, int VAR_7[2],
                            GetBitContext *VAR_8, const PPS *VAR_9,
                            int VAR_10, int VAR_11, void *VAR_12)
{
    int VAR_13;
    int VAR_14;


    VAR_7[0] = VAR_9->ref_count[0];
    VAR_7[1] = VAR_9->ref_count[1];

    if (VAR_10 != VAR_4) {
        unsigned VAR_15[2];
        VAR_15[0] = VAR_15[1] = VAR_11 == VAR_5 ? 15 : 31;

        VAR_14 = FUNC_1(VAR_8);

        if (VAR_14) {
            VAR_7[0] = FUNC_2(VAR_8) + 1;
            if (VAR_10 == VAR_3) {
                VAR_7[1] = FUNC_2(VAR_8) + 1;
            } else

                VAR_7[1] = 1;
        }

        if (VAR_10 == VAR_3)
            VAR_13 = 2;
        else
            VAR_13 = 1;

        if (VAR_7[0] - 1 > VAR_15[0] || (VAR_13 == 2 && (VAR_7[1] - 1 > VAR_15[1]))) {
            FUNC_0(VAR_12, VAR_2, "reference overflow %u > %u or %u > %u\n",
                   VAR_7[0] - 1, VAR_15[0], VAR_7[1] - 1, VAR_15[1]);
            VAR_7[0] = VAR_7[1] = 0;
            *VAR_6 = 0;
            goto fail;
        } else if (VAR_7[1] - 1 > VAR_15[1]) {
            FUNC_0(VAR_12, VAR_1, "reference overflow %u > %u \n",
                   VAR_7[1] - 1, VAR_15[1]);
            VAR_7[1] = 0;
        }

    } else {
        VAR_13 = 0;
        VAR_7[0] = VAR_7[1] = 0;
    }

    *VAR_6 = VAR_13;

    return 0;
fail:
    *VAR_6 = 0;
    VAR_7[0] = 0;
    VAR_7[1] = 0;
    return VAR_0;
}
