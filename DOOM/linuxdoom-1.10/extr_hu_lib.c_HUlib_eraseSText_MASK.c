
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int h; scalar_t__* on; scalar_t__ laston; TYPE_2__* l; } ;
typedef TYPE_1__ hu_stext_t ;
struct TYPE_5__ {int needsupdate; } ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(hu_stext_t* VAR_0)
{

    int VAR_1;

    for (VAR_1=0 ; VAR_1<VAR_0->h ; VAR_1++)
    {
 if (VAR_0->laston && !*VAR_0->on)
     VAR_0->l[VAR_1].needsupdate = 4;
 FUNC_0(&VAR_0->l[VAR_1]);
    }
    VAR_0->laston = *VAR_0->on;

}
