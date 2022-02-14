
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;
typedef int DCAEncContext ;


 scalar_t__ FUNC_0 (scalar_t__ const) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static inline int32_t FUNC_2(DCAEncContext *VAR_0, const int32_t *VAR_1, int VAR_2)
{
    int VAR_3;
    int32_t VAR_4 = 0;
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        int32_t VAR_5 = FUNC_0(VAR_1[VAR_3]);
        if (VAR_4 < VAR_5)
            VAR_4 = VAR_5;
    }
    return FUNC_1(VAR_0, VAR_4);
}
