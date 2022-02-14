
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_7__ {scalar_t__ nitems; } ;
struct TYPE_6__ {void* vtable_index_created; void* vtables_created; int * interface; int * kext; int vtable_index; TYPE_3__ vtables; } ;
typedef int KXLDVTable ;
typedef TYPE_1__ KXLDKext ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_3__*,scalar_t__) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(KXLDKext *VAR_1)
{
    KXLDVTable *VAR_2 = ((void*)0);
    u_int VAR_3;

    FUNC_0(VAR_1);

    for (VAR_3 = 0; VAR_3 < VAR_1->vtables.nitems; ++VAR_3) {
        VAR_2 = FUNC_1(&VAR_1->vtables, VAR_3);
        FUNC_4(VAR_2);
    }
    FUNC_2(&VAR_1->vtables);
    FUNC_3(&VAR_1->vtable_index);

    VAR_1->kext = ((void*)0);
    VAR_1->interface = ((void*)0);
    VAR_1->vtables_created = VAR_0;
    VAR_1->vtable_index_created = VAR_0;
}
