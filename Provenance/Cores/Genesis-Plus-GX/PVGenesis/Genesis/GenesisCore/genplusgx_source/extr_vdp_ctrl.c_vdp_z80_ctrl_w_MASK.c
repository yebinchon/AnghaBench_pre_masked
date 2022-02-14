
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cycles; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int* VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int,int ) ;
 int * VAR_11 ;

void FUNC_2(unsigned int VAR_12)
{
  switch (VAR_9)
  {
    case 0:
    {

      VAR_2 = VAR_12;


      VAR_9 = 1;
      return;
    }

    case 1:
    {

      VAR_1 = (VAR_1 & 0xC000) | ((VAR_12 & 0x3F) << 8) | VAR_2 ;
      VAR_3 = ((VAR_3 & 0x3C) | ((VAR_12 >> 6) & 0x03));

      if ((VAR_3 & 0x03) == 0x02)
      {

        FUNC_1(VAR_12 & 0x1F, VAR_2, VAR_0);


        VAR_9 = 0;
        return;
      }


      VAR_9 = (VAR_10[1] & 4) >> 1;

      if (!VAR_9 && !(VAR_3 & 0x03))
      {

        VAR_8[0] = VAR_11[VAR_1 & 0x3FFF];


        VAR_1 += (VAR_10[15] + 1);
      }
      return;
    }

    case 2:
    {

      VAR_2 = VAR_12;


      VAR_9 = 3;
      return;
    }

    case 3:
    {

      VAR_9 = 0;


      VAR_1 = ((VAR_2 & 3) << 14) | (VAR_1 & 0x3FFF);
      VAR_3 = ((VAR_3 & 0x03) | ((VAR_2 >> 2) & 0x3C));


      if (VAR_3 & 0x20)
      {

        if (VAR_10[1] & 0x10)
        {

          switch (VAR_10[23] >> 6)
          {
            case 2:
            {

              VAR_7 = 0x100;
              break;
            }

            case 3:
            {

              VAR_4 = (VAR_10[20] << 8) | VAR_10[19];


              if (!VAR_4)
              {
                VAR_4 = 0x10000;
              }


              VAR_5 = (VAR_10[22] << 8) | VAR_10[21];


              VAR_6 = 3;
              FUNC_0(VAR_0);
              break;
            }

            default:
            {

              break;
            }
          }
        }
      }
    }
    return;
  }
}
