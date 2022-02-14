
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {int romsize; scalar_t__ rom; } ;
struct TYPE_3__ {int address; scalar_t__ old; scalar_t__ data; scalar_t__* prev; scalar_t__ enable; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int* VAR_4 ;
 TYPE_1__* VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__** VAR_10 ;

__attribute__((used)) static void FUNC_0(void)
{
  u8 *VAR_11;


  VAR_7 = VAR_6 = 0;

  int VAR_12;
  for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
  {
    if (VAR_5[VAR_12].enable)
    {
      if (VAR_5[VAR_12].address < VAR_3.romsize)
      {
        if ((VAR_9 & VAR_2) == VAR_1)
        {

          VAR_5[VAR_12].old = *(u16 *)(VAR_3.rom + (VAR_5[VAR_12].address & 0xFFFFFE));
          *(u16 *)(VAR_3.rom + (VAR_5[VAR_12].address & 0xFFFFFE)) = VAR_5[VAR_12].data;
        }
        else
        {

          VAR_7++;
          VAR_4[VAR_0 - VAR_7] = VAR_12;


          VAR_11 = &VAR_10[(VAR_5[VAR_12].address) >> 10][VAR_5[VAR_12].address & 0x03FF];


          if (((u8)VAR_5[VAR_12].old) == *VAR_11)
          {

            *VAR_11 = VAR_5[VAR_12].data;


            VAR_5[VAR_12].prev = VAR_11;
          }
          else
          {

            VAR_5[VAR_12].prev = ((void*)0);
          }
        }
      }
      else if (VAR_5[VAR_12].address >= 0xFF0000)
      {

        VAR_4[VAR_6++] = VAR_12;
      }
    }
  }
}
