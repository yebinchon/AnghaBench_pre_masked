
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int Q68State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int FUNC_9 (int *,int) ;
 int VAR_5 ;
 int FUNC_10 (int *,int,int const,int ,int*,int) ;
 int FUNC_11 (int *,int const,int const,int ) ;
 int FUNC_12 (int *,int const,int const) ;
 int FUNC_13 (int *,int) ;

__attribute__((used)) static int FUNC_14(Q68State *VAR_6, uint32_t VAR_7)
{
    const int VAR_8 = (VAR_7>>12==1 ? VAR_2 : VAR_7>>12==2 ? VAR_3 : VAR_4);

    int VAR_9;
    FUNC_10(VAR_6, VAR_7, VAR_8, 0, &VAR_9, 1);
    if (VAR_9 < 0) {
        return 1;
    }



    const uint32_t VAR_10 = (VAR_7>>9 & 7) | (VAR_7>>3 & 0x38);
    int VAR_11;
    if (FUNC_0(VAR_10) <= VAR_1) {
        VAR_11 = 0;
    } else {
        VAR_11 = FUNC_11(VAR_6, VAR_10, VAR_8, VAR_0);
        if (VAR_11 < 0) {
            return FUNC_13(VAR_6, VAR_7);
        }
    }


    const int VAR_12 = FUNC_9(VAR_6, VAR_7);
    if (FUNC_0(VAR_10) == VAR_1) {
        if (VAR_8 == VAR_4) {
            FUNC_2(VAR_5);
        } else {
            FUNC_4(VAR_5);
        }
    } else {
        if (VAR_8 == VAR_2) {
            FUNC_3(VAR_5);
            if (VAR_12) FUNC_6(VAR_5);
        } else if (VAR_8 == VAR_4) {
            FUNC_5(VAR_5);
            if (VAR_12) FUNC_8(VAR_5);
        } else {
            FUNC_4(VAR_5);
            if (VAR_12) FUNC_7(VAR_5);
        }
    }


    FUNC_12(VAR_6, VAR_10, VAR_8);
    FUNC_1(VAR_5, 4 + VAR_9 + VAR_11);

    return 0;
}
