
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int used; int ddr; } ;


 int ** VAR_0 ;
 TYPE_1__* VAR_1 ;

int FUNC_0(int VAR_2)
{
 int VAR_3 = (VAR_2 >> 8) & 0xff;
 int VAR_4 = VAR_2 & 0xff;

 if (VAR_0[VAR_3] == ((void*)0))
  return 0;
 if (VAR_1[VAR_3].used & VAR_4) {
  return (VAR_1[VAR_3].ddr & VAR_4) != 0;
 } else
  return -1;
}
