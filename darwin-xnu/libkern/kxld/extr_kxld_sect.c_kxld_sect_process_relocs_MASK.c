
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int kern_return_t ;
struct TYPE_6__ {scalar_t__ nitems; } ;
struct TYPE_5__ {TYPE_4__ relocs; } ;
typedef TYPE_1__ KXLDSect ;
typedef int KXLDRelocator ;
typedef int KXLDReloc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (TYPE_4__*,scalar_t__) ;
 int FUNC_1 (int *,int *,TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;

kern_return_t
FUNC_3(KXLDSect *VAR_3, KXLDRelocator *VAR_4)
{
    kern_return_t VAR_5 = VAR_0;
    KXLDReloc *VAR_6 = ((void*)0);
    u_int VAR_7 = 0;

    for (VAR_7 = 0; VAR_7 < VAR_3->relocs.nitems; ++VAR_7) {
        VAR_6 = FUNC_0(&VAR_3->relocs, VAR_7);
        VAR_5 = FUNC_1(VAR_4, VAR_6, VAR_3);
        FUNC_2(VAR_5, VAR_2);
    }

    VAR_5 = VAR_1;
finish:
    return VAR_5;
}
