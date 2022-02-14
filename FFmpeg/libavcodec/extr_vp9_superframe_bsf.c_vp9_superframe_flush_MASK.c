
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int n_cache; int * cache; } ;
typedef TYPE_1__ VP9BSFContext ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVBSFContext ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(AVBSFContext *VAR_0)
{
    VP9BSFContext *VAR_1 = VAR_0->priv_data;
    int VAR_2;


    for (VAR_2 = 0; VAR_2 < VAR_1->n_cache; VAR_2++)
        FUNC_0(VAR_1->cache[VAR_2]);
    VAR_1->n_cache = 0;
}
