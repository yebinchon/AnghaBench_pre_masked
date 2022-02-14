
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT8 ;
struct TYPE_4__ {int* key; } ;
struct TYPE_5__ {int* nb; } ;
struct TYPE_6__ {size_t key_size; int ediv; TYPE_1__ ltk; TYPE_2__ rand_nb; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 () ;

void FUNC_1(UINT8 VAR_3)
{

    UINT8 VAR_4;
    VAR_2.key_size = VAR_3;


    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        VAR_2.rand_nb.nb[VAR_4] = FUNC_0() % 256;
    }


    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        VAR_2.ltk.key[VAR_4] = (((VAR_3) < (16 - VAR_4)) ? 0 : FUNC_0() % 256);
    }


    VAR_2.ediv = FUNC_0() % 65536;
}
