
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cycles; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int* VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_10)
{

  VAR_7 = 0;


  if (!(VAR_9 & 8) && (VAR_8[1] & 0x40))
  {

    FUNC_2(VAR_6.cycles);


    VAR_9 &= 0xFDFF;


    if (VAR_5 < 4)
    {

      VAR_5++;


      VAR_9 |= ((VAR_5 & 4) << 6);
    }
    else
    {

      VAR_3 += VAR_4;
      VAR_6.cycles = VAR_3;
    }
  }


  FUNC_0(VAR_10);


  if (VAR_2 & 0x100)
  {

    VAR_2 = VAR_10 >> 8;


    VAR_0 = (VAR_8[20] << 8) | VAR_8[19];


    if (!VAR_0)
    {
      VAR_0 = 0x10000;
    }


    VAR_1 = 2;
    FUNC_1(VAR_6.cycles);
  }
}
