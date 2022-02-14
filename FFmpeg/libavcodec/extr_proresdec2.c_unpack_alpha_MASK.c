
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int GetBitContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int const) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void inline FUNC_7(GetBitContext *VAR_0, uint16_t *VAR_1, int VAR_2,
                                const int VAR_3, const int VAR_4) {
    const int VAR_5 = (1 << VAR_3) - 1;
    int VAR_6, VAR_7, VAR_8, VAR_9;

    VAR_7 = 0;
    VAR_9 = VAR_5;
    do {
        do {
            if (FUNC_5(VAR_0)) {
                VAR_8 = FUNC_4(VAR_0, VAR_3);
            } else {
                int VAR_10;
                VAR_8 = FUNC_4(VAR_0, VAR_3 == 16 ? 7 : 4);
                VAR_10 = VAR_8 & 1;
                VAR_8 = (VAR_8 + 2) >> 1;
                if (VAR_10)
                    VAR_8 = -VAR_8;
            }
            VAR_9 = (VAR_9 + VAR_8) & VAR_5;
            if (VAR_3 == 16) {
                if (VAR_4 == 10) {
                    VAR_1[VAR_7++] = FUNC_0(VAR_9);
                } else {
                    VAR_1[VAR_7++] = FUNC_1(VAR_9);
                }
            } else {
                if (VAR_4 == 10) {
                    VAR_1[VAR_7++] = FUNC_2(VAR_9);
                } else {
                    VAR_1[VAR_7++] = FUNC_3(VAR_9);
                }
            }
            if (VAR_7 >= VAR_2)
                break;
        } while (FUNC_6(VAR_0)>0 && FUNC_5(VAR_0));
        VAR_8 = FUNC_4(VAR_0, 4);
        if (!VAR_8)
            VAR_8 = FUNC_4(VAR_0, 11);
        if (VAR_7 + VAR_8 > VAR_2)
            VAR_8 = VAR_2 - VAR_7;
        if (VAR_3 == 16) {
            for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
                if (VAR_4 == 10) {
                    VAR_1[VAR_7++] = FUNC_0(VAR_9);
                } else {
                    VAR_1[VAR_7++] = FUNC_1(VAR_9);
                }
            }
        } else {
            for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
                if (VAR_4 == 10) {
                    VAR_1[VAR_7++] = FUNC_2(VAR_9);
                } else {
                    VAR_1[VAR_7++] = FUNC_3(VAR_9);
                }
            }
        }
    } while (VAR_7 < VAR_2);
}
