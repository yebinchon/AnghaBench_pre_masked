
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_8__ {int cycles; } ;
struct TYPE_5__ {int h; int changed; int y; } ;
struct TYPE_7__ {TYPE_1__ viewport; } ;
struct TYPE_6__ {int overscan; int gg_extra; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int ) ;
 TYPE_2__ VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int ** VAR_32 ;
 size_t VAR_33 ;
 int FUNC_1 (unsigned int,unsigned int,int ) ;
 int * VAR_34 ;

void FUNC_2(unsigned int VAR_35)
{
  if(VAR_15 == 0)
  {

    VAR_3 = (VAR_3 & 0x3F00) | (VAR_35 & 0xFF);


    VAR_4 = VAR_35;


    VAR_15 = 1;
  }
  else
  {

    VAR_8 = (VAR_35 >> 6) & 3;
    VAR_3 = (VAR_35 << 8 | VAR_4) & 0x3FFF;


    VAR_15 = 0;

    if (VAR_8 == 0)
    {

      VAR_11[0] = VAR_34[VAR_3 & 0x3FFF];


      VAR_3 = (VAR_3 + 1) & 0x3FFF;
      return;
    }

    if (VAR_8 == 2)
    {

      int VAR_36, VAR_37 = (VAR_16[0] & 0x06) | (VAR_16[1] & 0x18);


      FUNC_1(VAR_35 & 0x0F, VAR_4, VAR_2);


      VAR_36 = (VAR_16[0] & 0x06) | (VAR_16[1] & 0x18);
      VAR_37 ^= VAR_36;

      if (VAR_37)
      {

        if (VAR_30 > VAR_1)
        {
          int VAR_38;

          if (VAR_36 == 0x0E)
          {

            VAR_38 = 240;


            VAR_31 = VAR_32[3][VAR_33];
          }
          else if (VAR_36 == 0x16)
          {

            VAR_38 = 224;


            VAR_31 = VAR_32[1][VAR_33];
          }
          else
          {

            VAR_38 = 192;


            VAR_31 = VAR_32[0][VAR_33];
          }

          if (VAR_38 != VAR_6.viewport.h)
          {
            if (VAR_29 & 8)
            {

              VAR_6.viewport.changed |= 2;
            }
            else
            {

              VAR_6.viewport.h = VAR_38;


              if (VAR_9.overscan & 1)
              {
                VAR_6.viewport.y = (240 + 48*VAR_33 - VAR_38) >> 1;
              }
              else
              {
                if ((VAR_30 == VAR_0) && !VAR_9.gg_extra)
                {

                  VAR_6.viewport.y = (144 - VAR_38) / 2;
                }
                else
                {
                  VAR_6.viewport.y = 0;
                }
              }
            }
          }
        }


        switch (VAR_36)
        {
          case 0x00:
          {
            VAR_17 = VAR_19;
            break;
          }

          case 0x10:
          {
            VAR_17 = VAR_20;
           break;
          }

          case 0x02:
          {
            VAR_17 = VAR_22;
            break;
          }

          case 0x12:
          {
            VAR_17 = VAR_21;
            break;
          }

          case 0x08:
          {
            VAR_17 = VAR_23;
            break;
          }

          case 0x18:
          {
            VAR_17 = VAR_18;
            break;
          }

          case 0x0A:
          {
            VAR_17 = VAR_24;
            break;
          }

          case 0x1A:
          {
            VAR_17 = VAR_18;
           break;
          }

          default:
          {
            VAR_17 = VAR_25;
            break;
          }
        }


        if (VAR_37 & 0x04)
        {
          int VAR_39;

          if (VAR_36 & 0x04)
          {

            VAR_12 = VAR_13;
            VAR_26 = VAR_27;


            VAR_5 = 0x200;
          }
          else
          {

            VAR_12 = VAR_14;
            VAR_26 = VAR_28;


            VAR_5 = 0;
          }


          for(VAR_39 = 0; VAR_39 < 0x20; VAR_39 ++)
          {
            FUNC_0(VAR_39, *(uint16 *)&VAR_10[VAR_39 << 1]);
          }
          FUNC_0(0x40, *(uint16 *)&VAR_10[(0x10 | (VAR_7 & 0x0F)) << 1]);
        }
      }
    }
  }
}
