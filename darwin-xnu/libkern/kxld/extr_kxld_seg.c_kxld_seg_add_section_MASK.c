
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int kern_return_t ;
struct TYPE_9__ {scalar_t__ nitems; } ;
struct TYPE_8__ {TYPE_6__ sects; int segname; } ;
typedef TYPE_1__ KXLDSeg ;
typedef TYPE_1__ KXLDSect ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 TYPE_1__** FUNC_1 (TYPE_6__*,scalar_t__) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

kern_return_t
FUNC_4(KXLDSeg *VAR_3, KXLDSect *VAR_4)
{
    kern_return_t VAR_5 = VAR_0;
    KXLDSect **VAR_6 = ((void*)0);
    u_int VAR_7;

    FUNC_0(VAR_3);
    FUNC_0(VAR_4);
    FUNC_2(FUNC_3(VAR_3->segname, VAR_4->segname, sizeof(VAR_3->segname)),
        VAR_2, VAR_5=VAR_0);



    for (VAR_7 = 0; VAR_7 < VAR_3->sects.nitems; ++VAR_7) {
        VAR_6 = FUNC_1(&VAR_3->sects, VAR_7);
        if (((void*)0) == *VAR_6) {
            *VAR_6 = VAR_4;
            break;
        }
    }
    FUNC_2(VAR_7 < VAR_3->sects.nitems, VAR_2, VAR_5=VAR_0);

    VAR_5 = VAR_1;

finish:

    return VAR_5;
}
