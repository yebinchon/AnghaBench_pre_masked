
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int* VAR_0 ;

__attribute__((used)) static inline uint64_t FUNC_0(int VAR_1)
{
    int VAR_2;
    uint64_t VAR_3 = 0;

    for (VAR_2 = 0; VAR_2 < 13; VAR_2++)
        VAR_3 |= VAR_0[VAR_2] * ((VAR_1 >> VAR_2) & 1);

    return VAR_3;
}
