
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int PutByteContext ;
typedef int GetByteContext ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(GetByteContext *VAR_2, PutByteContext *VAR_3, GetByteContext *VAR_4,
                          int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
    int VAR_10 = 1, VAR_11 = 0;

    FUNC_6(VAR_3, (VAR_6 - 1) * VAR_8, VAR_1);

    while (FUNC_1(VAR_2) > 0) {
        uint32_t VAR_12 = FUNC_2(VAR_2);
        unsigned VAR_13 = FUNC_0(VAR_2);

        if (VAR_13 == 0) {
            VAR_13 = FUNC_3(VAR_2);
            for (int VAR_14 = 0; VAR_14 < VAR_13; VAR_14++, VAR_11++) {
                if (VAR_11 == VAR_5) {
                    VAR_11 = 0;
                    FUNC_6(VAR_3, -(VAR_8 + VAR_7), VAR_0);
                }
                FUNC_4(VAR_3, VAR_12);
            }
        } else if (VAR_13 == 255) {
            int VAR_15 = FUNC_7(VAR_3);

            FUNC_5(VAR_4, VAR_15, VAR_1);
            for (int VAR_16 = 0; VAR_16 < VAR_12; VAR_16++, VAR_11++) {
                if (VAR_11 == VAR_5) {
                    VAR_11 = 0;
                    FUNC_6(VAR_3, -(VAR_8 + VAR_7), VAR_0);
                    FUNC_5(VAR_4, -(VAR_9 + VAR_7), VAR_0);
                }
                FUNC_4(VAR_3, FUNC_2(VAR_4));
            }

            VAR_10 = 0;
        } else {
            for (int VAR_17 = 0; VAR_17 < VAR_13; VAR_17++, VAR_11++) {
                if (VAR_11 == VAR_5) {
                    VAR_11 = 0;
                    FUNC_6(VAR_3, -(VAR_8 + VAR_7), VAR_0);
                }
                FUNC_4(VAR_3, VAR_12);
            }
        }
    }

    return VAR_10;
}
