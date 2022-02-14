
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int s_auto; } ;
struct TYPE_4__ {int mask; scalar_t__ area; scalar_t__ id; } ;
struct TYPE_5__ {TYPE_1__ cartridge; scalar_t__ bram; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__* VAR_4 ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_3__ VAR_7 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__,int,int,int *) ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 int FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ VAR_11 ;

void FUNC_7(int VAR_12, int VAR_13)
{

  if (!VAR_12 && (VAR_11 == VAR_3))
  {

    if (FUNC_0(0, VAR_10.bram, 0x2000) != VAR_4[0])
    {

      if (!FUNC_4(VAR_10.bram + 0x2000 - 0x20, VAR_6 + 0x20, 0x20))
      {
        FILE *VAR_14 = FUNC_2(VAR_5[((VAR_8 ^ 0x40) >> 6) - 1], "wb");
        if (VAR_14 != ((void*)0))
        {
          FUNC_3(VAR_10.bram, 0x2000, 1, VAR_14);
          FUNC_1(VAR_14);


          VAR_4[0] = FUNC_0(0, VAR_10.bram, 0x2000);
        }
      }
    }


    if (VAR_10.cartridge.id && (FUNC_0(0, VAR_10.cartridge.area, VAR_10.cartridge.mask + 1) != VAR_4[1]))
    {

      if (!FUNC_4(VAR_10.cartridge.area + VAR_10.cartridge.mask + 1 - 0x20, VAR_6 + 0x20, 0x20))
      {
        FILE *VAR_15 = FUNC_2(VAR_0, "wb");
        if (VAR_15 != ((void*)0))
        {
          int VAR_16 = VAR_10.cartridge.mask + 1;
          int VAR_17 = 0;


          while (VAR_16 > VAR_1)
          {
            FUNC_3(VAR_10.cartridge.area + VAR_17, VAR_1, 1, VAR_15);
            VAR_17 += VAR_1;
            VAR_16 -= VAR_1;
          }


          if (VAR_16)
          {
            FUNC_3(VAR_10.cartridge.area + VAR_17, VAR_16, 1, VAR_15);
          }


          FUNC_1(VAR_15);


          VAR_4[1] = FUNC_0(0, VAR_10.cartridge.area, VAR_10.cartridge.mask + 1);
        }
      }
    }
  }


  if ((VAR_12 && !(VAR_7.s_auto & 2)) || (!VAR_12 && !(VAR_7.s_auto & 1)))
  {
    return;
  }

  if (FUNC_6(VAR_9))
  {
    VAR_2 = 1;
    FUNC_5(VAR_12, VAR_13);
    VAR_2 = 0;
  }
}
