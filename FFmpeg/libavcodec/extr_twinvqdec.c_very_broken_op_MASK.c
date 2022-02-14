
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int size; int* tab; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1(int VAR_1, int VAR_2)
{
    int VAR_3 = VAR_1 * VAR_2 + 200;
    int VAR_4;
    const uint8_t *VAR_5;

    if (VAR_3 % 400 || VAR_2 % 5)
        return VAR_3 / 400;

    VAR_3 /= 400;

    VAR_4 = VAR_0[VAR_2 / 5].size;
    VAR_5 = VAR_0[VAR_2 / 5].tab;
    return VAR_3 - VAR_5[VAR_4 * FUNC_0(2 * (VAR_3 - 1) / VAR_4) + (VAR_3 - 1) % VAR_4];
}
