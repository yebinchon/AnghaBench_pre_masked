
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_2__ {int cycles; } ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,unsigned int) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,unsigned int) ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ) ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_16)
{

  VAR_8 = 0;


  switch (VAR_3 & 0x0F)
  {
    case 0x01:
    {

      int VAR_17 = VAR_1 ^ 1;


      if ((VAR_17 & VAR_12) == VAR_13)
      {

        FUNC_2(VAR_10, VAR_17 & VAR_11, VAR_16);
      }


      if (VAR_16 != FUNC_1(VAR_14, VAR_17))
      {
        int VAR_18;


        FUNC_2(VAR_14, VAR_17, VAR_16);


        FUNC_0 (VAR_17);
      }
      break;
    }

    case 0x03:
    {

      uint16 *VAR_19 = (uint16 *)&VAR_4[VAR_1 & 0x7E];


      if (VAR_1 & 1)
      {

        VAR_16 = (*VAR_19 & 0x3F) | ((VAR_16 & 0x0E) << 5);
      }
      else
      {

        VAR_16 = (*VAR_19 & 0x1C0) | ((VAR_16 & 0x0E) >> 1)| ((VAR_16 & 0xE0) >> 2);
      }


      if (VAR_16 != *VAR_19)
      {

        int VAR_20 = (VAR_1 >> 1) & 0x3F;


        *VAR_19 = VAR_16;


        if (VAR_20 & 0x0F)
        {

          FUNC_3(VAR_20, VAR_16);
        }


        if (VAR_20 == VAR_2)
        {
          FUNC_3(0x00, VAR_16);
        }
      }
      break;
    }

    case 0x05:
    {

      FUNC_2(VAR_15, (VAR_1 & 0x7F) ^ 1, VAR_16);
      break;
    }
  }


  VAR_1 += VAR_9[15];


  if (VAR_7 & 0x100)
  {

    VAR_7 = VAR_16;


    VAR_5 = (VAR_9[20] << 8) | VAR_9[19];


    if (!VAR_5)
    {
      VAR_5 = 0x10000;
    }


    VAR_6 = 2;
    FUNC_4(VAR_0);
  }
}
