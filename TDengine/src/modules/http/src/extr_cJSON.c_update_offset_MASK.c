
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* buffer; int offset; } ;
typedef TYPE_1__ printbuffer ;


 int FUNC_0 (char const*) ;

__attribute__((used)) static void FUNC_1(printbuffer * const VAR_0)
{
    const unsigned char *VAR_1 = ((void*)0);
    if ((VAR_0 == ((void*)0)) || (VAR_0->buffer == ((void*)0)))
    {
        return;
    }
    VAR_1 = VAR_0->buffer + VAR_0->offset;

    VAR_0->offset += FUNC_0((const char*)VAR_1);
}
