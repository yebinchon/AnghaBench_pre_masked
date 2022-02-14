
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int Q68State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (int *,int,int,int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;

__attribute__((used)) static int FUNC_13(Q68State *VAR_11, uint32_t VAR_12)
{

    if (FUNC_0(VAR_12) == VAR_2) {
        return FUNC_11(VAR_11, VAR_12);
    }

    unsigned int VAR_13 = FUNC_2(VAR_11);
    int VAR_14 = (VAR_12 & 0x0040) ? VAR_8 : VAR_9;
    if (FUNC_0(VAR_12) <= VAR_1
     || FUNC_0(VAR_12) == VAR_4
    ) {
        return FUNC_12(VAR_11, VAR_12);
    }


    uint16_t VAR_15;
    if (FUNC_0(VAR_12) == VAR_5) {
        VAR_15 = VAR_3<<3 | FUNC_1(VAR_12);
    } else {
        VAR_15 = VAR_12;
    }
    int VAR_16 = FUNC_10(VAR_11, VAR_15, VAR_9, VAR_0);
    if (VAR_16 < 0) {
        return FUNC_12(VAR_11, VAR_12);
    }
    if (VAR_13 != 0) {

        FUNC_4(VAR_10, VAR_12,
                                  VAR_6 | VAR_7);

    }

    if (FUNC_0(VAR_12) == VAR_5) {

        int VAR_17;
        for (VAR_17 = 15; VAR_17 >= 0; VAR_17--, VAR_13 >>= 1) {
            if (VAR_13 & 1) {
                if (VAR_14 == VAR_9) {
                    FUNC_7(VAR_10, VAR_17*4);
                    VAR_16 += 4;
                } else {
                    FUNC_6(VAR_10, VAR_17*4);
                    VAR_16 += 8;
                }
            }
        }
        FUNC_5(VAR_10, (8 + FUNC_1(VAR_12)) * 4);
    } else {
        int VAR_18;
        for (VAR_18 = 0; VAR_18 < 16; VAR_18++, VAR_13 >>= 1) {
            if (VAR_13 & 1) {
                if (VAR_14 == VAR_9) {
                    FUNC_9(VAR_10, VAR_18*4);
                    VAR_16 += 4;
                } else {
                    FUNC_8(VAR_10, VAR_18*4);
                    VAR_16 += 8;
                }
            }
        }
    }

    FUNC_3(VAR_10, 4 + VAR_16);
    return 0;
}
