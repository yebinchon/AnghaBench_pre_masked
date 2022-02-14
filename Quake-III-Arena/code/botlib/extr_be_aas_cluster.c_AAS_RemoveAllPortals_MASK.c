
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int numareas; TYPE_1__* areasettings; } ;
struct TYPE_3__ {int contents; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

void FUNC_0(void)
{
 int VAR_2;

 for (VAR_2 = 1; VAR_2 < VAR_1.numareas; VAR_2++)
 {
  VAR_1.areasettings[VAR_2].contents &= ~VAR_0;
 }
}
