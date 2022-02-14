
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int high; int low; int value; } ;
typedef TYPE_1__ ArithCoder ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(ArithCoder *VAR_0, int VAR_1)
{
    int VAR_2 = VAR_0->high - VAR_0->low + 1;
    int VAR_3 = FUNC_3(VAR_2) - FUNC_3(VAR_1);
    int VAR_4;

    if (VAR_1 << VAR_3 > VAR_2)
        VAR_3--;

    VAR_1 <<= VAR_3;

    VAR_4 = FUNC_0(VAR_0->value - VAR_0->low, VAR_1, VAR_2) >> VAR_3;

    FUNC_2(VAR_0, VAR_2, VAR_4 << VAR_3, (VAR_4 + 1) << VAR_3, VAR_1);

    FUNC_1(VAR_0);

    return VAR_4;
}
