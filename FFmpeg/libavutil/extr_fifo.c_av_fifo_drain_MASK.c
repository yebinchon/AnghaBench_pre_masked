
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rptr; scalar_t__ end; scalar_t__ buffer; int rndx; } ;
typedef TYPE_1__ AVFifoBuffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(AVFifoBuffer *VAR_0, int VAR_1)
{
    FUNC_0(FUNC_1(VAR_0) >= VAR_1);
    VAR_0->rptr += VAR_1;
    if (VAR_0->rptr >= VAR_0->end)
        VAR_0->rptr -= VAR_0->end - VAR_0->buffer;
    VAR_0->rndx += VAR_1;
}
