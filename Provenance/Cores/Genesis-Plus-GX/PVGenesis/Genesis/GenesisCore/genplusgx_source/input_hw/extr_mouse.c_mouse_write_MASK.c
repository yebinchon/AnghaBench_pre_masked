
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char State; int Counter; int Wait; } ;


 TYPE_1__ VAR_0 ;

void FUNC_0(unsigned char VAR_1, unsigned char VAR_2)
{

  VAR_1 = (VAR_0.State & ~VAR_2) | (VAR_1 & VAR_2);


  if ((VAR_0.State ^ VAR_1) & 0x40)
  {

    VAR_0.Counter = 1 - ((VAR_1 & 0x40) >> 6);
  }


  if ((VAR_0.State ^ VAR_1) & 0x20)
  {

    if ((VAR_0.Counter > 0) && (VAR_0.Counter < 10))
    {

      VAR_0.Counter++;
    }


    VAR_0.Wait = 1;
  }


  VAR_0.State = VAR_1;
}
