
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int high; int low; } ;
typedef TYPE_1__ ArithCoder ;



__attribute__((used)) static void FUNC_0(ArithCoder *VAR_0, int VAR_1,
                                    int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5 = (VAR_4 << 1) - VAR_1;

    if (VAR_3 > VAR_5)
        VAR_0->high = VAR_5 + ((VAR_3 - VAR_5) << 1);
    else
        VAR_0->high = VAR_3;

    VAR_0->high += VAR_0->low - 1;

    if (VAR_2 > VAR_5)
        VAR_0->low += VAR_5 + ((VAR_2 - VAR_5) << 1);
    else
        VAR_0->low += VAR_2;
}
