
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_6__ {scalar_t__ nitems; } ;
struct TYPE_5__ {TYPE_3__ sects; } ;
typedef int const KXLDSect ;
typedef TYPE_1__ KXLDObject ;


 int FUNC_0 (TYPE_1__ const*) ;
 int const* FUNC_1 (TYPE_3__*,scalar_t__) ;

const KXLDSect *
FUNC_2(const KXLDObject *VAR_0, u_int VAR_1)
{
    KXLDSect *VAR_2 = ((void*)0);

    FUNC_0(VAR_0);

    if (VAR_1 < VAR_0->sects.nitems) {
        VAR_2 = FUNC_1(&VAR_0->sects, VAR_1);
    }

    return VAR_2;
}
