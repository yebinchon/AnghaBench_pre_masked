
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int near; size_t* run_index; int* C; int maxval; int range; int twonear; } ;
struct TYPE_8__ {int gb; } ;
typedef TYPE_1__ MJpegDecodeContext ;
typedef TYPE_2__ JLSState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (void*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ,int) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int* VAR_2 ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,TYPE_2__*,int) ;
 int FUNC_11 (int *,TYPE_2__*,int,int) ;
 int FUNC_12 (int,int,int) ;

__attribute__((used)) static inline int FUNC_13(JLSState *VAR_3, MJpegDecodeContext *VAR_4,
                                  void *VAR_5, void *VAR_6, int VAR_7, int VAR_8,
                                  int VAR_9, int VAR_10, int VAR_11)
{
    int VAR_12, VAR_13 = 0;
    int VAR_14, VAR_15, VAR_16, VAR_17;
    int VAR_18, VAR_19, VAR_20;

    while (VAR_13 < VAR_8) {
        int VAR_21, VAR_22;

        if (FUNC_8(&VAR_4->gb) <= 0)
            return VAR_0;


        VAR_14 = VAR_13 ? FUNC_1(VAR_6, VAR_13 - VAR_9) : FUNC_1(VAR_5, VAR_13);
        VAR_15 = FUNC_1(VAR_5, VAR_13);
        VAR_16 = VAR_13 ? FUNC_1(VAR_5, VAR_13 - VAR_9) : VAR_7;
        VAR_17 = (VAR_13 >= VAR_8 - VAR_9) ? FUNC_1(VAR_5, VAR_13) : FUNC_1(VAR_5, VAR_13 + VAR_9);
        VAR_18 = VAR_17 - VAR_15;
        VAR_19 = VAR_15 - VAR_16;
        VAR_20 = VAR_16 - VAR_14;

        if ((FUNC_0(VAR_18) <= VAR_3->near) &&
            (FUNC_0(VAR_19) <= VAR_3->near) &&
            (FUNC_0(VAR_20) <= VAR_3->near)) {
            int VAR_23;
            int VAR_24;


            while (FUNC_7(&VAR_4->gb)) {
                int VAR_25;
                VAR_25 = 1 << VAR_2[VAR_3->run_index[VAR_10]];
                if (VAR_13 + VAR_25 * VAR_9 > VAR_8)
                    VAR_25 = (VAR_8 - VAR_13) / VAR_9;
                for (VAR_12 = 0; VAR_12 < VAR_25; VAR_12++) {
                    FUNC_2(VAR_6, VAR_13, VAR_14);
                    VAR_13 += VAR_9;
                }

                if (VAR_25 != 1 << VAR_2[VAR_3->run_index[VAR_10]])
                    return 0;
                if (VAR_3->run_index[VAR_10] < 31)
                    VAR_3->run_index[VAR_10]++;
                if (VAR_13 + VAR_9 > VAR_8)
                    return 0;
            }

            VAR_23 = VAR_2[VAR_3->run_index[VAR_10]];
            if (VAR_23)
                VAR_23 = FUNC_9(&VAR_4->gb, VAR_23);
            if (VAR_13 + VAR_23 * VAR_9 > VAR_8) {
                VAR_23 = (VAR_8 - VAR_13) / VAR_9;
            }
            for (VAR_12 = 0; VAR_12 < VAR_23; VAR_12++) {
                FUNC_2(VAR_6, VAR_13, VAR_14);
                VAR_13 += VAR_9;
            }

            if (VAR_13 >= VAR_8) {
                FUNC_5(((void*)0), VAR_1, "run overflow\n");
                FUNC_3(VAR_13 <= VAR_8);
                return VAR_0;
            }


            VAR_15 = FUNC_1(VAR_5, VAR_13);
            VAR_24 = (FUNC_0(VAR_14 - VAR_15) <= VAR_3->near) ? 1 : 0;
            VAR_21 = FUNC_11(&VAR_4->gb, VAR_3, VAR_24,
                                         VAR_2[VAR_3->run_index[VAR_10]]);
            if (VAR_3->run_index[VAR_10])
                VAR_3->run_index[VAR_10]--;

            if (VAR_3->near && VAR_24) {
                VAR_22 = VAR_14 + VAR_21;
            } else {
                if (VAR_15 < VAR_14)
                    VAR_22 = VAR_15 - VAR_21;
                else
                    VAR_22 = VAR_15 + VAR_21;
            }
        } else {
            int VAR_26, VAR_27;

            VAR_26 = FUNC_6(VAR_3, VAR_18) * 81 +
                      FUNC_6(VAR_3, VAR_19) * 9 +
                      FUNC_6(VAR_3, VAR_20);
            VAR_22 = FUNC_12(VAR_14, VAR_14 + VAR_15 - VAR_16, VAR_15);

            if (VAR_26 < 0) {
                VAR_26 = -VAR_26;
                VAR_27 = 1;
            } else {
                VAR_27 = 0;
            }

            if (VAR_27) {
                VAR_22 = FUNC_4(VAR_22 - VAR_3->C[VAR_26], 0, VAR_3->maxval);
                VAR_21 = -FUNC_10(&VAR_4->gb, VAR_3, VAR_26);
            } else {
                VAR_22 = FUNC_4(VAR_22 + VAR_3->C[VAR_26], 0, VAR_3->maxval);
                VAR_21 = FUNC_10(&VAR_4->gb, VAR_3, VAR_26);
            }


            VAR_22 += VAR_21;
        }
        if (VAR_3->near) {
            if (VAR_22 < -VAR_3->near)
                VAR_22 += VAR_3->range * VAR_3->twonear;
            else if (VAR_22 > VAR_3->maxval + VAR_3->near)
                VAR_22 -= VAR_3->range * VAR_3->twonear;
            VAR_22 = FUNC_4(VAR_22, 0, VAR_3->maxval);
        }

        VAR_22 &= VAR_3->maxval;
        FUNC_2(VAR_6, VAR_13, VAR_22);
        VAR_13 += VAR_9;
    }

    return 0;
}
