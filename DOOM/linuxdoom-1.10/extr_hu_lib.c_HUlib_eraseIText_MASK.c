
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int needsupdate; } ;
struct TYPE_4__ {scalar_t__* on; scalar_t__ laston; TYPE_2__ l; } ;
typedef TYPE_1__ hu_itext_t ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(hu_itext_t* VAR_0)
{
    if (VAR_0->laston && !*VAR_0->on)
 VAR_0->l.needsupdate = 4;
    FUNC_0(&VAR_0->l);
    VAR_0->laston = *VAR_0->on;
}
