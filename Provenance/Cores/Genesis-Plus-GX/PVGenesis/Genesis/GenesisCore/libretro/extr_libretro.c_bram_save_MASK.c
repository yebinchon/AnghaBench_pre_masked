
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mask; scalar_t__ area; scalar_t__ id; } ;
struct TYPE_4__ {TYPE_1__ cartridge; scalar_t__ bram; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 scalar_t__* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__,int,int,int *) ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;

__attribute__((used)) static void FUNC_5(void)
{
    FILE *VAR_9;


    if (FUNC_0(0, VAR_8.bram, 0x2000) != VAR_5[0])
    {

      if (!FUNC_4(VAR_8.bram + 0x2000 - 0x20, VAR_6 + 0x20, 0x20))
      {
        switch (VAR_7)
 {
  case 129:
   VAR_9 = FUNC_2(VAR_2, "wb");
   break;
  case 130:
   VAR_9 = FUNC_2(VAR_1, "wb");
   break;
  case 128:
   VAR_9 = FUNC_2(VAR_3, "wb");
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
      }
    }


    if (VAR_8.cartridge.id && (FUNC_0(0, VAR_8.cartridge.area, VAR_8.cartridge.mask + 1) != VAR_5[1]))
    {

      if (!FUNC_4(VAR_8.cartridge.area + VAR_8.cartridge.mask + 1 - 0x20, VAR_6 + 0x20, 0x20))
      {
        VAR_9 = FUNC_2(VAR_0, "wb");
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
      }
    }
}
