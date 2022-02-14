
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char forwardmove; char sidemove; unsigned char angleturn; unsigned char buttons; } ;
typedef TYPE_1__ ticcmd_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__* VAR_1 ;

void FUNC_1 (ticcmd_t* VAR_2)
{
    if (*VAR_1 == VAR_0)
    {

 FUNC_0 ();
 return;
    }
    VAR_2->forwardmove = ((signed char)*VAR_1++);
    VAR_2->sidemove = ((signed char)*VAR_1++);
    VAR_2->angleturn = ((unsigned char)*VAR_1++)<<8;
    VAR_2->buttons = (unsigned char)*VAR_1++;
}
