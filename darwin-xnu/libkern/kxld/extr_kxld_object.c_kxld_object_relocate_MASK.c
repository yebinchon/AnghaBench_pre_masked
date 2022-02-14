
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int kxld_addr_t ;
typedef int kern_return_t ;
struct TYPE_6__ {scalar_t__ nitems; } ;
struct TYPE_5__ {int sects; int symtab; TYPE_3__ segs; int link_addr; } ;
typedef int KXLDSeg ;
typedef TYPE_1__ KXLDObject ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int * FUNC_1 (TYPE_3__*,scalar_t__) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ) ;

kern_return_t
FUNC_5(KXLDObject *VAR_3, kxld_addr_t VAR_4)
{
    kern_return_t VAR_5 = VAR_0;
    KXLDSeg *VAR_6 = ((void*)0);
    u_int VAR_7 = 0;

    FUNC_0(VAR_3);

    VAR_3->link_addr = VAR_4;


    for (VAR_7 = 0; VAR_7 < VAR_3->segs.nitems; ++VAR_7) {
        VAR_6 = FUNC_1(&VAR_3->segs, VAR_7);
        FUNC_2(VAR_6, VAR_4);
    }


    VAR_5 = FUNC_3(VAR_3->symtab, &VAR_3->sects);
    FUNC_4(VAR_5, VAR_2);

    VAR_5 = VAR_1;
finish:
   return VAR_5;
}
