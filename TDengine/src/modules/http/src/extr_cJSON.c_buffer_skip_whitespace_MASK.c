
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ offset; scalar_t__ length; int * content; } ;
typedef TYPE_1__ parse_buffer ;


 int* FUNC_0 (TYPE_1__* const) ;
 scalar_t__ FUNC_1 (TYPE_1__* const,int ) ;

__attribute__((used)) static parse_buffer *FUNC_2(parse_buffer * const VAR_0)
{
    if ((VAR_0 == ((void*)0)) || (VAR_0->content == ((void*)0)))
    {
        return ((void*)0);
    }

    while (FUNC_1(VAR_0, 0) && (FUNC_0(VAR_0)[0] <= 32))
    {
       VAR_0->offset++;
    }

    if (VAR_0->offset == VAR_0->length)
    {
        VAR_0->offset--;
    }

    return VAR_0;
}
