
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct TYPE_10__ {scalar_t__ nitems; } ;
struct TYPE_8__ {scalar_t__ kextSize; int * kextExecutable; } ;
struct TYPE_9__ {scalar_t__ target_order; scalar_t__ host_order; int * section_order; void* got_is_created; void* is_linked; void* is_final_image; void* is_kernel; scalar_t__ cpusubtype; scalar_t__ cputype; scalar_t__ filetype; TYPE_1__ split_info; int splitinfolc; scalar_t__ size; int * file; scalar_t__ symtab; int srcversion; int versionmin; int uuid; int relocator; TYPE_5__ locrelocs; TYPE_5__ extrelocs; TYPE_5__ sects; TYPE_5__ segs; } ;
typedef int KXLDSeg ;
typedef int KXLDSect ;
typedef TYPE_2__ KXLDObject ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (TYPE_5__*,scalar_t__) ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,scalar_t__,scalar_t__) ;

void FUNC_13(KXLDObject *VAR_2)
{
    KXLDSeg *VAR_3 = ((void*)0);
    KXLDSect *VAR_4 = ((void*)0);
    u_int VAR_5;
    u_char *VAR_6;

    FUNC_0(VAR_2);

    if (VAR_1) {
        VAR_6 = VAR_2->file;
    }
    else {
        VAR_6 = VAR_2->split_info.kextExecutable;
    }


    if (FUNC_3(VAR_2)) {
        FUNC_12(VAR_6, VAR_2->host_order, VAR_2->target_order);
    }


    for (VAR_5 = 0; VAR_5 < VAR_2->segs.nitems; ++VAR_5) {
        VAR_3 = FUNC_1(&VAR_2->segs, VAR_5);
        FUNC_6(VAR_3);
    }
    FUNC_2(&VAR_2->segs);

    for (VAR_5 = 0; VAR_5 < VAR_2->sects.nitems; ++VAR_5) {
        VAR_4 = FUNC_1(&VAR_2->sects, VAR_5);
        FUNC_5(VAR_4);
    }
    FUNC_2(&VAR_2->sects);

    FUNC_2(&VAR_2->extrelocs);
    FUNC_2(&VAR_2->locrelocs);
    FUNC_4(&VAR_2->relocator);
    FUNC_10(&VAR_2->uuid);
    FUNC_11(&VAR_2->versionmin);
    FUNC_8(&VAR_2->srcversion);

    if (VAR_2->symtab) FUNC_9(VAR_2->symtab);

    if (VAR_1) {
        VAR_2->file = ((void*)0);
        VAR_2->size = 0;
    }
    else {
        FUNC_7(&VAR_2->splitinfolc);
        VAR_2->split_info.kextExecutable = ((void*)0);
        VAR_2->split_info.kextSize = 0;
    }
    VAR_2->filetype = 0;
    VAR_2->cputype = 0;
    VAR_2->cpusubtype = 0;
    VAR_2->is_kernel = VAR_0;
    VAR_2->is_final_image = VAR_0;
    VAR_2->is_linked = VAR_0;
    VAR_2->got_is_created = VAR_0;





    VAR_2->host_order = 0;
    VAR_2->target_order = 0;

}
