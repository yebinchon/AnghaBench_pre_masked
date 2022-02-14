
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ TickType_t ;
struct TYPE_8__ {int uxRingbufferFlags; scalar_t__ xItemsWaiting; int mux; void* (* pvGetItem ) (TYPE_1__*,scalar_t__*,size_t,size_t*) ;} ;
typedef TYPE_1__ Ringbuffer_t ;
typedef scalar_t__ BaseType_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*) ;
 void* FUNC_5 (TYPE_1__*,scalar_t__*,size_t,size_t*) ;
 void* FUNC_6 (TYPE_1__*,scalar_t__*,size_t,size_t*) ;
 void* FUNC_7 (TYPE_1__*,scalar_t__*,size_t,size_t*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;
 scalar_t__ FUNC_10 () ;

__attribute__((used)) static BaseType_t FUNC_11(Ringbuffer_t *VAR_5,
                                    void **VAR_6,
                                    void **VAR_7,
                                    size_t *VAR_8,
                                    size_t *VAR_9,
                                    size_t VAR_10,
                                    TickType_t VAR_11)
{
    BaseType_t VAR_12 = VAR_0;
    BaseType_t VAR_13 = VAR_0;
    TickType_t VAR_14 = FUNC_10() + VAR_11;
    TickType_t VAR_15 = VAR_11;
    while (VAR_15 <= VAR_11) {

        if (FUNC_9(FUNC_4(VAR_5), VAR_15) != VAR_1) {
            VAR_12 = VAR_0;
            break;
        }


        FUNC_1(&VAR_5->mux);
        if (FUNC_3(VAR_5) == VAR_1) {

            BaseType_t VAR_16;
            if (VAR_5->uxRingbufferFlags & VAR_4) {

                *VAR_6 = VAR_5->pvGetItem(VAR_5, ((void*)0), VAR_10, VAR_8);
            } else {

                *VAR_6 = VAR_5->pvGetItem(VAR_5, &VAR_16, 0, VAR_8);
            }

            if ((VAR_5->uxRingbufferFlags & VAR_3) && (VAR_7 != ((void*)0)) && (VAR_9 != ((void*)0))) {
                if (VAR_16 == VAR_1) {
                    *VAR_7 = VAR_5->pvGetItem(VAR_5, &VAR_16, 0, VAR_9);
                    FUNC_0(*VAR_7 < *VAR_6);
                    FUNC_0(VAR_16 == VAR_0);
                } else {
                    *VAR_7 = ((void*)0);
                }
            }
            VAR_12 = VAR_1;
            if (VAR_5->xItemsWaiting > 0) {
                VAR_13 = VAR_1;
            }
            FUNC_2(&VAR_5->mux);
            break;
        }

        if (VAR_11 != VAR_2) {
            VAR_15 = VAR_14 - FUNC_10();
        }
        FUNC_2(&VAR_5->mux);




    }

    if (VAR_13 == VAR_1) {
        FUNC_8(FUNC_4(VAR_5));
    }
    return VAR_12;
}
