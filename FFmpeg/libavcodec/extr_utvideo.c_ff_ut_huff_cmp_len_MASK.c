
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int sym; } ;
typedef TYPE_1__ HuffEntry ;



int FUNC_0(const void *VAR_0, const void *VAR_1)
{
    const HuffEntry *VAR_2 = VAR_0, *VAR_3 = VAR_1;
    return (VAR_2->len - VAR_3->len)*256 + VAR_2->sym - VAR_3->sym;
}
