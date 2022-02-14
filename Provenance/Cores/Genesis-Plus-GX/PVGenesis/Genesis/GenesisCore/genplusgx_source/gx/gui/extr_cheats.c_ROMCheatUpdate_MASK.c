
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__* prev; scalar_t__ old; int address; scalar_t__ data; } ;


 int VAR_0 ;
 int* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 scalar_t__** VAR_4 ;

void FUNC_0(void)
{
  int VAR_5, VAR_6 = VAR_3;
  u8 *VAR_7;

  while (VAR_6)
  {

    VAR_5 = VAR_1[VAR_0 - VAR_6];


    if (VAR_2[VAR_5].prev != ((void*)0))
    {

      *VAR_2[VAR_5].prev = VAR_2[VAR_5].old;


      VAR_2[VAR_5].prev = ((void*)0);
    }


    VAR_7 = &VAR_4[(VAR_2[VAR_5].address) >> 10][VAR_2[VAR_5].address & 0x03FF];


    if (((u8)VAR_2[VAR_5].old) == *VAR_7)
    {

      *VAR_7 = VAR_2[VAR_5].data;


      VAR_2[VAR_5].prev = VAR_7;
    }


    VAR_6--;
  }
}
