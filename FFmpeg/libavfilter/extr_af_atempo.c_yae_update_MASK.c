
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int window; scalar_t__* origin; } ;
struct TYPE_8__ {TYPE_3__* priv; } ;
struct TYPE_7__ {scalar_t__* position; } ;
typedef TYPE_1__ AudioFragment ;
typedef TYPE_2__ AVFilterContext ;
typedef TYPE_3__ ATempoContext ;


 TYPE_1__* FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_0)
{
    const AudioFragment *VAR_1;
    ATempoContext *VAR_2 = VAR_0->priv;

    VAR_1 = FUNC_0(VAR_2);
    VAR_2->origin[0] = VAR_1->position[0] + VAR_2->window / 2;
    VAR_2->origin[1] = VAR_1->position[1] + VAR_2->window / 2;
    return 0;
}
