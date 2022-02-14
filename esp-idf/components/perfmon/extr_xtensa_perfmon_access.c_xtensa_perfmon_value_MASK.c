
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;

uint32_t FUNC_1(int VAR_2)
{
    if (VAR_2 >= VAR_0) {
        return 0;
    }
    uint32_t VAR_3 = FUNC_0(VAR_1 + VAR_2 * sizeof(int32_t));
    return VAR_3;
}
