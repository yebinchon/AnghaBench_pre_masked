
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cache_size; int* cache; int ** sec_models; int full_model; int cache_model; int special_initial_cache; } ;
typedef TYPE_1__ PixContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(PixContext *VAR_0)
{
    int VAR_1, VAR_2;

    if (!VAR_0->special_initial_cache)
        for (VAR_1 = 0; VAR_1 < VAR_0->cache_size; VAR_1++)
            VAR_0->cache[VAR_1] = VAR_1;
    else {
        VAR_0->cache[0] = 1;
        VAR_0->cache[1] = 2;
        VAR_0->cache[2] = 4;
    }

    FUNC_0(&VAR_0->cache_model);
    FUNC_0(&VAR_0->full_model);

    for (VAR_1 = 0; VAR_1 < 15; VAR_1++)
        for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
            FUNC_0(&VAR_0->sec_models[VAR_1][VAR_2]);
}
