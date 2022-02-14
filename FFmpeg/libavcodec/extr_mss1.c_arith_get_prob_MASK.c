
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int high; int low; int value; } ;
typedef TYPE_1__ ArithCoder ;



__attribute__((used)) static int FUNC_0(ArithCoder *VAR_0, int16_t *VAR_1)
{
    int VAR_2 = VAR_0->high - VAR_0->low + 1;
    int VAR_3 = ((VAR_0->value - VAR_0->low + 1) * VAR_1[0] - 1) / VAR_2;
    int VAR_4 = 1;

    while (VAR_1[VAR_4] > VAR_3)
        VAR_4++;

    VAR_0->high = VAR_2 * VAR_1[VAR_4 - 1] / VAR_1[0] + VAR_0->low - 1;
    VAR_0->low += VAR_2 * VAR_1[VAR_4] / VAR_1[0];

    return VAR_4;
}
