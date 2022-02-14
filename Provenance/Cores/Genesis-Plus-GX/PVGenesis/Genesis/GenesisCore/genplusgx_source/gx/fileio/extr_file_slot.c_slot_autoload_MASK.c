
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int s_auto; } ;
struct TYPE_4__ {int mask; scalar_t__* area; scalar_t__ id; } ;
struct TYPE_5__ {TYPE_1__ cartridge; scalar_t__* bram; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__* VAR_4 ;
 int * VAR_5 ;
 int* VAR_6 ;
 TYPE_3__ VAR_7 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__*,int,int,int *) ;
 scalar_t__ FUNC_4 (scalar_t__*,int*,int) ;
 int FUNC_5 (scalar_t__*,int*,int) ;
 int FUNC_6 (scalar_t__*,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 int FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ VAR_11 ;

void FUNC_9(int VAR_12, int VAR_13)
{

  if (!VAR_12 && (VAR_11 == VAR_3))
  {

    FILE *VAR_14 = FUNC_2(VAR_5[((VAR_8 ^ 0x40) >> 6) - 1], "rb");
    if (VAR_14 != ((void*)0))
    {
      FUNC_3(VAR_10.bram, 0x2000, 1, VAR_14);
      FUNC_1(VAR_14);


      VAR_4[0] = FUNC_0(0, VAR_10.bram, 0x2000);
    }
    else
    {

      VAR_10.bram[0x1fff] = 0;
    }


    if (FUNC_4(VAR_10.bram + 0x2000 - 0x20, VAR_6 + 0x20, 0x20))
    {

      FUNC_6(VAR_10.bram, 0x00, 0x2000 - 0x40);


      VAR_6[0x10] = VAR_6[0x12] = VAR_6[0x14] = VAR_6[0x16] = 0x00;
      VAR_6[0x11] = VAR_6[0x13] = VAR_6[0x15] = VAR_6[0x17] = (sizeof(VAR_10.bram) / 64) - 3;


      FUNC_5(VAR_10.bram + 0x2000 - 0x40, VAR_6, 0x40);


      VAR_4[0] = 0;
    }


    if (VAR_10.cartridge.id)
    {
      VAR_14 = FUNC_2(VAR_0, "rb");
      if (VAR_14 != ((void*)0))
      {
        int VAR_15 = VAR_10.cartridge.mask + 1;
        int VAR_16 = 0;


        while (VAR_15 > VAR_1)
        {
          FUNC_3(VAR_10.cartridge.area + VAR_16, VAR_1, 1, VAR_14);
          VAR_16 += VAR_1;
          VAR_15 -= VAR_1;
        }


        if (VAR_15)
        {
          FUNC_3(VAR_10.cartridge.area + VAR_16, VAR_15, 1, VAR_14);
        }


        FUNC_1(VAR_14);


        VAR_4[1] = FUNC_0(0, VAR_10.cartridge.area, VAR_10.cartridge.mask + 1);
      }


      if (FUNC_4(VAR_10.cartridge.area + VAR_10.cartridge.mask + 1 - 0x20, VAR_6 + 0x20, 0x20))
      {

        FUNC_6(VAR_10.cartridge.area, 0x00, VAR_10.cartridge.mask + 1);


        VAR_6[0x10] = VAR_6[0x12] = VAR_6[0x14] = VAR_6[0x16] = (((VAR_10.cartridge.mask + 1) / 64) - 3) >> 8;
        VAR_6[0x11] = VAR_6[0x13] = VAR_6[0x15] = VAR_6[0x17] = (((VAR_10.cartridge.mask + 1) / 64) - 3) & 0xff;


        FUNC_5(VAR_10.cartridge.area + VAR_10.cartridge.mask + 1 - 0x40, VAR_6, 0x40);
      }
    }
  }


  if ((VAR_12 && !(VAR_7.s_auto & 2)) || (!VAR_12 && !(VAR_7.s_auto & 1)))
  {
    return;
  }

  if (FUNC_8(VAR_9))
  {
    VAR_2 = 1;
    FUNC_7(VAR_12, VAR_13);
    VAR_2 = 0;
  }
}
