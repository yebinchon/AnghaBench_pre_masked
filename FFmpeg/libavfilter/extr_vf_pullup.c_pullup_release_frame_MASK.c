
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; int parity; int lock; scalar_t__ buffer; scalar_t__* ofields; scalar_t__* ifields; } ;
typedef TYPE_1__ PullupFrame ;


 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(PullupFrame *VAR_0)
{
    int VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->length; VAR_1++)
        FUNC_0(VAR_0->ifields[VAR_1], VAR_0->parity ^ (VAR_1 & 1));

    FUNC_0(VAR_0->ofields[0], 0);
    FUNC_0(VAR_0->ofields[1], 1);

    if (VAR_0->buffer)
        FUNC_0(VAR_0->buffer, 2);
    VAR_0->lock--;
}
