
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef scalar_t__ kxld_size_t ;
typedef int kern_return_t ;
struct TYPE_7__ {scalar_t__ nitems; } ;
struct TYPE_6__ {scalar_t__ address; } ;
typedef TYPE_1__ KXLDReloc ;
typedef TYPE_2__ KXLDArray ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_2__ const*,scalar_t__) ;

kern_return_t
FUNC_1(const KXLDArray *VAR_2,
    kxld_size_t VAR_3, u_int *VAR_4)
{
    kern_return_t VAR_5 = VAR_0;
    KXLDReloc *VAR_6 = ((void*)0);
    u_int VAR_7 = 0;

    for (VAR_7 = 0; VAR_7 < VAR_2->nitems; ++VAR_7) {
        VAR_6 = FUNC_0(VAR_2, VAR_7);
        if (VAR_6->address == VAR_3) break;
    }

    if (VAR_7 >= VAR_2->nitems) {
        VAR_5 = VAR_0;
        goto finish;
    }

    *VAR_4 = VAR_7;
    VAR_5 = VAR_1;

finish:
    return VAR_5;
}
