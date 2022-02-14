
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int Q68State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int *,int,int,int ) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static int FUNC_11(Q68State *VAR_10, uint32_t VAR_11)
{
    unsigned int VAR_12 = FUNC_2(VAR_10);
    int VAR_13 = (VAR_11 & 0x0040) ? VAR_7 : VAR_8;
    if (FUNC_0(VAR_11) <= VAR_1
     || FUNC_0(VAR_11) == VAR_4
    ) {
        return FUNC_10(VAR_10, VAR_11);
    }


    uint16_t VAR_14;
    if (FUNC_0(VAR_11) == VAR_3) {
        VAR_14 = VAR_2<<3 | FUNC_1(VAR_11);
    } else {
        VAR_14 = VAR_11;
    }
    int VAR_15 = FUNC_9(VAR_10, VAR_14, VAR_8, VAR_0);
    if (VAR_15 < 0) {
        return FUNC_10(VAR_10, VAR_11);
    }
    if (VAR_12 != 0) {

        FUNC_4(VAR_9, VAR_11,
                                  VAR_5 | VAR_6);

    }

    int VAR_16;
    for (VAR_16 = 0; VAR_16 < 16; VAR_16++, VAR_12 >>= 1) {
        if (VAR_12 & 1) {
            if (VAR_13 == VAR_8) {
                if (VAR_16 < 8) {
                    FUNC_7(VAR_9, VAR_16*4);
                } else {
                    FUNC_5(VAR_9, VAR_16*4);
                }
                VAR_15 += 4;
            } else {
                FUNC_6(VAR_9, VAR_16*4);
                VAR_15 += 8;
            }
        }
    }
    if (FUNC_0(VAR_11) == VAR_3) {
        FUNC_8(VAR_9, (8 + FUNC_1(VAR_11)) * 4);
    }

    FUNC_3(VAR_9, 8 + VAR_15);
    return 0;
}
