
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int sectnum; scalar_t__ link_addr; scalar_t__ base_addr; } ;
struct TYPE_6__ {int relocated_sectnum; scalar_t__ base_addr; scalar_t__ link_addr; } ;
typedef TYPE_1__ KXLDSym ;
typedef TYPE_2__ KXLDSect ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

void
FUNC_1(KXLDSym *VAR_0, const KXLDSect *VAR_1)
{
    if (FUNC_0(VAR_0)) {
        VAR_0->link_addr = VAR_0->base_addr - VAR_1->base_addr + VAR_1->link_addr;
        VAR_0->relocated_sectnum = VAR_1->sectnum;
    }
}
