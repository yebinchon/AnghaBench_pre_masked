
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_10__ {scalar_t__ maxitems; } ;
struct TYPE_9__ {struct TYPE_9__* kext; int vtables_by_name; int obsolete_symbols_by_name; int defined_cxx_symbols_by_value; int defined_symbols_by_name; TYPE_6__ dependencies; TYPE_6__ objects; } ;
typedef int KXLDObject ;
typedef TYPE_1__ KXLDKext ;
typedef TYPE_1__ KXLDContext ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_6__*) ;
 void* FUNC_2 (TYPE_6__*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;

void
FUNC_9(KXLDContext *VAR_0)
{
    KXLDObject *VAR_1 = ((void*)0);
    KXLDKext *VAR_2 = ((void*)0);
    u_int VAR_3 = 0;

    FUNC_0(VAR_0);

    FUNC_5(VAR_0->kext);

    for (VAR_3 = 0; VAR_3 < VAR_0->objects.maxitems; ++VAR_3) {
        VAR_1 = FUNC_2(&VAR_0->objects, VAR_3);
        FUNC_7(VAR_1);
    }
    FUNC_1(&VAR_0->objects);

    for (VAR_3 = 0; VAR_3 < VAR_0->dependencies.maxitems; ++VAR_3) {
        VAR_2 = FUNC_2(&VAR_0->dependencies, VAR_3);
        FUNC_5(VAR_2);
    }
    FUNC_1(&VAR_0->dependencies);

    FUNC_3(&VAR_0->defined_symbols_by_name);
    FUNC_3(&VAR_0->defined_cxx_symbols_by_value);
    FUNC_3(&VAR_0->obsolete_symbols_by_name);
    FUNC_3(&VAR_0->vtables_by_name);

    FUNC_4(VAR_0->kext, FUNC_6());
    FUNC_4(VAR_0, sizeof(*VAR_0));

    FUNC_8();
}
