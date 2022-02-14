
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * dev_id; int * handler; } ;
struct TYPE_3__ {int intr_cimr; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;

void
FUNC_0(int VAR_2)
{
 VAR_0[VAR_2].handler = ((void*)0);
 VAR_0[VAR_2].dev_id = ((void*)0);

 VAR_1->intr_cimr &= ~(1 << VAR_2);
}
