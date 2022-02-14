
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int Q68State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(Q68State *VAR_11, uint32_t VAR_12)
{

    if (FUNC_0(VAR_12) == VAR_2) {
        return FUNC_6(VAR_11, VAR_12);
    }

    if (FUNC_0(VAR_12) == VAR_2
     || FUNC_0(VAR_12) == VAR_1
     || FUNC_0(VAR_12) == VAR_5
     || FUNC_0(VAR_12) == VAR_6
     || (FUNC_0(VAR_12) == VAR_3 && FUNC_1(VAR_12) == VAR_4)
    ) {
        return FUNC_7(VAR_11, VAR_12);
    }

    int VAR_13 = FUNC_5(VAR_11, VAR_12, VAR_9, VAR_0);
    if (VAR_13 < 0) {
        return FUNC_7(VAR_11, VAR_12);
    }
    if (VAR_13 % 4 == 2) {
        VAR_13 += 2;
    }


    FUNC_3(VAR_10, VAR_12,
                              VAR_7 | VAR_8);

    FUNC_4(VAR_10);
    FUNC_2(VAR_10, 8 + VAR_13);
    return 0;
}
