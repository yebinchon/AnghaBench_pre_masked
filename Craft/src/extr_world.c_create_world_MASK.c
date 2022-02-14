
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* world_func ) (int,int,int,int,void*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 double FUNC_0 (int,int,int,double,int) ;
 double FUNC_1 (int,int,int,int,double,int) ;

void FUNC_2(int VAR_4, int VAR_5, world_func VAR_6, void *VAR_7) {
    int VAR_8 = 1;
    for (int VAR_9 = -VAR_8; VAR_9 < VAR_0 + VAR_8; VAR_9++) {
        for (int VAR_10 = -VAR_8; VAR_10 < VAR_0 + VAR_8; VAR_10++) {
            int VAR_11 = 1;
            if (VAR_9 < 0 || VAR_10 < 0 || VAR_9 >= VAR_0 || VAR_10 >= VAR_0) {
                VAR_11 = -1;
            }
            int VAR_12 = VAR_4 * VAR_0 + VAR_9;
            int VAR_13 = VAR_5 * VAR_0 + VAR_10;
            float VAR_14 = FUNC_0(VAR_12 * 0.01, VAR_13 * 0.01, 4, 0.5, 2);
            float VAR_15 = FUNC_0(-VAR_12 * 0.01, -VAR_13 * 0.01, 2, 0.9, 2);
            int VAR_16 = VAR_15 * 32 + 16;
            int VAR_17 = VAR_14 * VAR_16;
            int VAR_18 = 1;
            int VAR_19 = 12;
            if (VAR_17 <= VAR_19) {
                VAR_17 = VAR_19;
                VAR_18 = 2;
            }

            for (int VAR_20 = 0; VAR_20 < VAR_17; VAR_20++) {
                VAR_6(VAR_12, VAR_20, VAR_13, VAR_18 * VAR_11, VAR_7);
            }
            if (VAR_18 == 1) {
                if (VAR_2) {

                    if (FUNC_0(-VAR_12 * 0.1, VAR_13 * 0.1, 4, 0.8, 2) > 0.6) {
                        VAR_6(VAR_12, VAR_17, VAR_13, 17 * VAR_11, VAR_7);
                    }

                    if (FUNC_0(VAR_12 * 0.05, -VAR_13 * 0.05, 4, 0.8, 2) > 0.7) {
                        int VAR_21 = 18 + FUNC_0(VAR_12 * 0.1, VAR_13 * 0.1, 4, 0.8, 2) * 7;
                        VAR_6(VAR_12, VAR_17, VAR_13, VAR_21 * VAR_11, VAR_7);
                    }
                }

                int VAR_22 = VAR_3;
                if (VAR_9 - 4 < 0 || VAR_10 - 4 < 0 ||
                    VAR_9 + 4 >= VAR_0 || VAR_10 + 4 >= VAR_0)
                {
                    VAR_22 = 0;
                }
                if (VAR_22 && FUNC_0(VAR_12, VAR_13, 6, 0.5, 2) > 0.84) {
                    for (int VAR_23 = VAR_17 + 3; VAR_23 < VAR_17 + 8; VAR_23++) {
                        for (int VAR_24 = -3; VAR_24 <= 3; VAR_24++) {
                            for (int VAR_25 = -3; VAR_25 <= 3; VAR_25++) {
                                int VAR_26 = (VAR_24 * VAR_24) + (VAR_25 * VAR_25) +
                                    (VAR_23 - (VAR_17 + 4)) * (VAR_23 - (VAR_17 + 4));
                                if (VAR_26 < 11) {
                                    VAR_6(VAR_12 + VAR_24, VAR_23, VAR_13 + VAR_25, 15, VAR_7);
                                }
                            }
                        }
                    }
                    for (int VAR_27 = VAR_17; VAR_27 < VAR_17 + 7; VAR_27++) {
                        VAR_6(VAR_12, VAR_27, VAR_13, 5, VAR_7);
                    }
                }
            }

            if (VAR_1) {
                for (int VAR_28 = 64; VAR_28 < 72; VAR_28++) {
                    if (FUNC_1(
                        VAR_12 * 0.01, VAR_28 * 0.1, VAR_13 * 0.01, 8, 0.5, 2) > 0.75)
                    {
                        VAR_6(VAR_12, VAR_28, VAR_13, 16 * VAR_11, VAR_7);
                    }
                }
            }
        }
    }
}
