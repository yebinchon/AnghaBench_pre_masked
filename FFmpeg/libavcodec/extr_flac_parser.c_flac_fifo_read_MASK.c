
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int * end; int * buffer; int * rptr; } ;
struct TYPE_4__ {TYPE_2__* fifo_buf; } ;
typedef TYPE_1__ FLACParseContext ;
typedef TYPE_2__ AVFifoBuffer ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static uint8_t *FUNC_1(FLACParseContext *VAR_0, int VAR_1, int *VAR_2)
{
    AVFifoBuffer *VAR_3 = VAR_0->fifo_buf;
    uint8_t *VAR_4 = VAR_3->rptr + VAR_1;

    if (VAR_4 >= VAR_3->end)
        VAR_4 -= VAR_3->end - VAR_3->buffer;
    *VAR_2 = FUNC_0(*VAR_2, VAR_3->end - VAR_4);
    return VAR_4;
}
