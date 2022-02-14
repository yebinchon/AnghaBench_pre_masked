
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mask; scalar_t__* area; scalar_t__ id; } ;
struct TYPE_4__ {TYPE_1__ cartridge; scalar_t__* bram; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 scalar_t__* VAR_5 ;
 int* VAR_6 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__*,int,int,int *) ;
 scalar_t__ FUNC_4 (scalar_t__*,int*,int) ;
 int FUNC_5 (scalar_t__*,int*,int) ;
 int FUNC_6 (scalar_t__*,int,int) ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;

__attribute__((used)) static void FUNC_7(void)
{
    FILE *VAR_9;


    switch (VAR_7)
    {
       case 129:
          VAR_9 = FUNC_2(VAR_2, "rb");
          break;
       case 130:
          VAR_9 = FUNC_2(VAR_1, "rb");
          break;
       case 128:
          VAR_9 = FUNC_2(VAR_3, "rb");
          break;
       default:
          return;
    }

    if (VAR_9 != ((void*)0))
    {
      FUNC_3(VAR_8.bram, 0x2000, 1, VAR_9);
      FUNC_1(VAR_9);


      VAR_5[0] = FUNC_0(0, VAR_8.bram, 0x2000);
    }
    else
    {

      VAR_8.bram[0x1fff] = 0;
    }


    if (FUNC_4(VAR_8.bram + 0x2000 - 0x20, VAR_6 + 0x20, 0x20))
    {

      FUNC_6(VAR_8.bram, 0x00, 0x2000 - 0x40);


      VAR_6[0x10] = VAR_6[0x12] = VAR_6[0x14] = VAR_6[0x16] = 0x00;
      VAR_6[0x11] = VAR_6[0x13] = VAR_6[0x15] = VAR_6[0x17] = (sizeof(VAR_8.bram) / 64) - 3;


      FUNC_5(VAR_8.bram + 0x2000 - 0x40, VAR_6, 0x40);


      VAR_5[0] = 0;
    }


    if (VAR_8.cartridge.id)
    {
      VAR_9 = FUNC_2(VAR_0, "rb");
      if (VAR_9 != ((void*)0))
      {
        int VAR_10 = VAR_8.cartridge.mask + 1;
        int VAR_11 = 0;


        while (VAR_10 > VAR_4)
        {
          FUNC_3(VAR_8.cartridge.area + VAR_11, VAR_4, 1, VAR_9);
          VAR_11 += VAR_4;
          VAR_10 -= VAR_4;
        }


        if (VAR_10)
        {
          FUNC_3(VAR_8.cartridge.area + VAR_11, VAR_10, 1, VAR_9);
        }


        FUNC_1(VAR_9);


        VAR_5[1] = FUNC_0(0, VAR_8.cartridge.area, VAR_8.cartridge.mask + 1);
      }


      if (FUNC_4(VAR_8.cartridge.area + VAR_8.cartridge.mask + 1 - 0x20, VAR_6 + 0x20, 0x20))
      {

        FUNC_6(VAR_8.cartridge.area, 0x00, VAR_8.cartridge.mask + 1);


        VAR_6[0x10] = VAR_6[0x12] = VAR_6[0x14] = VAR_6[0x16] = (((VAR_8.cartridge.mask + 1) / 64) - 3) >> 8;
        VAR_6[0x11] = VAR_6[0x13] = VAR_6[0x15] = VAR_6[0x17] = (((VAR_8.cartridge.mask + 1) / 64) - 3) & 0xff;


        FUNC_5(VAR_8.cartridge.area + VAR_8.cartridge.mask + 1 - 0x40, VAR_6, 0x40);
      }
    }
}
