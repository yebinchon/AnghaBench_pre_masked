
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_8__ {scalar_t__ maxitems; } ;
struct TYPE_7__ {int vtable_index; TYPE_3__ vtables; } ;
typedef int KXLDVTable ;
typedef TYPE_1__ KXLDKext ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int * FUNC_3 (TYPE_3__*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(KXLDKext *VAR_0)
{
    KXLDVTable *VAR_1 = ((void*)0);
    u_int VAR_2;

    FUNC_1(VAR_0);

    for (VAR_2 = 0; VAR_2 < VAR_0->vtables.maxitems; ++VAR_2) {
        VAR_1 = FUNC_3(&VAR_0->vtables, VAR_2);
        FUNC_5(VAR_1);
    }
    FUNC_2(&VAR_0->vtables);
    FUNC_4(&VAR_0->vtable_index);

    FUNC_0(VAR_0, sizeof(*VAR_0));
}
