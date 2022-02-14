
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_4__ {int high; int low; int value; } ;
typedef TYPE_1__ ArithCoder ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (TYPE_1__*,int,int,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(ArithCoder *VAR_0, int16_t *VAR_1)
{
    int VAR_2 = VAR_0->high - VAR_0->low + 1, VAR_3 = *VAR_1;
    int VAR_4 = FUNC_2(VAR_2) - FUNC_2(VAR_3);
    int VAR_5 = 0, VAR_6;

    if (VAR_3 << VAR_4 > VAR_2)
        VAR_4--;

    VAR_3 <<= VAR_4;

    VAR_6 = FUNC_0(VAR_0->value - VAR_0->low, VAR_3, VAR_2) >> VAR_4;
    while (VAR_1[++VAR_5] > VAR_6) ;

    FUNC_1(VAR_0, VAR_2,
                            VAR_1[VAR_5] << VAR_4, VAR_1[VAR_5 - 1] << VAR_4, VAR_3);

    return VAR_5;
}
