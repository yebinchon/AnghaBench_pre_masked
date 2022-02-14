
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; int portalflood; int portalvis; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

void FUNC_0(void)
{
 int VAR_3;


 for (VAR_3=0 ; VAR_3<VAR_0*2 ; VAR_3++)
 {
  VAR_1[VAR_3].portalvis = VAR_1[VAR_3].portalflood;
  VAR_1[VAR_3].status = VAR_2;
 }
}
