
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int Q68State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_13 (int *,int) ;
 int VAR_8 ;
 int FUNC_14 (int *,int const,scalar_t__,int,int*,int) ;
 int FUNC_15 (int *,int const,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static int FUNC_16(Q68State *VAR_12, uint32_t VAR_13)
{
    VAR_2;
    VAR_4;
    VAR_3;
    const int VAR_14 = VAR_13 & 0x4000;
    const int VAR_15 = VAR_13 & 0x0008;

    const uint16_t VAR_16 =
        (VAR_15 ? VAR_1 : VAR_0) << 3 | VAR_10;
    const uint16_t VAR_17 =
        (VAR_15 ? VAR_1 : VAR_0) << 3 | VAR_9;
    int VAR_18;
    FUNC_14(VAR_12, VAR_16, VAR_11, 0, &VAR_18, 1);
    FUNC_14(VAR_12, VAR_17, VAR_11, 1, &VAR_18, 2);

    const int VAR_19 = FUNC_13(VAR_12, VAR_13);
    if (VAR_14) {
        if (VAR_11 == VAR_5) {
            FUNC_0(VAR_8);
            if (VAR_19) FUNC_4(VAR_8);
        } else if (VAR_11 == VAR_7) {
            FUNC_2(VAR_8);
            if (VAR_19) FUNC_6(VAR_8);
        } else {
            FUNC_1(VAR_8);
            if (VAR_19) FUNC_5(VAR_8);
        }
    } else {
        if (VAR_11 == VAR_5) {
            FUNC_10(VAR_8);
            if (VAR_19) FUNC_7(VAR_8);
        } else if (VAR_11 == VAR_7) {
            FUNC_12(VAR_8);
            if (VAR_19) FUNC_9(VAR_8);
        } else {
            FUNC_11(VAR_8);
            if (VAR_19) FUNC_8(VAR_8);
        }
    }

    FUNC_15(VAR_12, VAR_17, VAR_11);
    FUNC_3(VAR_8, (VAR_15 ? (VAR_11==VAR_6 ? 30 : 18)
                                                  : (VAR_11==VAR_6 ? 8 : 4)));
    return 0;
}
