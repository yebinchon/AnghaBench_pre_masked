
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int kern_return_t ;
struct TYPE_4__ {scalar_t__ maxitems; scalar_t__ pool_maxitems; int npools; int pools; int pool_capacity; } ;
typedef int KXLDArrayPool ;
typedef TYPE_1__ KXLDArray ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (int,int ,int ) ;

kern_return_t
FUNC_4(KXLDArray *VAR_4, u_int VAR_5)
{
    kern_return_t VAR_6 = VAR_0;
    KXLDArrayPool *VAR_7 = ((void*)0);



    while (VAR_5 > VAR_4->maxitems) {
        VAR_7 = FUNC_1(VAR_4->pool_capacity);
        FUNC_3(*VAR_7, VAR_3, VAR_6=VAR_0);

        FUNC_0(&VAR_4->pools, VAR_7, VAR_2);

        VAR_4->maxitems += VAR_4->pool_maxitems;
        VAR_4->npools += 1;
    }

    VAR_5 = FUNC_2(VAR_4, VAR_5);
    FUNC_3(VAR_5 == 0, VAR_3, VAR_6=VAR_0);

    VAR_6 = VAR_1;
finish:
    return VAR_6;
}
