
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int8_t ;


 int FUNC_0 (int,int,int) ;

__attribute__((used)) static int8_t FUNC_1(int VAR_0)
{
    VAR_0 = FUNC_0(VAR_0, -1024, 1024);
    if (VAR_0 > 0)
        VAR_0 -= (VAR_0 + 64) >> 7;

    return (VAR_0 + 4) >> 3;
}
