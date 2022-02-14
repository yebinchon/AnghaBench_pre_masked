
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * cache; } ;
typedef TYPE_1__ VP9BSFContext ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVBSFContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(AVBSFContext *VAR_2)
{
    VP9BSFContext *VAR_3 = VAR_2->priv_data;
    int VAR_4;


    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        VAR_3->cache[VAR_4] = FUNC_1();
        if (!VAR_3->cache[VAR_4])
            return FUNC_0(VAR_0);
    }

    return 0;
}
