
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int kern_return_t ;
struct TYPE_4__ {int link_addr; int * name; int * alias; } ;
typedef int KXLDSymtabIterator ;
typedef int KXLDSymtab ;
typedef TYPE_1__ KXLDSym ;
typedef int KXLDObject ;
typedef int KXLDDict ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *,TYPE_1__*) ;
 int FUNC_2 (int ,int ,char*,int ,int ,int *,...) ;
 int FUNC_3 (int const*) ;
 int * FUNC_4 (int const*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* FUNC_5 (int const*,int *) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int *,int const*,int ,int ) ;
 int FUNC_8 (int ,int ) ;

kern_return_t
FUNC_9(const KXLDObject *VAR_10,
    const KXLDObject *VAR_11, KXLDDict *VAR_12,
    KXLDDict *VAR_13, KXLDDict *VAR_14)
{
    kern_return_t VAR_15 = VAR_1;
    KXLDSymtabIterator VAR_16;
    const KXLDSymtab *VAR_17 = ((void*)0);
    const KXLDSymtab *VAR_18 = ((void*)0);
    KXLDSym *VAR_19 = ((void*)0);
    const KXLDSym *VAR_20 = ((void*)0);

    FUNC_0(VAR_10);
    FUNC_0(VAR_11);

    VAR_17 = FUNC_4(VAR_10);
    VAR_18 = FUNC_4(VAR_11);

    if (VAR_12) {

        (void) FUNC_7(&VAR_16, VAR_18,
            VAR_9, VAR_0);
        while ((VAR_20 = FUNC_6(&VAR_16))) {
            VAR_19 = FUNC_5(VAR_17,
                VAR_20->name);
            if (!VAR_19) {
                FUNC_2(VAR_4, VAR_5,
                    "In interface %s of %s, couldn't find symbol %s\n",
                    FUNC_3(VAR_11), FUNC_3(VAR_10),
                    VAR_20->name);
                continue;
            }

            VAR_15 = FUNC_1(VAR_12,
                VAR_19->name, VAR_19);
            FUNC_8(VAR_15, VAR_3);
        }


        (void) FUNC_7(&VAR_16, VAR_18,
            VAR_7, VAR_0);
        while ((VAR_20 = FUNC_6(&VAR_16))) {
            VAR_19 = FUNC_5(VAR_17,
                VAR_20->alias);
            if (!VAR_19) {
                FUNC_2(VAR_4, VAR_5,
                    "In interface %s of %s, couldn't find indirect symbol %s (%s)\n",
                    FUNC_3(VAR_11), FUNC_3(VAR_10),
                    VAR_20->alias, VAR_20->name);
                continue;
            }

            VAR_15 = FUNC_1(VAR_12,
                VAR_20->name, VAR_19);
            FUNC_8(VAR_15, VAR_3);
        }
    }


    if (VAR_13) {
        (void) FUNC_7(&VAR_16, VAR_18,
            VAR_8, VAR_0);
        while ((VAR_19 = FUNC_6(&VAR_16))) {
            VAR_15 = FUNC_1(VAR_13,
                VAR_19->name, VAR_19);
            FUNC_8(VAR_15, VAR_3);
        }
    }


    if (VAR_14) {
        (void) FUNC_7(&VAR_16, VAR_17,
            VAR_6, VAR_0);
        while ((VAR_19 = FUNC_6(&VAR_16))) {
            VAR_15 = FUNC_1(VAR_14,
                &VAR_19->link_addr, VAR_19);
            FUNC_8(VAR_15, VAR_3);
        }
    }

    VAR_15 = VAR_2;
finish:
    return VAR_15;
}
