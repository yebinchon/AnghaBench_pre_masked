
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int const) ;

__attribute__((used)) static inline uint32_t FUNC_2(uint32_t VAR_0, uint32_t VAR_1, const int *VAR_2)
{
    int VAR_3, VAR_4 = 0, VAR_5 = 0;
    for (VAR_3 = VAR_0 - 1; VAR_3 >= 0; VAR_3--) {
        const uint32_t VAR_6 = FUNC_0(VAR_0 - VAR_3, VAR_5 + FUNC_1(VAR_2[VAR_3]) + 1);
        VAR_4 += FUNC_0(VAR_0 - VAR_3, VAR_5) + (VAR_2[VAR_3] < 0)*VAR_6;
        VAR_5 += FUNC_1(VAR_2[VAR_3]);
    }
    return VAR_4;
}
