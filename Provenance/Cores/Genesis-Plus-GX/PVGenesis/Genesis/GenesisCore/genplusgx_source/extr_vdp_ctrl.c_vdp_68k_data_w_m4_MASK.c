
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint16 ;
struct TYPE_2__ {int cycles; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,unsigned int) ;
 int * VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int* VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int * VAR_11 ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_12)
{

  VAR_8 = 0;


  if (!(VAR_10 & 8) && (VAR_9[1] & 0x40))
  {

    FUNC_2(VAR_7.cycles);


    VAR_10 &= 0xFDFF;


    if (VAR_6 < 4)
    {

      VAR_6++;


      VAR_10 |= ((VAR_6 & 4) << 6);
    }
    else
    {

      VAR_4 += VAR_5;
      VAR_7.cycles = VAR_4;
    }
  }


  if (VAR_2 & 0x02)
  {

    int VAR_13 = VAR_0 & 0x1F;


    uint16 *VAR_14 = (uint16 *)&VAR_3[VAR_13 << 1];


    VAR_12 = ((VAR_12 & 0xE00) >> 3) | (VAR_12 & 0x3F);


    if (VAR_12 != *VAR_14)
    {

      *VAR_14 = VAR_12;


      FUNC_1(VAR_13, VAR_12);


      if (VAR_13 == (0x10 | (VAR_1 & 0x0F)))
      {
        FUNC_1(0x40, VAR_12);
      }
    }
  }
  else
  {

    int VAR_15 = ((VAR_0 << 1) & 0x3FC) | ((VAR_0 & 0x200) >> 8) | (VAR_0 & 0x3C00);


    uint16 *VAR_16 = (uint16 *)&VAR_11[VAR_15];


    if (VAR_0 & 1)
    {
      VAR_12 = ((VAR_12 >> 8) | (VAR_12 << 8)) & 0xFFFF;
    }


    if (VAR_12 != *VAR_16)
    {
      int VAR_17;


      *VAR_16 = VAR_12;


      FUNC_0 (VAR_15);
    }
  }


  VAR_0 += (VAR_9[15] + 1);
}
