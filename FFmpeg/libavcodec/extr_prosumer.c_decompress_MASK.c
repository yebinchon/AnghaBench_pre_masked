
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int PutByteContext ;
typedef int GetByteContext ;


 int VAR_0 ;
 int FUNC_0 (int*,int ) ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(GetByteContext *VAR_2, int VAR_3, PutByteContext *VAR_4, const uint32_t *VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9;
    uint32_t VAR_10, VAR_11, VAR_12;

    FUNC_10(VAR_2, 32);
    VAR_8 = 4;
    VAR_10 = FUNC_5(VAR_2);
    VAR_7 = VAR_10 >> 20;
    VAR_11 = VAR_5[2 * VAR_7];

    while (1) {
        if (FUNC_3(VAR_4) <= 0 || FUNC_4(VAR_4))
            return 0;
        if ((VAR_11 & 0xFF00u) != 0x8000u || (VAR_11 & 0xFFu)) {
            if ((VAR_11 & 0xFF00u) != 0x8000u) {
                FUNC_7(VAR_4, VAR_11);
            } else {
                VAR_7 = 0;
                for (int VAR_13 = 0; VAR_13 < (VAR_11 & 0xFFu); VAR_13++)
                    FUNC_8(VAR_4, 0);
            }
            VAR_12 = VAR_11 >> 16;
            if (VAR_12 & 0xFF00u) {
                VAR_9 = VAR_5[2 * VAR_7 + 1];
                if ((VAR_12 & 0xF000u) == 0x1000) {
                    FUNC_7(VAR_4, VAR_9);
                } else {
                    FUNC_8(VAR_4, VAR_9);
                }
                VAR_12 = (VAR_12 >> 8) & 0x0Fu;
            }
            while (VAR_12) {
                VAR_10 <<= 4;
                VAR_8--;
                if (!VAR_8) {
                    if (FUNC_2(VAR_2) <= 0) {
                        if (!VAR_10)
                            return 0;
                    } else {
                        VAR_6 = FUNC_11(VAR_2);
                        FUNC_9(VAR_2, VAR_6 ^ 2, VAR_1);
                        FUNC_0(&VAR_10, FUNC_6(VAR_2));
                        FUNC_9(VAR_2, VAR_6 + 2, VAR_1);
                    }
                    VAR_8 = 4;
                }
                VAR_12--;
            }
            VAR_7 = VAR_10 >> 20;
            VAR_11 = VAR_5[2 * VAR_7];
            if (!VAR_11)
                return VAR_0;
            continue;
        }
        VAR_7 = 2;
        while (VAR_7) {
            VAR_10 <<= 4;
            VAR_8--;
            if (VAR_8) {
                VAR_7--;
                continue;
            }
            if (FUNC_2(VAR_2) <= 0) {
                if (VAR_10) {
                    VAR_8 = 4;
                    VAR_7--;
                    continue;
                }
                return 0;
            }
            VAR_6 = FUNC_11(VAR_2);
            FUNC_9(VAR_2, VAR_6 ^ 2, VAR_1);
            FUNC_0(&VAR_10, FUNC_6(VAR_2));
            FUNC_9(VAR_2, VAR_6 + 2, VAR_1);
            VAR_8 = 4;
            VAR_7--;
        }
        VAR_11 = FUNC_1(4, VAR_10) >> 16;
    }

    return 0;
}
