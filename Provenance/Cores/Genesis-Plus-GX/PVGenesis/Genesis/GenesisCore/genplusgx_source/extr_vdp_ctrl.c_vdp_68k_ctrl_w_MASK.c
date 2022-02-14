
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int cycles; } ;
struct TYPE_4__ {int boot; } ;
struct TYPE_5__ {TYPE_1__ cartridge; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_3__ VAR_10 ;
 int VAR_11 ;
 int* VAR_12 ;
 TYPE_2__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,unsigned int,int ) ;

void FUNC_2(unsigned int VAR_16)
{

  if (VAR_11 == 0)
  {

    if (VAR_5)
    {



      if (VAR_7 < 2)
      {

        VAR_3 = VAR_16;
        return;
      }
    }


    if ((VAR_16 & 0xC000) == 0x8000)
    {

      FUNC_1((VAR_16 >> 8) & 0x1F, VAR_16 & 0xFF, VAR_10.cycles);
    }
    else
    {

      VAR_11 = VAR_12[1] & 4;
    }


    VAR_1 = VAR_2 | (VAR_16 & 0x3FFF);
    VAR_4 = ((VAR_4 & 0x3C) | ((VAR_16 >> 14) & 0x03));
  }
  else
  {

    VAR_11 = 0;


    VAR_2 = (VAR_16 & 3) << 14;


    VAR_1 = VAR_2 | (VAR_1 & 0x3FFF);
    VAR_4 = ((VAR_4 & 0x03) | ((VAR_16 >> 2) & 0x3C));


    if (VAR_4 & 0x20)
    {

      if (VAR_12[1] & 0x10)
      {

        switch (VAR_12[23] >> 6)
        {
          case 2:
          {

            VAR_8 = 0x100;
            break;
          }

          case 3:
          {

            VAR_5 = (VAR_12[20] << 8) | VAR_12[19];


            if (!VAR_5)
            {
              VAR_5 = 0x10000;
            }


            VAR_6 = (VAR_12[22] << 8) | VAR_12[21];


            VAR_7 = 3;
            FUNC_0(VAR_10.cycles);
            break;
          }

          default:
          {

            VAR_5 = (VAR_12[20] << 8) | VAR_12[19];


            if (!VAR_5)
            {
              VAR_5 = 0x10000;
            }


            VAR_6 = (VAR_12[22] << 8) | VAR_12[21];


            if (((VAR_15 == VAR_0) && ((VAR_12[23] & 0x70) == ((VAR_13.cartridge.boot >> 1) + 0x10))) || (VAR_14 && !(VAR_12[23] & 0x60)))
            {



              VAR_1 += VAR_12[15];
              VAR_5--;
            }


            VAR_7 = (VAR_4 & 0x06) ? 0 : 1;
            FUNC_0(VAR_10.cycles);
            break;
          }
        }
      }
    }
  }
  VAR_9 = (VAR_12[12] & 1) ? 190 : 214;
  VAR_9 <<= ((VAR_4 & 0x0F) < 0x03);
}
