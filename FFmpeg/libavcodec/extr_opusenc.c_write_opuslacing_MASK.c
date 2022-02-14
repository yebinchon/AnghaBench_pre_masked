
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static inline int FUNC_2(uint8_t *VAR_0, int VAR_1)
{
    VAR_0[0] = FUNC_1(VAR_1 - FUNC_0(VAR_1 - 255, 4), VAR_1);
    VAR_0[1] = (VAR_1 - VAR_0[0]) >> 2;
    return 1 + (VAR_1 >= 252);
}
