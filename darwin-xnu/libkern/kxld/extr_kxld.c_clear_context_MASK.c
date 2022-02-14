
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_7__ {scalar_t__ nitems; } ;
struct TYPE_6__ {int vtables_by_name; int obsolete_symbols_by_name; int defined_cxx_symbols_by_value; int defined_symbols_by_name; TYPE_2__ dependencies; TYPE_2__ objects; int * kext; } ;
typedef int KXLDObject ;
typedef int KXLDKext ;
typedef TYPE_1__ KXLDContext ;


 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(KXLDContext *VAR_0)
{
    KXLDObject * VAR_1 = ((void*)0);
    KXLDKext * VAR_2 = ((void*)0);
    u_int VAR_3 = 0;

    FUNC_0(VAR_0);

    FUNC_4(VAR_0->kext);

    for (VAR_3 = 0; VAR_3 < VAR_0->objects.nitems; ++VAR_3) {
        VAR_1 = FUNC_1(&VAR_0->objects, VAR_3);
        FUNC_5(VAR_1);
    }
    FUNC_2(&VAR_0->objects);

    for (VAR_3 = 0; VAR_3 < VAR_0->dependencies.nitems; ++VAR_3) {
        VAR_2 = FUNC_1(&VAR_0->dependencies, VAR_3);
        FUNC_4(VAR_2);
    }
    FUNC_2(&VAR_0->dependencies);

    FUNC_3(&VAR_0->defined_symbols_by_name);
    FUNC_3(&VAR_0->defined_cxx_symbols_by_value);
    FUNC_3(&VAR_0->obsolete_symbols_by_name);
    FUNC_3(&VAR_0->vtables_by_name);
}
