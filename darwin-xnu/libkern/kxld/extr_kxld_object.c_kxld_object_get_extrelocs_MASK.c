
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int extrelocs; } ;
typedef TYPE_1__ KXLDObject ;
typedef int KXLDArray ;


 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;

const KXLDArray *
FUNC_2(const KXLDObject *VAR_0)
{
    const KXLDArray *VAR_1 = ((void*)0);

    FUNC_0(VAR_0);

    if (FUNC_1(VAR_0)) {
        VAR_1 = &VAR_0->extrelocs;
    }

    return VAR_1;
}
