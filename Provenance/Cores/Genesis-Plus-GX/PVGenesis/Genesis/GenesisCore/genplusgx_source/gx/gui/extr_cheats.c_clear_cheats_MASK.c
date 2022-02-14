
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int romsize; scalar_t__ rom; } ;
struct TYPE_3__ {int address; int * prev; int old; scalar_t__ enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(void)
{
  int VAR_6 = VAR_4;


  while (VAR_6 > 0)
  {
    if (VAR_3[VAR_6-1].enable)
    {
      if (VAR_3[VAR_6-1].address < VAR_2.romsize)
      {
        if ((VAR_5 & VAR_1) == VAR_0)
        {

          *(u16 *)(VAR_2.rom + (VAR_3[VAR_6-1].address & 0xFFFFFE)) = VAR_3[VAR_6-1].old;
        }
        else
        {

          if (VAR_3[VAR_6-1].prev != ((void*)0))
          {

            *VAR_3[VAR_6-1].prev = VAR_3[VAR_6-1].old;


            VAR_3[VAR_6-1].prev = ((void*)0);
          }
        }
      }
    }

    VAR_6--;
  }
}
