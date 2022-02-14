
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ hier_chset; } ;
struct TYPE_7__ {size_t nchsets; TYPE_2__* chset; } ;
typedef TYPE_1__ DCAXllDecoder ;
typedef TYPE_2__ DCAXllChSet ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static DCAXllChSet *FUNC_1(DCAXllDecoder *VAR_0, DCAXllChSet *VAR_1)
{
    if (VAR_1->hier_chset)
        while (++VAR_1 < &VAR_0->chset[VAR_0->nchsets])
            if (FUNC_0(VAR_1))
                return VAR_1;

    return ((void*)0);
}
