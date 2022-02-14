
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cycles; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (unsigned int,unsigned int,int ) ;
 int * VAR_15 ;

void FUNC_1(unsigned int VAR_16)
{
  if(VAR_5 == 0)
  {

    VAR_2 = VAR_16;


    VAR_5 = 1;
  }
  else
  {

    VAR_3 = (VAR_16 >> 6) & 3;
    VAR_1 = (VAR_16 << 8 | VAR_2) & 0x3FFF;


    VAR_5 = 0;

    if (VAR_3 == 0)
    {

      VAR_4[0] = VAR_15[VAR_1 & 0x3FFF];


      VAR_1 = (VAR_1 + 1) & 0x3FFF;
      return;
    }

    if (VAR_3 & 2)
    {

      VAR_16 &= 0x07;


      FUNC_0(VAR_16, VAR_2, VAR_0);


      if (VAR_16 < 2)
      {
        int VAR_17 = (VAR_6[0] & 0x02) | (VAR_6[1] & 0x18);


        switch (VAR_17)
        {
          case 0x00:
          {
            VAR_7 = VAR_9;
            break;
          }

          case 0x10:
          {
            VAR_7 = VAR_10;
            break;
          }

          case 0x02:
          {
            VAR_7 = VAR_12;
            break;
          }

          case 0x12:
          {
            VAR_7 = VAR_11;
            break;
          }

          case 0x08:
          {
            VAR_7 = VAR_13;
            break;
          }

          case 0x18:
          {
            VAR_7 = VAR_8;
            break;
          }

          case 0x0A:
          {
            VAR_7 = VAR_14;
            break;
          }

          case 0x1A:
          {
            VAR_7 = VAR_8;
            break;
          }
        }
      }
    }
  }
}
