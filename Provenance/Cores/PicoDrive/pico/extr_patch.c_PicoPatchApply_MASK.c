
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int romsize; scalar_t__ rom; } ;
struct TYPE_3__ {unsigned int addr; unsigned short data; unsigned short data_old; scalar_t__ active; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void FUNC_0(void)
{
 int VAR_3, VAR_4;
 unsigned int VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
 {
  VAR_5 = VAR_2[VAR_3].addr;
  if (VAR_5 < VAR_0.romsize)
  {
   if (VAR_2[VAR_3].active)
    *(unsigned short *)(VAR_0.rom + VAR_5) = VAR_2[VAR_3].data;
   else {

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
     if (VAR_2[VAR_4].addr == VAR_5) break;
    if (VAR_4 == VAR_3)
     *(unsigned short *)(VAR_0.rom + VAR_5) = VAR_2[VAR_3].data_old;
   }


  }
  else
  {

  }
 }
}
