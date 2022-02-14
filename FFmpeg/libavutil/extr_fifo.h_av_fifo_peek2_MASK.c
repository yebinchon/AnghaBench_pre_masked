
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int * buffer; int * end; int * rptr; } ;
typedef TYPE_1__ AVFifoBuffer ;



__attribute__((used)) static inline uint8_t *FUNC_0(const AVFifoBuffer *VAR_0, int VAR_1)
{
    uint8_t *VAR_2 = VAR_0->rptr + VAR_1;
    if (VAR_2 >= VAR_0->end)
        VAR_2 = VAR_0->buffer + (VAR_2 - VAR_0->end);
    else if (VAR_2 < VAR_0->buffer)
        VAR_2 = VAR_0->end - (VAR_0->buffer - VAR_2);
    return VAR_2;
}
