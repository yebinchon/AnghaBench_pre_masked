
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 unsigned int FUNC_0 (int const*) ;
 unsigned int FUNC_1 (int const*) ;

__attribute__((used)) static unsigned int FUNC_2(const uint8_t **VAR_0, int VAR_1)
{
    unsigned int VAR_2;
    if (VAR_1) {
        VAR_2 = FUNC_0(*VAR_0);
    } else {
        VAR_2 = FUNC_1(*VAR_0);
    }
    *VAR_0 += 2;
    return VAR_2;
}
