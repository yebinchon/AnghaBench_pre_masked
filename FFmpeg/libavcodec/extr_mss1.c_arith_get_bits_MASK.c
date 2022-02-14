
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int high; int low; int value; } ;
typedef TYPE_1__ ArithCoder ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(ArithCoder *VAR_0, int VAR_1)
{
    int VAR_2 = VAR_0->high - VAR_0->low + 1;
    int VAR_3 = (((VAR_0->value - VAR_0->low + 1) << VAR_1) - 1) / VAR_2;
    int VAR_4 = VAR_2 * VAR_3;

    VAR_0->high = ((VAR_4 + VAR_2) >> VAR_1) + VAR_0->low - 1;
    VAR_0->low += VAR_4 >> VAR_1;

    FUNC_0(VAR_0);

    return VAR_3;
}
