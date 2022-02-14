
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int gb; } ;
typedef TYPE_1__ WebPContext ;
struct TYPE_6__ {int nb_symbols; int simple; void** simple_symbols; } ;
typedef TYPE_2__ HuffReader ;


 void* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(WebPContext *VAR_0, HuffReader *VAR_1)
{
    VAR_1->nb_symbols = FUNC_1(&VAR_0->gb) + 1;

    if (FUNC_1(&VAR_0->gb))
        VAR_1->simple_symbols[0] = FUNC_0(&VAR_0->gb, 8);
    else
        VAR_1->simple_symbols[0] = FUNC_1(&VAR_0->gb);

    if (VAR_1->nb_symbols == 2)
        VAR_1->simple_symbols[1] = FUNC_0(&VAR_0->gb, 8);

    VAR_1->simple = 1;
}
