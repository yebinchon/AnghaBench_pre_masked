
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int x96_rand; } ;
typedef TYPE_1__ DCACoreDecoder ;



__attribute__((used)) static int FUNC_0(DCACoreDecoder *VAR_0)
{
    VAR_0->x96_rand = 1103515245U * VAR_0->x96_rand + 12345U;
    return (VAR_0->x96_rand & 0x7fffffff) - 0x40000000;
}
