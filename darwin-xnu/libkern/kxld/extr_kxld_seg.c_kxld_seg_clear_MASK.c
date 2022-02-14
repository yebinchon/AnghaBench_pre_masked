
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sects; scalar_t__ initprot; scalar_t__ maxprot; scalar_t__ flags; scalar_t__ vmsize; scalar_t__ link_addr; scalar_t__ base_addr; int segname; } ;
typedef TYPE_1__ KXLDSeg ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(KXLDSeg *VAR_0)
{
    FUNC_1(VAR_0);

    FUNC_0(VAR_0->segname, sizeof(VAR_0->segname));
    VAR_0->base_addr = 0;
    VAR_0->link_addr = 0;
    VAR_0->vmsize = 0;
    VAR_0->flags = 0;
    VAR_0->maxprot = 0;
    VAR_0->initprot = 0;




    FUNC_2(&VAR_0->sects);
}
