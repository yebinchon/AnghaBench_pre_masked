
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int,int,int) ;

 int VAR_0 ;
 int VAR_1 ;

 unsigned int* VAR_2 ;
 unsigned int* VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 unsigned int* VAR_6 ;
 unsigned int* VAR_7 ;

void FUNC_1(int VAR_8, unsigned int VAR_9)
{
  switch (VAR_5)
  {
    case 129:
    {

      int VAR_10 = (VAR_9 >> 0) & 0x0F;
      int VAR_11 = (VAR_9 >> 4) & 0x0F;
      int VAR_12 = (VAR_9 >> 8) & 0x0F;


      VAR_9 = FUNC_0(VAR_10,VAR_11,VAR_12);
      break;
    }

    case 128:
    {

      if (VAR_8 & 0x0F)
      {

        VAR_9 = VAR_7[VAR_8 & 0x0F];
      }
      else
      {

        VAR_9 = VAR_7[VAR_4[7] & 0x0F];
      }
      break;
    }

    default:
    {

      if (!(VAR_4[0] & 0x04))
      {
        if (VAR_5 & VAR_1)
        {

          VAR_9 = 0x00;
        }
        else if (VAR_5 != VAR_0)
        {

          if (VAR_8 & 0x0F)
          {

            VAR_9 = VAR_6[VAR_8 & 0x0F];
          }
          else
          {

            VAR_9 = VAR_6[VAR_4[7] & 0x0F];
          }
        }
      }


      VAR_9 = VAR_3[VAR_9 & 0x3F];
      break;
    }
  }



  if (VAR_4[0] & 0x04)
  {

    VAR_2[0x00 | VAR_8] = VAR_9;
    VAR_2[0x20 | VAR_8] = VAR_9;
    VAR_2[0x80 | VAR_8] = VAR_9;
    VAR_2[0xA0 | VAR_8] = VAR_9;
  }
  else
  {

    if ((VAR_8 == 0x40) || (VAR_8 == (0x10 | (VAR_4[7] & 0x0F))))
    {

      VAR_2[0x40] = VAR_9;


      VAR_2[0x10] = VAR_9;
      VAR_2[0x30] = VAR_9;
      VAR_2[0x90] = VAR_9;
      VAR_2[0xB0] = VAR_9;
    }

    if (VAR_8 & 0x0F)
    {

      VAR_2[0x00 | VAR_8] = VAR_9;
      VAR_2[0x20 | VAR_8] = VAR_9;
      VAR_2[0x80 | VAR_8] = VAR_9;
      VAR_2[0xA0 | VAR_8] = VAR_9;
    }
  }
}
