
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
typedef TYPE_1__ Conn ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(Conn *VAR_2)
{
    if (VAR_2->type & VAR_0) return;
    VAR_2->type |= VAR_0;
    VAR_1++;
}
