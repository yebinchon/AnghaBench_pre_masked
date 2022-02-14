
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tickat; } ;
typedef TYPE_1__ Conn ;



int
FUNC_0(void *VAR_0, void *VAR_1)
{
    Conn *VAR_2 = (Conn *)VAR_0;
    Conn *VAR_3 = (Conn *)VAR_1;
    return VAR_2->tickat < VAR_3->tickat;
}
