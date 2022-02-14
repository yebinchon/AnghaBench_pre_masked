
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;

__attribute__((used)) static inline int FUNC_1(const uint8_t **VAR_1, const uint8_t *VAR_2)
{
    const uint8_t *VAR_3;
    int VAR_4;

    VAR_3 = *VAR_1;
    if (1 >= VAR_2 - VAR_3)
        return VAR_0;
    VAR_4 = FUNC_0(VAR_3);
    VAR_3 += 2;
    *VAR_1 = VAR_3;
    return VAR_4;
}
