
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int kern_return_t ;
struct TYPE_4__ {int sectnum; } ;
typedef int KXLDSymtabIterator ;
typedef int const KXLDSymtab ;
typedef TYPE_1__ KXLDSym ;
typedef int KXLDSect ;
typedef int KXLDArray ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*) ;
 int VAR_3 ;
 int * FUNC_1 (int const*,int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,int const*) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *,int const*,int ,int ) ;
 int FUNC_5 (int const*,int ,int ) ;

kern_return_t
FUNC_6(KXLDSymtab *VAR_5, const KXLDArray *VAR_6)
{
    kern_return_t VAR_7 = VAR_1;
    KXLDSymtabIterator VAR_8;
    KXLDSym *VAR_9 = ((void*)0);
    const KXLDSect *VAR_10 = ((void*)0);

    FUNC_0(VAR_5);
    FUNC_0(VAR_6);

    FUNC_4(&VAR_8, VAR_5, VAR_4, VAR_0);

    while ((VAR_9 = FUNC_3(&VAR_8))) {
        VAR_10 = FUNC_1(VAR_6, VAR_9->sectnum);
        FUNC_5(VAR_10, VAR_3, VAR_7=VAR_1);
        FUNC_2(VAR_9, VAR_10);
    }

    VAR_7 = VAR_2;

finish:

    return VAR_7;
}
