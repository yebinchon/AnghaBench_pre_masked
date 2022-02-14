
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;

__attribute__((used)) static unsigned FUNC_0(uint64_t VAR_1)
{
    unsigned VAR_2 = VAR_0 - (VAR_1 & (VAR_0-1));
    if (VAR_2 < 20)
        return VAR_2 + VAR_0;
    else
        return VAR_2 & (VAR_0-1);
}
