
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int const,int const) ;
 int FUNC_3 (int,int,int) ;

__attribute__((used)) static int FUNC_4(int VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    const int VAR_9 = FUNC_1(FUNC_0(VAR_0 - VAR_1), FUNC_0(VAR_0 - VAR_8));
    const int VAR_10 = FUNC_1(FUNC_0(VAR_0 - VAR_2), FUNC_0(VAR_0 - VAR_7));
    const int VAR_11 = FUNC_1(FUNC_0(VAR_0 - VAR_3), FUNC_0(VAR_0 - VAR_6));
    const int VAR_12 = FUNC_1(FUNC_0(VAR_0 - VAR_4), FUNC_0(VAR_0 - VAR_5));

    const int VAR_13 = FUNC_2(FUNC_2(VAR_9, VAR_10), FUNC_2(VAR_11, VAR_12));

    if (VAR_13 == VAR_12) {
        return FUNC_3(VAR_0, FUNC_2(VAR_4, VAR_5), FUNC_1(VAR_4, VAR_5));
    }
    if (VAR_13 == VAR_10) {
        return FUNC_3(VAR_0, FUNC_2(VAR_2, VAR_7), FUNC_1(VAR_2, VAR_7));
    }
    if (VAR_13 == VAR_11) {
        return FUNC_3(VAR_0, FUNC_2(VAR_3, VAR_6), FUNC_1(VAR_3, VAR_6));
    }

    return FUNC_3(VAR_0, FUNC_2(VAR_1, VAR_8), FUNC_1(VAR_1, VAR_8));
}
