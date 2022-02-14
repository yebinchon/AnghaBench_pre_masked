
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* name; } ;
struct TYPE_4__ {int nb_tracked_methods; scalar_t__ tracked_methods_size; TYPE_3__* tracked_methods; } ;
typedef TYPE_1__ RTMPContext ;


 int FUNC_0 (TYPE_3__**) ;

__attribute__((used)) static void FUNC_1(RTMPContext *VAR_0)
{
    int VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->nb_tracked_methods; VAR_1 ++)
        FUNC_0(&VAR_0->tracked_methods[VAR_1].name);
    FUNC_0(&VAR_0->tracked_methods);
    VAR_0->tracked_methods_size = 0;
    VAR_0->nb_tracked_methods = 0;
}
