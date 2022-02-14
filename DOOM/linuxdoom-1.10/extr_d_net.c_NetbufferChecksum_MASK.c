
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int retransmitfrom; } ;
typedef TYPE_1__ doomdata_t ;
struct TYPE_4__ {int retransmitfrom; } ;


 unsigned int VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__* VAR_1 ;

unsigned FUNC_1 (void)
{
    unsigned VAR_2;
    int VAR_3,VAR_4;

    VAR_2 = 0x1234567;






    VAR_4 = (FUNC_0 () - (int)&(((doomdata_t *)0)->retransmitfrom))/4;
    for (VAR_3=0 ; VAR_3<VAR_4 ; VAR_3++)
 VAR_2 += ((unsigned *)&VAR_1->retransmitfrom)[VAR_3] * (VAR_3+1);

    return VAR_2 & VAR_0;
}
