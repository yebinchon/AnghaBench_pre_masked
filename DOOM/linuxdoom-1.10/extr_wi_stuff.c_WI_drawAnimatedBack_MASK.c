
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int y; int x; } ;
struct TYPE_6__ {size_t ctr; int * p; TYPE_1__ loc; } ;
typedef TYPE_2__ anim_t ;
struct TYPE_7__ {int epsd; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 TYPE_2__** VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* VAR_4 ;

void FUNC_1(void)
{
    int VAR_5;
    anim_t* VAR_6;

    if (VAR_3)
 return;

    if (VAR_4->epsd > 2)
 return;

    for (VAR_5=0 ; VAR_5<VAR_1[VAR_4->epsd] ; VAR_5++)
    {
 VAR_6 = &VAR_2[VAR_4->epsd][VAR_5];

 if (VAR_6->ctr >= 0)
     FUNC_0(VAR_6->loc.x, VAR_6->loc.y, VAR_0, VAR_6->p[VAR_6->ctr]);
    }

}
