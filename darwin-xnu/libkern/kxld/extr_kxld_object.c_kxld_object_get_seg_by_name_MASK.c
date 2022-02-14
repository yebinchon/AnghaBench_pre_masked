
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_9__ {scalar_t__ nitems; } ;
struct TYPE_8__ {TYPE_6__ segs; } ;
struct TYPE_7__ {int segname; } ;
typedef TYPE_1__ KXLDSeg ;
typedef TYPE_2__ KXLDObject ;


 TYPE_1__* FUNC_0 (TYPE_6__*,scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int ,int) ;

KXLDSeg *
FUNC_2(const KXLDObject *VAR_0, const char *VAR_1)
{
    KXLDSeg *VAR_2 = ((void*)0);
    u_int VAR_3 = 0;

    for (VAR_3 = 0; VAR_3 < VAR_0->segs.nitems; ++VAR_3) {
        VAR_2 = FUNC_0(&VAR_0->segs, VAR_3);

        if (FUNC_1(VAR_1, VAR_2->segname, sizeof(VAR_2->segname))) break;

        VAR_2 = ((void*)0);
    }

    return VAR_2;
}
