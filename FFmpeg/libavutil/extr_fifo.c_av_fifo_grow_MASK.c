
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int end; unsigned int buffer; } ;
typedef TYPE_1__ AVFifoBuffer ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

int FUNC_4(AVFifoBuffer *VAR_1, unsigned int VAR_2)
{
    unsigned int VAR_3 = VAR_1->end - VAR_1->buffer;
    if(VAR_2 + (unsigned)FUNC_3(VAR_1) < VAR_2)
        return FUNC_0(VAR_0);

    VAR_2 += FUNC_3(VAR_1);

    if (VAR_3 < VAR_2)
        return FUNC_2(VAR_1, FUNC_1(VAR_2, 2*VAR_3));
    return 0;
}
