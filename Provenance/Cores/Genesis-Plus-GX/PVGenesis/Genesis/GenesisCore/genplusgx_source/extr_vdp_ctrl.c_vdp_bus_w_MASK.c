
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int uint16 ;
struct TYPE_4__ {int h; } ;
struct TYPE_6__ {TYPE_1__ viewport; } ;
struct TYPE_5__ {int cycles; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,unsigned int) ;
 int * VAR_6 ;
 int FUNC_2 (char*,int ,int ,int,int,int,int,unsigned int,...) ;
 TYPE_2__ VAR_7 ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int* VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;

__attribute__((used)) static void FUNC_6(unsigned int VAR_17)
{

  switch (VAR_5 & 0x0F)
  {
    case 0x01:
    {

      int VAR_18 = VAR_2 & 0xFFFE;


      uint16 *VAR_19 = (uint16 *)&VAR_15[VAR_18];


      if (VAR_2 & 1)
      {
        VAR_17 = ((VAR_17 >> 8) | (VAR_17 << 8)) & 0xFFFF;
      }


      if ((VAR_18 & VAR_12) == VAR_13)
      {

        *(uint16 *) &VAR_10[VAR_18 & VAR_11] = VAR_17;
      }


      if (VAR_17 != *VAR_19)
      {
        int VAR_20;


        *VAR_19 = VAR_17;


        FUNC_0 (VAR_18);
      }




      break;
    }

    case 0x03:
    {

      uint16 *VAR_21 = (uint16 *)&VAR_6[VAR_2 & 0x7E];


      VAR_17 = ((VAR_17 & 0xE00) >> 3) | ((VAR_17 & 0x0E0) >> 2) | ((VAR_17 & 0x00E) >> 1);


      if (VAR_17 != *VAR_21)
      {

        int VAR_22 = (VAR_2 >> 1) & 0x3F;


        *VAR_21 = VAR_17;


        if (VAR_22 & 0x0F)
        {

          FUNC_1(VAR_22, VAR_17);
        }


        if (VAR_22 == VAR_4)
        {
          FUNC_1(0x00, VAR_17);
        }


        if ((VAR_14 < VAR_3.viewport.h) && (VAR_9[1]& 0x40) && (VAR_7.cycles <= (VAR_8 + 860)))
        {

          FUNC_4(VAR_14);
        }
      }



      break;
    }

    case 0x05:
    {
      *(uint16 *)&VAR_16[VAR_2 & 0x7E] = VAR_17;


      if (VAR_9[11] & 0x04)
      {

        if ((VAR_14 < VAR_3.viewport.h) && (VAR_9[1]& 0x40) && (VAR_7.cycles <= (VAR_8 + 860)))
        {

          FUNC_5(VAR_14);
        }
      }



      break;
    }

    default:
    {



      break;
    }
  }


  VAR_2 += VAR_9[15];
}
