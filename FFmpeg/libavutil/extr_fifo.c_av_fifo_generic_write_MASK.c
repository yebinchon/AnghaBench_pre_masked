
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int wndx; void* end; void* wptr; void* buffer; } ;
typedef TYPE_1__ AVFifoBuffer ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (void*,void*,int) ;

int FUNC_2(AVFifoBuffer *VAR_0, void *VAR_1, int VAR_2,
                          int (*VAR_3)(void *, void *, int))
{
    int VAR_4 = VAR_2;
    uint32_t VAR_5= VAR_0->wndx;
    uint8_t *VAR_6= VAR_0->wptr;

    do {
        int VAR_7 = FUNC_0(VAR_0->end - VAR_6, VAR_2);
        if (VAR_3) {
            VAR_7 = VAR_3(VAR_1, VAR_6, VAR_7);
            if (VAR_7 <= 0)
                break;
        } else {
            FUNC_1(VAR_6, VAR_1, VAR_7);
            VAR_1 = (uint8_t *)VAR_1 + VAR_7;
        }

        VAR_6 += VAR_7;
        if (VAR_6 >= VAR_0->end)
            VAR_6 = VAR_0->buffer;
        VAR_5 += VAR_7;
        VAR_2 -= VAR_7;
    } while (VAR_2 > 0);
    VAR_0->wndx= VAR_5;
    VAR_0->wptr= VAR_6;
    return VAR_4 - VAR_2;
}
