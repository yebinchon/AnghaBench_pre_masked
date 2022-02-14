
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int romsize; scalar_t__ rom; } ;
struct TYPE_3__ {int addr; unsigned short data_old; int active; int name; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*) ;

void FUNC_1(void)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
 {
  VAR_2[VAR_3].addr &= ~1;
  if (VAR_2[VAR_3].addr < VAR_0.romsize)
   VAR_2[VAR_3].data_old = *(unsigned short *)(VAR_0.rom + VAR_2[VAR_3].addr);
  if (FUNC_0(VAR_2[VAR_3].name, "AUTO"))
   VAR_2[VAR_3].active = 1;
 }
}
