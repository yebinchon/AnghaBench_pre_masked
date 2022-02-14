
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int const,int const) ;
 int FUNC_3 (int const,int,int ) ;

__attribute__((used)) static int FUNC_4(int VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    const int VAR_9 = FUNC_0(VAR_1 - VAR_8);
    const int VAR_10 = FUNC_0(VAR_2 - VAR_7);
    const int VAR_11 = FUNC_0(VAR_3 - VAR_6);

    const int VAR_12 = FUNC_2(FUNC_2(VAR_9, VAR_10), VAR_11);
    const int VAR_13 = (2 * (VAR_2 + VAR_7) + VAR_1 + VAR_3 + VAR_6 + VAR_8 + 4) >> 3;

    if (VAR_12 == VAR_10) {
        return FUNC_3(VAR_13, FUNC_2(VAR_2, VAR_7), FUNC_1(VAR_2, VAR_7));
    }
    if (VAR_12 == VAR_11) {
        return FUNC_3(VAR_13, FUNC_2(VAR_3, VAR_6), FUNC_1(VAR_3, VAR_6));
    }

    return FUNC_3(VAR_13, FUNC_2(VAR_1, VAR_8), FUNC_1(VAR_1, VAR_8));
}
