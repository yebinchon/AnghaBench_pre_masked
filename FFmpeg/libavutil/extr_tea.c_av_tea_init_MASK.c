
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int rounds; int * key; } ;
typedef TYPE_1__ AVTEA ;


 int FUNC_0 (int const*) ;

void FUNC_1(AVTEA *VAR_0, const uint8_t VAR_1[16], int VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
        VAR_0->key[VAR_3] = FUNC_0(VAR_1 + (VAR_3 << 2));

    VAR_0->rounds = VAR_2;
}
