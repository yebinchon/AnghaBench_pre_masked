
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ,int const*,int ,int ,int) ;

int FUNC_5(uint8_t *VAR_1, ptrdiff_t VAR_2,
                                    const uint8_t *VAR_3, ptrdiff_t VAR_4,
                                    ptrdiff_t VAR_5, int VAR_6)
{
    int VAR_7 = FUNC_3();
    ptrdiff_t VAR_8 = FUNC_2(VAR_5, 64);

    if (FUNC_1(VAR_7) &&
        VAR_8 <= VAR_2 && VAR_8 <= VAR_4)
        FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4,
                                         VAR_8, VAR_6);
    else
        return FUNC_0(VAR_0);

    return 0;
}
