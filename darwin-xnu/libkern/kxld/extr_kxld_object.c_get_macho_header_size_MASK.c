
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_long ;
typedef scalar_t__ u_int ;
struct mach_header_64 {int dummy; } ;
struct mach_header {int dummy; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_16__ {scalar_t__ nitems; } ;
struct TYPE_15__ {scalar_t__ has_versionmin; } ;
struct TYPE_13__ {scalar_t__ has_splitinfolc; } ;
struct TYPE_12__ {scalar_t__ has_srcversion; } ;
struct TYPE_11__ {scalar_t__ has_uuid; } ;
struct TYPE_14__ {TYPE_3__ splitinfolc; TYPE_2__ srcversion; TYPE_6__ versionmin; TYPE_1__ uuid; TYPE_8__ segs; } ;
typedef int KXLDSeg ;
typedef TYPE_4__ KXLDObject ;


 int FUNC_0 (TYPE_4__ const*) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (TYPE_8__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_4__ const*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (TYPE_6__*) ;
 scalar_t__ FUNC_10 (TYPE_4__ const*) ;

__attribute__((used)) static u_long
FUNC_11(const KXLDObject *VAR_1)
{
    KXLDSeg *VAR_2 = ((void*)0);
    u_long VAR_3 = 0;
    u_int VAR_4 = 0;
    boolean_t VAR_5 = FUNC_2(VAR_1);

    FUNC_0(VAR_1);



    VAR_3 += VAR_5 ? sizeof(struct mach_header) : sizeof(struct mach_header_64);

    for (VAR_4 = 0; VAR_4 < VAR_1->segs.nitems; ++VAR_4) {
        VAR_2 = FUNC_1(&VAR_1->segs, VAR_4);
        VAR_3 += FUNC_4(VAR_2, VAR_5);
    }

    VAR_3 += FUNC_7();







    if (VAR_1->uuid.has_uuid) {
        VAR_3 += FUNC_8();
    }

    if (VAR_1->versionmin.has_versionmin) {
        VAR_3 += FUNC_9(&VAR_1->versionmin);
    }

    if (VAR_1->srcversion.has_srcversion) {
        VAR_3 += FUNC_6();
    }

    if (VAR_0 && VAR_1->splitinfolc.has_splitinfolc) {
        VAR_3 += FUNC_5();
    }

    return VAR_3;
}
