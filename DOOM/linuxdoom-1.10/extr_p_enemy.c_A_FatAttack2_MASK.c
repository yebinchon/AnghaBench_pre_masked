
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int angle; TYPE_1__* info; void* momy; void* momx; int target; } ;
typedef TYPE_2__ mobj_t ;
struct TYPE_7__ {int speed; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 void* FUNC_1 (int ,int ) ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (TYPE_2__*,int ,int ) ;
 int * VAR_3 ;
 int * VAR_4 ;

void FUNC_3 (mobj_t* VAR_5)
{
    mobj_t* VAR_6;
    int VAR_7;

    FUNC_0 (VAR_5);

    VAR_5->angle -= VAR_1;
    FUNC_2 (VAR_5, VAR_5->target, VAR_2);

    VAR_6 = FUNC_2 (VAR_5, VAR_5->target, VAR_2);
    VAR_6->angle -= VAR_1*2;
    VAR_7 = VAR_6->angle >> VAR_0;
    VAR_6->momx = FUNC_1 (VAR_6->info->speed, VAR_3[VAR_7]);
    VAR_6->momy = FUNC_1 (VAR_6->info->speed, VAR_4[VAR_7]);
}
