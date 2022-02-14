
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_20__ {int (* autocorrelate ) (int const**,TYPE_1__***) ;} ;
struct TYPE_19__ {int mant; int exp; } ;
typedef TYPE_1__ SoftFloat ;
typedef TYPE_2__ SBRDSPContext ;


 TYPE_1__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 TYPE_1__ FUNC_0 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_1 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_2 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_3 (TYPE_1__,TYPE_1__) ;
 int FUNC_4 (int const**,TYPE_1__***) ;

__attribute__((used)) static void FUNC_5(SBRDSPContext *VAR_2,
                                  int (*VAR_3)[2], int (*VAR_4)[2],
                                  const int VAR_5[32][40][2], int VAR_6)
{
    int VAR_7;
    int VAR_8, VAR_9;

    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
        SoftFloat VAR_10[3][2][2];
        SoftFloat VAR_11, VAR_12, VAR_13, VAR_14;
        SoftFloat VAR_15;

        VAR_2->autocorrelate(VAR_5[VAR_7], VAR_10);

        VAR_15 = FUNC_3(FUNC_2(VAR_10[2][1][0], VAR_10[1][0][0]),
             FUNC_2(FUNC_0(FUNC_2(VAR_10[1][1][0], VAR_10[1][1][0]),
             FUNC_2(VAR_10[1][1][1], VAR_10[1][1][1])), VAR_1));

        if (!VAR_15.mant) {
            VAR_13 = VAR_0;
            VAR_14 = VAR_0;
        } else {
            SoftFloat VAR_16, VAR_17;
            VAR_16 = FUNC_3(FUNC_3(FUNC_2(VAR_10[0][0][0], VAR_10[1][1][0]),
                                            FUNC_2(VAR_10[0][0][1], VAR_10[1][1][1])),
                                  FUNC_2(VAR_10[0][1][0], VAR_10[1][0][0]));
            VAR_17 = FUNC_3(FUNC_0(FUNC_2(VAR_10[0][0][0], VAR_10[1][1][1]),
                                            FUNC_2(VAR_10[0][0][1], VAR_10[1][1][0])),
                                  FUNC_2(VAR_10[0][1][1], VAR_10[1][0][0]));

            VAR_13 = FUNC_1(VAR_16, VAR_15);
            VAR_14 = FUNC_1(VAR_17, VAR_15);
        }

        if (!VAR_10[1][0][0].mant) {
            VAR_11 = VAR_0;
            VAR_12 = VAR_0;
        } else {
            SoftFloat VAR_18, VAR_19;
            VAR_18 = FUNC_0(VAR_10[0][0][0],
                                  FUNC_0(FUNC_2(VAR_13, VAR_10[1][1][0]),
                                            FUNC_2(VAR_14, VAR_10[1][1][1])));
            VAR_19 = FUNC_0(VAR_10[0][0][1],
                                  FUNC_3(FUNC_2(VAR_14, VAR_10[1][1][0]),
                                            FUNC_2(VAR_13, VAR_10[1][1][1])));

            VAR_18.mant = -VAR_18.mant;
            VAR_19.mant = -VAR_19.mant;
            VAR_11 = FUNC_1(VAR_18, VAR_10[1][0][0]);
            VAR_12 = FUNC_1(VAR_19, VAR_10[1][0][0]);
        }

        VAR_8 = VAR_11;
        if (VAR_8 >= 3)
            VAR_3[VAR_7][0] = 0x7fffffff;
        else if (VAR_8 <= -30)
            VAR_3[VAR_7][0] = 0;
        else {
            VAR_8 = 1-VAR_8;
            if (VAR_8 <= 0)
                VAR_3[VAR_7][0] = VAR_11 * (1<<-VAR_8);
            else {
                VAR_9 = 1 << (VAR_8-1);
                VAR_3[VAR_7][0] = (VAR_11 + VAR_9) >> VAR_8;
            }
        }

        VAR_8 = VAR_12;
        if (VAR_8 >= 3)
            VAR_3[VAR_7][1] = 0x7fffffff;
        else if (VAR_8 <= -30)
            VAR_3[VAR_7][1] = 0;
        else {
            VAR_8 = 1-VAR_8;
            if (VAR_8 <= 0)
                VAR_3[VAR_7][1] = VAR_12 * (1<<-VAR_8);
            else {
                VAR_9 = 1 << (VAR_8-1);
                VAR_3[VAR_7][1] = (VAR_12 + VAR_9) >> VAR_8;
            }
        }
        VAR_8 = VAR_13;
        if (VAR_8 >= 3)
            VAR_4[VAR_7][0] = 0x7fffffff;
        else if (VAR_8 <= -30)
            VAR_4[VAR_7][0] = 0;
        else {
            VAR_8 = 1-VAR_8;
            if (VAR_8 <= 0)
                VAR_4[VAR_7][0] = VAR_13 * (1<<-VAR_8);
            else {
                VAR_9 = 1 << (VAR_8-1);
                VAR_4[VAR_7][0] = (VAR_13 + VAR_9) >> VAR_8;
            }
        }

        VAR_8 = VAR_14;
        if (VAR_8 >= 3)
            VAR_4[VAR_7][1] = 0x7fffffff;
        else if (VAR_8 <= -30)
            VAR_4[VAR_7][1] = 0;
        else {
            VAR_8 = 1-VAR_8;
            if (VAR_8 <= 0)
                VAR_4[VAR_7][1] = VAR_14 * (1<<-VAR_8);
            else {
                VAR_9 = 1 << (VAR_8-1);
                VAR_4[VAR_7][1] = (VAR_14 + VAR_9) >> VAR_8;
            }
        }

        VAR_8 = (int)(((int64_t)(VAR_4[VAR_7][0]>>1) * (VAR_4[VAR_7][0]>>1) + (int64_t)(VAR_4[VAR_7][1]>>1) * (VAR_4[VAR_7][1]>>1) + 0x40000000) >> 31);


        if (VAR_8 >= 0x20000000){
            VAR_4[VAR_7][0] = 0;
            VAR_4[VAR_7][1] = 0;
            VAR_3[VAR_7][0] = 0;
            VAR_3[VAR_7][1] = 0;
        }

        VAR_8 = (int)(((int64_t)(VAR_3[VAR_7][0]>>1) * (VAR_3[VAR_7][0]>>1) + (int64_t)(VAR_3[VAR_7][1]>>1) * (VAR_3[VAR_7][1]>>1) + 0x40000000) >> 31);


        if (VAR_8 >= 0x20000000){
            VAR_4[VAR_7][0] = 0;
            VAR_4[VAR_7][1] = 0;
            VAR_3[VAR_7][0] = 0;
            VAR_3[VAR_7][1] = 0;
        }
    }
}
