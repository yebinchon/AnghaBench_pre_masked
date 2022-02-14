
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int kern_return_t ;
struct TYPE_5__ {int link_addr; int * name; } ;
typedef int KXLDSymtabIterator ;
typedef TYPE_1__ KXLDSym ;
typedef int KXLDObject ;
typedef int KXLDDict ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,TYPE_1__*) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_4 ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;

kern_return_t
FUNC_6(const KXLDObject *VAR_5, KXLDDict *VAR_6,
    KXLDDict *VAR_7)
{
    kern_return_t VAR_8 = VAR_1;
    KXLDSymtabIterator VAR_9;
    KXLDSym *VAR_10 = ((void*)0);

    (void) FUNC_4(&VAR_9, FUNC_1(VAR_5),
        VAR_4, VAR_0);
    while ((VAR_10 = FUNC_3(&VAR_9))) {
        if (VAR_6) {
            VAR_8 = FUNC_0(VAR_6, VAR_10->name, VAR_10);
            FUNC_5(VAR_8, VAR_3);
        }

        if (FUNC_2(VAR_10) && VAR_7) {
            VAR_8 = FUNC_0(VAR_7,
                &VAR_10->link_addr, VAR_10);
            FUNC_5(VAR_8, VAR_3);
        }
    }

    VAR_8 = VAR_2;
finish:
    return VAR_8;
}
