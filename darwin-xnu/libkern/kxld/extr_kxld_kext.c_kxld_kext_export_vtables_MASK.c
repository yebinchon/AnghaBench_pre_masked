
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;


typedef scalar_t__ u_int ;
typedef int kern_return_t ;
struct TYPE_16__ {scalar_t__ nitems; } ;
struct TYPE_18__ {TYPE_11__ vtables; } ;
struct TYPE_17__ {int name; } ;
typedef TYPE_1__ KXLDVTable ;
typedef TYPE_2__ const KXLDKext ;
typedef TYPE_2__ const KXLDDict ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (TYPE_2__ const*,TYPE_2__ const*,TYPE_2__ const*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (TYPE_11__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__ const*,int ,TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;

kern_return_t
FUNC_5(KXLDKext *VAR_3, const KXLDDict *VAR_4,
    const KXLDDict *VAR_5, KXLDDict *VAR_6)
{
    kern_return_t VAR_7 = VAR_0;
    KXLDVTable *VAR_8 = ((void*)0);
    u_int VAR_9 = 0;

    FUNC_0(VAR_3);
    FUNC_0(VAR_5);
    FUNC_0(VAR_4);
    FUNC_0(VAR_6);

    VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5);
    FUNC_4(VAR_7, VAR_2);

    for (VAR_9 = 0; VAR_9 < VAR_3->vtables.nitems; ++VAR_9) {
        VAR_8 = FUNC_2(&VAR_3->vtables, VAR_9);

        VAR_7 = FUNC_3(VAR_6, VAR_8->name, VAR_8);
        FUNC_4(VAR_7, VAR_2);
    }

    VAR_7 = VAR_1;
finish:
    return VAR_7;
}
