
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {int v1_size; int v4_size; scalar_t__ mode; } ;
typedef TYPE_1__ strip_info ;
typedef scalar_t__ int64_t ;
struct TYPE_14__ {int max_extra_cb_iterations; scalar_t__ strip_buf; } ;
typedef scalar_t__ CinepakMode ;
typedef TYPE_2__ CinepakEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int,TYPE_1__*,int,int*,int*) ;
 int FUNC_1 (TYPE_2__*,int,int **,int*,int **,int*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int,int **,int*,int **,int*,TYPE_1__*,scalar_t__) ;
 int FUNC_3 (unsigned char*,scalar_t__,int) ;
 void* FUNC_4 (TYPE_2__*,int,int **,int*,int,TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_2__*,int,int,int,scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(CinepakEncContext *VAR_10, int VAR_11, int VAR_12, int VAR_13,
                    uint8_t *VAR_14[4], int VAR_15[4],
                    uint8_t *VAR_16[4], int VAR_17[4],
                    uint8_t *VAR_18[4], int VAR_19[4],
                    unsigned char *VAR_20, int64_t *VAR_21)
{
    int64_t VAR_22 = 0;
    int VAR_23 = 0;
    strip_info VAR_24;

    int VAR_25, VAR_26, VAR_27, VAR_28;
    int VAR_29, VAR_30;
    int VAR_31, VAR_32;

    if (!VAR_13)
        FUNC_1(VAR_10, VAR_12, VAR_14, VAR_15, VAR_16, VAR_17,
                              &VAR_24);






    for (VAR_25 = 0, VAR_26 = 1; VAR_26 <= VAR_0 && !VAR_25; VAR_26 <<= 2) {
        for (VAR_27 = 0, VAR_28 = 0; VAR_28 <= VAR_26 && !VAR_27; VAR_28 = VAR_28 ? VAR_28 << 2 : VAR_26 >= 1 << 2 ? VAR_26 >> 2 : 1) {
            CinepakMode VAR_33;

            for (VAR_33 = 0; VAR_33 < VAR_4; VAR_33++) {

                if (VAR_13 && VAR_33 == VAR_5)
                    continue;

                if (VAR_33 == VAR_6) {
                    VAR_24.v1_size = VAR_26;

                    VAR_24.v1_size = FUNC_4(VAR_10, VAR_12, VAR_16, VAR_17, 1,
                                            &VAR_24, VAR_1);
                    if (VAR_24.v1_size < VAR_26)

                        VAR_25 = 1;

                    VAR_24.v4_size = 0;
                } else {

                    if (!VAR_28)
                        continue;

                    if (VAR_33 == VAR_7) {
                        VAR_24.v4_size = VAR_28;
                        VAR_24.v4_size = FUNC_4(VAR_10, VAR_12, VAR_16, VAR_17, 0,
                                                &VAR_24, VAR_1);
                        if (VAR_24.v4_size < VAR_28)

                            VAR_27 = 1;
                    }
                }

                VAR_24.mode = VAR_33;

                VAR_22 = FUNC_0(VAR_10, VAR_12, &VAR_24, 0,
                                             &VAR_31, &VAR_32);

                if (VAR_33 != VAR_6) {
                    int VAR_34 = VAR_10->max_extra_cb_iterations;


                    VAR_24.v1_size = VAR_26;
                    VAR_29 = FUNC_4(VAR_10, VAR_12, VAR_16, VAR_17, 1, &VAR_24, VAR_2);
                    if (VAR_29 < VAR_24.v1_size)
                        VAR_24.v1_size = VAR_29;

                    VAR_24.v4_size = VAR_28;
                    VAR_30 = FUNC_4(VAR_10, VAR_12, VAR_16, VAR_17, 0, &VAR_24, VAR_3);
                    if (VAR_30 < VAR_24.v4_size)
                        VAR_24.v4_size = VAR_30;




                    for (;;) {
                        VAR_22 = FUNC_0(VAR_10, VAR_12, &VAR_24, 1,
                                                     &VAR_31, &VAR_32);

                        if ((!VAR_31 && !VAR_32) || !VAR_34--)
                            break;

                        if (VAR_31) {
                            VAR_24.v1_size = VAR_26;
                            VAR_29 = FUNC_4(VAR_10, VAR_12, VAR_16, VAR_17, 1, &VAR_24, VAR_2);
                            if (VAR_29 < VAR_24.v1_size)
                                VAR_24.v1_size = VAR_29;
                        }
                        if (VAR_32) {
                            VAR_24.v4_size = VAR_28;
                            VAR_30 = FUNC_4(VAR_10, VAR_12, VAR_16, VAR_17, 0, &VAR_24, VAR_3);
                            if (VAR_30 < VAR_24.v4_size)
                                VAR_24.v4_size = VAR_30;
                        }
                    }
                }

                if (VAR_23 == 0 || VAR_22 < *VAR_21) {
                    *VAR_21 = VAR_22;
                    VAR_23 = FUNC_2(VAR_10, VAR_12,
                                            VAR_18, VAR_19,
                                            VAR_14, VAR_15, &VAR_24,
                                            VAR_10->strip_buf + VAR_9);

                    FUNC_5(VAR_10, VAR_11, VAR_12, VAR_13, VAR_10->strip_buf, VAR_23);
                }
            }
        }
    }

    VAR_23 += VAR_9;
    FUNC_3(VAR_20, VAR_10->strip_buf, VAR_23);

    return VAR_23;
}
