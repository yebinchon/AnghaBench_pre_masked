
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef scalar_t__ kxld_size_t ;
typedef scalar_t__ kxld_addr_t ;
typedef int kern_return_t ;
struct TYPE_10__ {scalar_t__ base_addr; scalar_t__ size; } ;
struct TYPE_8__ {scalar_t__ nitems; } ;
struct TYPE_9__ {scalar_t__ base_addr; int vmsize; TYPE_1__ sects; } ;
typedef TYPE_2__ KXLDSeg ;
typedef TYPE_3__ KXLDSect ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;

kern_return_t
FUNC_3(KXLDSeg *VAR_3)
{
    kern_return_t VAR_4 = VAR_0;
    u_int VAR_5 = 0;
    KXLDSect *VAR_6 = ((void*)0);
    kxld_addr_t VAR_7 = 0;
    kxld_size_t VAR_8 = 0;
    if ((VAR_3->vmsize == 0) && (VAR_3->sects.nitems)) {
        for (VAR_5 = 0; VAR_5 < VAR_3->sects.nitems; ++VAR_5) {
            VAR_6 = FUNC_0(VAR_3, VAR_5);
            FUNC_2(VAR_6, VAR_2, VAR_4=VAR_0);
            if (VAR_6->base_addr > VAR_7) {
                VAR_7 = VAR_6->base_addr;
                VAR_8 = VAR_6->size;
            }
        }
        VAR_3->vmsize = FUNC_1(VAR_7 +
                                                 VAR_8 - VAR_3->base_addr);

    }

    VAR_4 = VAR_1;

finish:
    return VAR_4;
}
