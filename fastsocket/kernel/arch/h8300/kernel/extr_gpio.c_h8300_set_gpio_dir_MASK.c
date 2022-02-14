
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int used; int ddr; } ;


 int** VAR_0 ;
 TYPE_1__* VAR_1 ;

int FUNC_0(int VAR_2,int VAR_3)
{
 int VAR_4 = (VAR_2 >> 8) & 0xff;
 int VAR_5 = VAR_2 & 0xff;

 if (VAR_0[VAR_4] == ((void*)0))
  return 0;
 if (VAR_1[VAR_4].used & VAR_5) {
  if (VAR_3)
   VAR_1[VAR_4].ddr |= VAR_5;
  else
   VAR_1[VAR_4].ddr &= ~VAR_5;
  *VAR_0[VAR_4] = VAR_1[VAR_4].ddr;
  return 1;
 } else
  return 0;
}
