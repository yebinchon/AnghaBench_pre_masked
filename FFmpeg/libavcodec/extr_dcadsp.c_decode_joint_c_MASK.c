
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef int int32_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(int32_t **VAR_0, int32_t **VAR_1,
                           const int32_t *VAR_2,
                           ptrdiff_t VAR_3, ptrdiff_t VAR_4,
                           ptrdiff_t VAR_5, ptrdiff_t VAR_6)
{
    int VAR_7, VAR_8;

    for (VAR_7 = VAR_3; VAR_7 < VAR_4; VAR_7++) {
        int32_t VAR_9 = VAR_2[VAR_7];
        for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
            VAR_0[VAR_7][VAR_8 + VAR_5] = FUNC_0(FUNC_1(VAR_1[VAR_7][VAR_8 + VAR_5], VAR_9));
    }
}
