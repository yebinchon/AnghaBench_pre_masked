
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef int int32_t ;


 int FUNC_0 (int *,int *,int const,int) ;
 int FUNC_1 (int *,int *,int const,int) ;

__attribute__((used)) static void FUNC_2(int32_t *VAR_0, int32_t *VAR_1, int32_t *VAR_2,
                                  const int32_t *VAR_3, ptrdiff_t VAR_4)
{
    int VAR_5;

    FUNC_0(VAR_1, VAR_2, VAR_3[0], VAR_4);
    FUNC_0(VAR_2, VAR_1, VAR_3[1], VAR_4);
    FUNC_0(VAR_1, VAR_2, VAR_3[2], VAR_4);
    FUNC_0(VAR_2, VAR_1, VAR_3[3], VAR_4);

    for (VAR_5 = 0; VAR_5 < 8; VAR_5++, VAR_1--) {
        FUNC_1(VAR_1, VAR_2, VAR_3[VAR_5 + 4], VAR_4);
        FUNC_1(VAR_2, VAR_1, VAR_3[VAR_5 + 12], VAR_4);
        FUNC_1(VAR_1, VAR_2, VAR_3[VAR_5 + 4], VAR_4);
    }

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        *VAR_0++ = *VAR_2++;
        *VAR_0++ = *++VAR_1;
    }
}
