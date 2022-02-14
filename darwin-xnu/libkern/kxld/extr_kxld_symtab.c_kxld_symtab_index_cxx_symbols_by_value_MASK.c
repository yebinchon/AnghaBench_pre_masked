
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int ;
typedef int kern_return_t ;
struct TYPE_9__ {int base_addr; } ;
struct TYPE_8__ {scalar_t__ cxx_index_initialized; int cxx_index; } ;
typedef int KXLDSymtabIterator ;
typedef TYPE_1__ KXLDSymtab ;
typedef TYPE_2__ KXLDSym ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *,int *,TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_7 ;

kern_return_t
FUNC_7(KXLDSymtab *VAR_8)
{
    kern_return_t VAR_9 = VAR_1;
    KXLDSymtabIterator VAR_10;
    KXLDSym *VAR_11 = ((void*)0);
    u_int VAR_12 = 0;

    FUNC_0(VAR_8);

    if (VAR_8->cxx_index_initialized) {
        VAR_9 = VAR_2;
        goto finish;
    }


    FUNC_5(&VAR_10, VAR_8, VAR_7, VAR_0);
    VAR_12 = FUNC_4(&VAR_10);


    VAR_9 = FUNC_1(&VAR_8->cxx_index, VAR_6,
        VAR_5, VAR_12);
    FUNC_6(VAR_9, VAR_4);


    while ((VAR_11 = FUNC_3(&VAR_10))) {
        VAR_9 = FUNC_2(&VAR_8->cxx_index, &VAR_11->base_addr, VAR_11);
        FUNC_6(VAR_9, VAR_4);
    }


    VAR_8->cxx_index_initialized = VAR_3;
    VAR_9 = VAR_2;
finish:
    return VAR_9;
}
