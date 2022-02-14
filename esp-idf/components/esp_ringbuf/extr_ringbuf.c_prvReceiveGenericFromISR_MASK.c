
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int uxRingbufferFlags; scalar_t__ xItemsWaiting; int mux; void* (* pvGetItem ) (TYPE_1__*,scalar_t__*,size_t,size_t*) ;} ;
typedef TYPE_1__ Ringbuffer_t ;
typedef scalar_t__ BaseType_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 void* FUNC_5 (TYPE_1__*,scalar_t__*,size_t,size_t*) ;
 void* FUNC_6 (TYPE_1__*,scalar_t__*,size_t,size_t*) ;
 void* FUNC_7 (TYPE_1__*,scalar_t__*,size_t,size_t*) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static BaseType_t FUNC_9(Ringbuffer_t *VAR_4,
                                           void **VAR_5,
                                           void **VAR_6,
                                           size_t *VAR_7,
                                           size_t *VAR_8,
                                           size_t VAR_9)
{
    BaseType_t VAR_10 = VAR_0;
    BaseType_t VAR_11 = VAR_0;

    FUNC_1(&VAR_4->mux);
    if(FUNC_3(VAR_4) == VAR_1) {
        BaseType_t VAR_12;
        if (VAR_4->uxRingbufferFlags & VAR_3) {

            *VAR_5 = VAR_4->pvGetItem(VAR_4, ((void*)0), VAR_9, VAR_7);
        } else {

            *VAR_5 = VAR_4->pvGetItem(VAR_4, &VAR_12, 0, VAR_7);
        }

        if ((VAR_4->uxRingbufferFlags & VAR_2) && VAR_6 != ((void*)0) && VAR_8 != ((void*)0)) {
            if (VAR_12 == VAR_1) {
                *VAR_6 = VAR_4->pvGetItem(VAR_4, &VAR_12, 0, VAR_8);
                FUNC_0(*VAR_6 < *VAR_5);
                FUNC_0(VAR_12 == VAR_0);
            } else {
                *VAR_6 = ((void*)0);
            }
        }
        VAR_10 = VAR_1;
        if (VAR_4->xItemsWaiting > 0) {
            VAR_11 = VAR_1;
        }
    }
    FUNC_2(&VAR_4->mux);

    if (VAR_11 == VAR_1) {
        FUNC_8(FUNC_4(VAR_4), ((void*)0));
    }
    return VAR_10;
}
