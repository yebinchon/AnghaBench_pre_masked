
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_14__ {int relocs; } ;
struct TYPE_13__ {int base_addr; int locrelocs; int extrelocs; int sectnum; } ;
typedef TYPE_1__ KXLDSym ;
typedef TYPE_2__ KXLDSect ;
typedef int KXLDReloc ;
typedef TYPE_1__ KXLDObject ;


 int FUNC_0 (TYPE_1__ const*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (TYPE_1__ const*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_1__ const*,TYPE_2__ const*) ;
 int FUNC_5 (TYPE_2__ const*,int ) ;

const KXLDReloc *
FUNC_6(const KXLDObject *VAR_1, const KXLDSym *VAR_2)
{
    const KXLDReloc *VAR_3 = ((void*)0);
    const KXLDSect *VAR_4 = ((void*)0);
    uint32_t VAR_5 = 0;

    FUNC_0(VAR_1);
    FUNC_0(VAR_2);

    VAR_4 = FUNC_1(VAR_1, VAR_2->sectnum);
    FUNC_5(VAR_4, VAR_0);

    if (FUNC_2(VAR_1)) {
        VAR_3 = FUNC_3(&VAR_1->extrelocs,
                                               VAR_2->base_addr);
        if (!VAR_3) {
            VAR_3 = FUNC_3(&VAR_1->locrelocs,
                                                   VAR_2->base_addr);
        }
    } else {
        VAR_5 = FUNC_4(VAR_2, VAR_4);
        VAR_3 = FUNC_3(&VAR_4->relocs, VAR_5);
    }

finish:
    return VAR_3;
}
