
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int int32_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline int32_t FUNC_1(int64_t VAR_0, int VAR_1)
{
    if (VAR_1 > 0)
        return (int32_t)((VAR_0 + (FUNC_0(1) << (VAR_1 - 1))) >> VAR_1);
    else
        return (int32_t)VAR_0;
}
