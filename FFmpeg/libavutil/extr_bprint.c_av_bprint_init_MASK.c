
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* reserved_internal_buffer; char* str; unsigned int size; unsigned int size_max; scalar_t__ len; } ;
typedef TYPE_1__ AVBPrint ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (TYPE_1__*,unsigned int) ;

void FUNC_2(AVBPrint *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
    unsigned VAR_3 = (char *)VAR_0 + sizeof(*VAR_0) -
                         VAR_0->reserved_internal_buffer;

    if (VAR_2 == 1)
        VAR_2 = VAR_3;
    VAR_0->str = VAR_0->reserved_internal_buffer;
    VAR_0->len = 0;
    VAR_0->size = FUNC_0(VAR_3, VAR_2);
    VAR_0->size_max = VAR_2;
    *VAR_0->str = 0;
    if (VAR_1 > VAR_0->size)
        FUNC_1(VAR_0, VAR_1 - 1);
}
