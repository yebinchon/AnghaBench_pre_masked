
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ size_in_bits; } ;
typedef int SUINT ;
typedef TYPE_1__ GetBitContext ;


 int FUNC_0 (int ,TYPE_1__*) ;
 unsigned int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*,int) ;
 int VAR_0 ;
 int FUNC_3 (int ,TYPE_1__*) ;
 unsigned int FUNC_4 (int ,TYPE_1__*,int) ;
 int FUNC_5 (int ,TYPE_1__*,int) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (unsigned int) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 unsigned int FUNC_11 (TYPE_1__*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (TYPE_1__*,int) ;

__attribute__((used)) static inline int FUNC_14(GetBitContext *VAR_3, int VAR_4, int VAR_5,
                                       int VAR_6)
{
    unsigned int VAR_7;
    int VAR_8;
    FUNC_3(VAR_1, VAR_3);
    FUNC_6(VAR_1, VAR_3);
    VAR_7 = FUNC_1(VAR_1, VAR_3);

    VAR_8 = FUNC_8(VAR_7);

    FUNC_7(VAR_4 <= 31);

    if (VAR_8 - VAR_4 >= 32 - VAR_0 + (VAR_0 == 32) &&
        32 - VAR_8 < VAR_5) {
        VAR_7 >>= VAR_8 - VAR_4;
        VAR_7 += (30U - VAR_8) << VAR_4;
        FUNC_2(VAR_1, VAR_3, 32 + VAR_4 - VAR_8);
        FUNC_0(VAR_1, VAR_3);

        return VAR_7;
    } else {
        int VAR_9;
        for (VAR_9 = 0; VAR_9 + VAR_0 <= VAR_5 && FUNC_4(VAR_1, VAR_3, VAR_0) == 0; VAR_9 += VAR_0) {
            if (VAR_3->size_in_bits <= VAR_2) {
                FUNC_0(VAR_1, VAR_3);
                return -1;
            }
            FUNC_2(VAR_1, VAR_3, VAR_0);
            FUNC_6(VAR_1, VAR_3);
        }
        for (; VAR_9 < VAR_5 && FUNC_4(VAR_1, VAR_3, 1) == 0; VAR_9++) {
            FUNC_5(VAR_1, VAR_3, 1);
        }
        FUNC_2(VAR_1, VAR_3, 1);
        FUNC_6(VAR_1, VAR_3);

        if (VAR_9 < VAR_5 - 1) {
            if (VAR_4) {
                if (VAR_4 > VAR_0 - 1) {
                    VAR_7 = FUNC_4(VAR_1, VAR_3, 16) << (VAR_4-16);
                    FUNC_2(VAR_1, VAR_3, 16);
                    FUNC_6(VAR_1, VAR_3);
                    VAR_7 |= FUNC_4(VAR_1, VAR_3, VAR_4-16);
                    FUNC_2(VAR_1, VAR_3, VAR_4-16);
                } else {
                    VAR_7 = FUNC_4(VAR_1, VAR_3, VAR_4);
                    FUNC_2(VAR_1, VAR_3, VAR_4);
                }
            } else {
                VAR_7 = 0;
            }

            VAR_7 += ((SUINT)VAR_9 << VAR_4);
        } else if (VAR_9 == VAR_5 - 1) {
            VAR_7 = FUNC_4(VAR_1, VAR_3, VAR_6);
            FUNC_2(VAR_1, VAR_3, VAR_6);

            VAR_7 ++;
        } else {
            VAR_7 = -1;
        }
        FUNC_0(VAR_1, VAR_3);
        return VAR_7;
    }

}
