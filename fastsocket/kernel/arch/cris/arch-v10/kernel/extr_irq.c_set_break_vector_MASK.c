
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ irqvectptr ;
struct TYPE_2__ {int * v; } ;


 TYPE_1__* VAR_0 ;

void
FUNC_0(int VAR_1, irqvectptr VAR_2)
{
 unsigned short *VAR_3 = (unsigned short *)&VAR_0->v[VAR_1*2];
 unsigned long *VAR_4 = (unsigned long *)(VAR_3 + 1);



 *VAR_3 = 0x0d3f;
 *VAR_4 = (unsigned long)VAR_2;


}
