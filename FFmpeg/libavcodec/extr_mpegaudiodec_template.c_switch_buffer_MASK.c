
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int size_in_bits; int * buffer; } ;
struct TYPE_5__ {int extrasize; TYPE_3__ gb; TYPE_3__ in_gb; } ;
typedef TYPE_1__ MPADecodeContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_3(MPADecodeContext *VAR_0, int *VAR_1, int *VAR_2,
                          int *VAR_3)
{
    if (VAR_0->in_gb.buffer && *VAR_1 >= VAR_0->gb.size_in_bits - VAR_0->extrasize * 8) {
        VAR_0->gb = VAR_0->in_gb;
        VAR_0->in_gb.buffer = ((void*)0);
        VAR_0->extrasize = 0;
        FUNC_0((FUNC_1(&VAR_0->gb) & 7) == 0);
        FUNC_2(&VAR_0->gb, *VAR_1 - *VAR_2);
        *VAR_3 =
        *VAR_2 = *VAR_3 + FUNC_1(&VAR_0->gb) - *VAR_1;
        *VAR_1 = FUNC_1(&VAR_0->gb);
    }
}
