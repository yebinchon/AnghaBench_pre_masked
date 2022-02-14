
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int kern_return_t ;
struct TYPE_9__ {scalar_t__ nitems; } ;
struct TYPE_8__ {scalar_t__ vtable_index_created; int vtable_index; TYPE_5__ vtables; } ;
struct TYPE_7__ {int name; } ;
typedef TYPE_1__ KXLDVTable ;
typedef TYPE_2__ KXLDKext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (TYPE_5__*,scalar_t__) ;
 int FUNC_1 (int *,int ,int ,scalar_t__) ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static kern_return_t
FUNC_4(KXLDKext *VAR_6)
{
    kern_return_t VAR_7 = VAR_0;
    KXLDVTable *VAR_8 = ((void*)0);
    u_int VAR_9 = 0;

    if (VAR_6->vtable_index_created) {
        VAR_7 = VAR_1;
        goto finish;
    }


    VAR_7 = FUNC_1(&VAR_6->vtable_index, VAR_5,
        VAR_4, VAR_6->vtables.nitems);
    FUNC_3(VAR_7, VAR_3);

    for (VAR_9 = 0; VAR_9 < VAR_6->vtables.nitems; ++VAR_9) {
        VAR_8 = FUNC_0(&VAR_6->vtables, VAR_9);
        VAR_7 = FUNC_2(&VAR_6->vtable_index, VAR_8->name, VAR_8);
        FUNC_3(VAR_7, VAR_3);
    }

    VAR_6->vtable_index_created = VAR_2;
    VAR_7 = VAR_1;
finish:
    return VAR_7;
}
