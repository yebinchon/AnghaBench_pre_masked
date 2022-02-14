
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (int const,int const) ;

__attribute__((used)) static inline int64_t FUNC_1(const int32_t *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4;
    int64_t VAR_5 = 0;
    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
        VAR_5 += FUNC_0(VAR_0[VAR_4-VAR_2], VAR_0[VAR_4-VAR_3]);
    return VAR_5;
}
