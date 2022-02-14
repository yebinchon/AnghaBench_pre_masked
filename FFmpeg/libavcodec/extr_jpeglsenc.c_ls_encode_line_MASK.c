
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int near; int twonear; int range; size_t* run_index; int* C; int maxval; } ;
typedef int PutBitContext ;
typedef TYPE_1__ JLSState ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (void*,int,int) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int * VAR_0 ;
 int FUNC_5 (TYPE_1__*,int *,int,int) ;
 int FUNC_6 (TYPE_1__*,int *,int,int,int) ;
 int FUNC_7 (TYPE_1__*,int *,int,int,int ) ;
 int FUNC_8 (int,int,int) ;

__attribute__((used)) static inline void FUNC_9(JLSState *VAR_1, PutBitContext *VAR_2,
                                  void *VAR_3, void *VAR_4, int VAR_5, int VAR_6,
                                  int VAR_7, int VAR_8, int VAR_9)
{
    int VAR_10 = 0;
    int VAR_11, VAR_12, VAR_13, VAR_14;
    int VAR_15, VAR_16, VAR_17;

    while (VAR_10 < VAR_6) {
        int VAR_18, VAR_19, VAR_20;


        VAR_11 = VAR_10 ? FUNC_1(VAR_4, VAR_10 - VAR_7) : FUNC_1(VAR_3, VAR_10);
        VAR_12 = FUNC_1(VAR_3, VAR_10);
        VAR_13 = VAR_10 ? FUNC_1(VAR_3, VAR_10 - VAR_7) : VAR_5;
        VAR_14 = (VAR_10 >= VAR_6 - VAR_7) ? FUNC_1(VAR_3, VAR_10) : FUNC_1(VAR_3, VAR_10 + VAR_7);
        VAR_15 = VAR_14 - VAR_12;
        VAR_16 = VAR_12 - VAR_13;
        VAR_17 = VAR_13 - VAR_11;


        if ((FUNC_0(VAR_15) <= VAR_1->near) &&
            (FUNC_0(VAR_16) <= VAR_1->near) &&
            (FUNC_0(VAR_17) <= VAR_1->near)) {
            int VAR_21, VAR_22, VAR_23;

            VAR_23 = 0;
            VAR_21 = VAR_11;
            while (VAR_10 < VAR_6 && (FUNC_0(FUNC_1(VAR_4, VAR_10) - VAR_21) <= VAR_1->near)) {
                VAR_23++;
                FUNC_2(VAR_4, VAR_10, VAR_11);
                VAR_10 += VAR_7;
            }
            FUNC_6(VAR_1, VAR_2, VAR_23, VAR_8, VAR_10 < VAR_6);
            if (VAR_10 >= VAR_6)
                return;
            VAR_12 = FUNC_1(VAR_3, VAR_10);
            VAR_22 = FUNC_0(VAR_11 - VAR_12) <= VAR_1->near;
            VAR_19 = VAR_22 ? VAR_11 : VAR_12;
            VAR_18 = FUNC_1(VAR_4, VAR_10) - VAR_19;

            if (!VAR_22 && VAR_11 > VAR_12)
                VAR_18 = -VAR_18;

            if (VAR_1->near) {
                if (VAR_18 > 0)
                    VAR_18 = (VAR_1->near + VAR_18) / VAR_1->twonear;
                else
                    VAR_18 = -(VAR_1->near - VAR_18) / VAR_1->twonear;

                if (VAR_22 || (VAR_12 >= VAR_11))
                    VAR_11 = FUNC_3(VAR_19 + VAR_18 * VAR_1->twonear, 0, VAR_1->maxval);
                else
                    VAR_11 = FUNC_3(VAR_19 - VAR_18 * VAR_1->twonear, 0, VAR_1->maxval);
                FUNC_2(VAR_4, VAR_10, VAR_11);
            }
            if (VAR_18 < 0)
                VAR_18 += VAR_1->range;
            if (VAR_18 >= (VAR_1->range + 1) >> 1)
                VAR_18 -= VAR_1->range;

            FUNC_7(VAR_1, VAR_2, VAR_22, VAR_18,
                              VAR_0[VAR_1->run_index[VAR_8]]);

            if (VAR_1->run_index[VAR_8] > 0)
                VAR_1->run_index[VAR_8]--;
        } else {
            int VAR_24;

            VAR_24 = FUNC_4(VAR_1, VAR_15) * 81 +
                      FUNC_4(VAR_1, VAR_16) * 9 +
                      FUNC_4(VAR_1, VAR_17);
            VAR_19 = FUNC_8(VAR_11, VAR_11 + VAR_12 - VAR_13, VAR_12);

            if (VAR_24 < 0) {
                VAR_24 = -VAR_24;
                VAR_20 = 1;
                VAR_19 = FUNC_3(VAR_19 - VAR_1->C[VAR_24], 0, VAR_1->maxval);
                VAR_18 = VAR_19 - FUNC_1(VAR_4, VAR_10);
            } else {
                VAR_20 = 0;
                VAR_19 = FUNC_3(VAR_19 + VAR_1->C[VAR_24], 0, VAR_1->maxval);
                VAR_18 = FUNC_1(VAR_4, VAR_10) - VAR_19;
            }

            if (VAR_1->near) {
                if (VAR_18 > 0)
                    VAR_18 = (VAR_1->near + VAR_18) / VAR_1->twonear;
                else
                    VAR_18 = -(VAR_1->near - VAR_18) / VAR_1->twonear;
                if (!VAR_20)
                    VAR_11 = FUNC_3(VAR_19 + VAR_18 * VAR_1->twonear, 0, VAR_1->maxval);
                else
                    VAR_11 = FUNC_3(VAR_19 - VAR_18 * VAR_1->twonear, 0, VAR_1->maxval);
                FUNC_2(VAR_4, VAR_10, VAR_11);
            }

            FUNC_5(VAR_1, VAR_2, VAR_24, VAR_18);
        }
        VAR_10 += VAR_7;
    }
}
