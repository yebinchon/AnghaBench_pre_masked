
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_tracked_methods; int * tracked_methods; } ;
typedef TYPE_1__ RTMPContext ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(RTMPContext *VAR_0, int VAR_1)
{
    FUNC_0(&VAR_0->tracked_methods[VAR_1], &VAR_0->tracked_methods[VAR_1 + 1],
            sizeof(*VAR_0->tracked_methods) * (VAR_0->nb_tracked_methods - VAR_1 - 1));
    VAR_0->nb_tracked_methods--;
}
