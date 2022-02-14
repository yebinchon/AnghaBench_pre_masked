
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int kern_return_t ;
struct TYPE_8__ {scalar_t__ nitems; } ;
struct TYPE_7__ {scalar_t__ vtables_created; TYPE_2__ vtables; int kext; } ;
typedef int KXLDVTable ;
typedef int KXLDSymtabIterator ;
typedef int KXLDSymtab ;
typedef int KXLDSym ;
typedef TYPE_1__ KXLDKext ;
typedef int KXLDDict ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int const*,int *,int **,int **) ;
 int * FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int * FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int const*,int ,int ) ;
 int FUNC_9 (int *,int *,int ,int const*) ;
 int FUNC_10 (int,int ,int ) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static kern_return_t
FUNC_12(KXLDKext *VAR_7, const KXLDDict *VAR_8,
    const KXLDDict *VAR_9)
{
    kern_return_t VAR_10 = VAR_1;
    const KXLDSymtab *VAR_11 = ((void*)0);
    KXLDSymtabIterator VAR_12;
    KXLDSym *VAR_13 = ((void*)0);
    KXLDSym *VAR_14 = ((void*)0);
    KXLDSym *VAR_15 = ((void*)0);
    KXLDVTable *VAR_16 = ((void*)0);
    KXLDVTable *VAR_17 = ((void*)0);
    u_int VAR_18 = 0;
    u_int VAR_19 = 0;

    if (VAR_7->vtables_created) {
        VAR_10 = VAR_2;
        goto finish;
    }

    VAR_11 = FUNC_4(VAR_7->kext);

    if (FUNC_5(VAR_7->kext)) {

        FUNC_8(&VAR_12, VAR_11, VAR_6, VAR_0);
        VAR_19 = FUNC_7(&VAR_12);
    } else {





        FUNC_8(&VAR_12, VAR_11,
            VAR_5, VAR_0);
        VAR_19 = FUNC_7(&VAR_12) * 2;
    }

    VAR_10 = FUNC_2(&VAR_7->vtables, sizeof(KXLDVTable), VAR_19);
    FUNC_11(VAR_10, VAR_4);

    while ((VAR_13 = FUNC_6(&VAR_12))) {
        if (FUNC_5(VAR_7->kext)) {
            VAR_14 = VAR_13;
            VAR_15 = ((void*)0);
            VAR_17 = ((void*)0);
        } else {
            VAR_10 = FUNC_0(VAR_7, VAR_9, VAR_13,
                &VAR_14, &VAR_15);
            FUNC_11(VAR_10, VAR_4);
        }

        VAR_16 = FUNC_1(&VAR_7->vtables, VAR_18++);
        VAR_10 = FUNC_9(VAR_16, VAR_14, VAR_7->kext,
            VAR_8);
        FUNC_11(VAR_10, VAR_4);





        if (!FUNC_5(VAR_7->kext)) {
            if (VAR_15) {
                VAR_17 = FUNC_1(&VAR_7->vtables, VAR_18++);
                VAR_10 = FUNC_9(VAR_17, VAR_15,
                    VAR_7->kext, VAR_8);
                FUNC_11(VAR_10, VAR_4);
            } else {
                FUNC_3(&VAR_7->vtables, --VAR_19);
                VAR_17 = ((void*)0);
            }
        }
    }
    FUNC_10(VAR_18 == VAR_7->vtables.nitems, VAR_4,
        VAR_10=VAR_1);

    VAR_7->vtables_created = VAR_3;
    VAR_10 = VAR_2;
finish:
    return VAR_10;
}
