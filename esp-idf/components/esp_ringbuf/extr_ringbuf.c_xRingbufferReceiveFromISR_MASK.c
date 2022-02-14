
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Ringbuffer_t ;
typedef scalar_t__ RingbufHandle_t ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,void**,int *,size_t*,int *,int ) ;

void *FUNC_2(RingbufHandle_t VAR_1, size_t *VAR_2)
{

    Ringbuffer_t *VAR_3 = (Ringbuffer_t *)VAR_1;
    FUNC_0(VAR_3);


    void *VAR_4;
    size_t VAR_5;
    if (FUNC_1(VAR_3, &VAR_4, ((void*)0), &VAR_5, ((void*)0), 0) == VAR_0) {
        if (VAR_2 != ((void*)0)) {
            *VAR_2 = VAR_5;
        }
        return VAR_4;
    } else {
        return ((void*)0);
    }
}
