
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const uint8_t **VAR_1, const uint8_t *VAR_2)
{
    const uint8_t *VAR_3;
    int VAR_4;

    VAR_3 = *VAR_1;
    if (VAR_3 >= VAR_2)
        return VAR_0;
    VAR_4 = *VAR_3++;
    *VAR_1 = VAR_3;
    return VAR_4;
}
