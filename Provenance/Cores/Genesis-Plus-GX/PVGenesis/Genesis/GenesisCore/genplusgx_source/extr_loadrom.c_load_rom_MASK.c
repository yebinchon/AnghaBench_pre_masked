
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* uint8 ;
typedef int uint32 ;
struct TYPE_16__ {int romsize; int* rom; } ;
struct TYPE_15__ {scalar_t__ ram; } ;
struct TYPE_14__ {scalar_t__ loaded; } ;
struct TYPE_13__ {int system; } ;
struct TYPE_12__ {int* system; int x_offset; int y_offset; } ;
struct TYPE_11__ {int international; int product; int domestic; int ROMType; int consoletype; } ;
struct TYPE_9__ {int boot; } ;
struct TYPE_10__ {int* bootrom; TYPE_1__ cartridge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 () ;
 TYPE_8__ VAR_12 ;
 TYPE_7__ VAR_13 ;
 TYPE_6__ VAR_14 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 () ;
 TYPE_5__ VAR_15 ;
 int FUNC_3 (int*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 TYPE_4__ VAR_16 ;
 int FUNC_7 (char*,int*,int,char*) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (char*,char*,int) ;
 int FUNC_10 (int*,int*,int) ;
 int* VAR_17 ;
 int VAR_18 ;
 TYPE_3__ VAR_19 ;
 int VAR_20 ;
 TYPE_2__ VAR_21 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,char*,int) ;
 int * FUNC_13 (int ,char*) ;
 int VAR_22 ;
 int VAR_23 ;

int FUNC_14(char *VAR_24)
{
  int VAR_25, VAR_26;


  FUNC_6();
  FUNC_0();


  if (VAR_12.romsize > 0x800000)
  {

    VAR_14.loaded = 0;
  }


  VAR_26 = FUNC_1(VAR_24, (char *)(VAR_12.rom));
  if (VAR_26 < 0)
  {

    return 0;
  }

  if (VAR_26 > 0)
  {

    VAR_23 = VAR_3;
  }
  else
  {

    char VAR_27[4];
    VAR_26 = FUNC_7(VAR_24, VAR_12.rom, sizeof(VAR_12.rom), VAR_27);
    if (!VAR_26)
    {

      VAR_22 &= ~(0x10 | VAR_10 | VAR_0);
      return 0;
    }


    if (VAR_26 > 0x800000)
    {

      VAR_22 &= ~0x10;
    }
    else if (VAR_26 > 0x400000)
    {

      VAR_22 &= ~(VAR_10 | VAR_0);
    }


    *(uint32 *)(VAR_27) &= 0xdfdfdfdf;


    if (!FUNC_9("SMS", &VAR_27[0], 3))
    {

      VAR_23 = VAR_11;
    }
    else if (!FUNC_9("GG", &VAR_27[1], 2))
    {

      VAR_23 = VAR_0;
    }
    else if (!FUNC_9("SG", &VAR_27[1], 2))
    {

      VAR_23 = VAR_9;
    }
    else
    {

      VAR_23 = VAR_4;


      if (!FUNC_9("MDX", &VAR_27[0], 3))
      {
        for (VAR_25 = 4; VAR_25 < VAR_26 - 1; VAR_25++)
        {
          VAR_12.rom[VAR_25-4] = VAR_12.rom[VAR_25] ^ 0x40;
        }
        VAR_26 = VAR_26 - 5;
      }


      if (!FUNC_9((char *)(VAR_12.rom + 0x100),"ESAGM GE ARDVI E", 16) ||
          !FUNC_9((char *)(VAR_12.rom + 0x100),"ESAGG NESESI", 12))
      {
        for(VAR_25 = 0; VAR_25 < VAR_26; VAR_25 += 2)
        {
          uint8 VAR_28 = VAR_12.rom[VAR_25];
          VAR_12.rom[VAR_25] = VAR_12.rom[VAR_25+1];
          VAR_12.rom[VAR_25+1] = VAR_28;
        }
      }
    }


    if (FUNC_9((char *)(VAR_12.rom + 0x100), "SEGA", 4) && ((VAR_26 / 512) & 1) && !(VAR_26 % 512))
    {

      VAR_26 -= 512;
      FUNC_10 (VAR_12.rom, VAR_12.rom + 512, VAR_26);


      if (VAR_23 == VAR_4)
      {
        for (VAR_25 = 0; VAR_25 < (VAR_26 / 0x4000); VAR_25++)
        {
          FUNC_3 (VAR_12.rom + (VAR_25 * 0x4000));
        }
      }
    }
  }


  VAR_12.romsize = VAR_26;


  FUNC_5((char *)(VAR_12.rom));


  FUNC_4((char *)(VAR_12.rom));


  if (VAR_23 == VAR_3)
  {

    if (!FUNC_8())
    {

      FUNC_2();


      return (0);
    }


    VAR_21.cartridge.boot = 0x00;
  }
  VAR_20 = VAR_23;


  if (FUNC_13(VAR_19.consoletype, "SEGA PICO") != ((void*)0))
  {

    VAR_23 = VAR_8;
  }


  else if (FUNC_13(VAR_19.ROMType, "BR") != ((void*)0))
  {

    VAR_23 = VAR_3;


    VAR_21.cartridge.boot = 0x00;


    FUNC_10(VAR_21.bootrom, VAR_12.rom, sizeof(VAR_21.bootrom));


    VAR_22 = VAR_22 | 0x10;


    VAR_22 = (VAR_22 & 0xf0) | (VAR_18 >> 4);
  }


  else if ((FUNC_13(VAR_19.domestic,"FLUX") != ((void*)0)) ||
           (FUNC_13(VAR_19.domestic,"WONDER LIBRARY") != ((void*)0)) ||
           (FUNC_13(VAR_19.product,"T-5740") != ((void*)0)))
  {

    if (VAR_15.system == 0x00)
    {

      VAR_23 = VAR_3;


      if (FUNC_8())
      {

        VAR_21.cartridge.boot = 0x40;


        FUNC_12(&VAR_24[FUNC_11(VAR_24) - 4], ".iso", 4);
        FUNC_1(VAR_24, (char *)VAR_13.ram);
      }
      else
      {

        VAR_23 = VAR_4;
      }
    }
  }


  if (VAR_15.system == VAR_4)
  {
    if (!(VAR_23 & VAR_4))
    {

      VAR_23 = VAR_7;
    }
  }
  else if (VAR_15.system == VAR_0)
  {
    if (VAR_23 != VAR_0)
    {

      VAR_23 = VAR_1;
    }
  }
  else if (VAR_15.system)
  {
    VAR_23 = VAR_15.system;
  }


  if (VAR_17[0] != -1)
  {
    VAR_16.system[0] = VAR_17[0];
  }
  if (VAR_17[1] != -1)
  {
    VAR_16.system[1] = VAR_17[1];
  }


  VAR_16.x_offset = (VAR_16.system[1] == VAR_6) ? 64 : 0;
  VAR_16.y_offset = 0;


  if (FUNC_13(VAR_19.international,"MENACER") != ((void*)0))
  {

    if (VAR_17[0] == -1)
    {
      VAR_17[0] = VAR_16.system[0];
    }
    if (VAR_17[1] == -1)
    {
      VAR_17[1] = VAR_16.system[1];
    }


    VAR_16.system[0] = VAR_5;
    VAR_16.system[1] = VAR_6;
    VAR_16.x_offset = 82;
    VAR_16.y_offset = 0;
  }
  else if (FUNC_13(VAR_19.international,"T2 ; THE ARCADE GAME") != ((void*)0))
  {

    if (VAR_17[0] == -1)
    {
      VAR_17[0] = VAR_16.system[0];
    }
    if (VAR_17[1] == -1)
    {
      VAR_17[1] = VAR_16.system[1];
    }


    VAR_16.system[0] = VAR_5;
    VAR_16.system[1] = VAR_6;
    VAR_16.x_offset = 133;
    VAR_16.y_offset = -8;
  }
  else if (FUNC_13(VAR_19.international,"BODY COUNT") != ((void*)0))
  {

    if (VAR_17[0] == -1)
    {
      VAR_17[0] = VAR_16.system[0];
    }
    if (VAR_17[1] == -1)
    {
      VAR_17[1] = VAR_16.system[1];
    }


    VAR_16.system[0] = VAR_5;
    VAR_16.system[1] = VAR_6;
    VAR_16.x_offset = 68;
    VAR_16.y_offset = -24;
  }
  else if (FUNC_13(VAR_19.international,"CORPSE KILLER") != ((void*)0))
  {

    if (VAR_17[0] == -1)
    {
      VAR_17[0] = VAR_16.system[0];
    }
    if (VAR_17[1] == -1)
    {
      VAR_17[1] = VAR_16.system[1];
    }


    VAR_16.system[0] = VAR_5;
    VAR_16.system[1] = VAR_6;
    VAR_16.x_offset = 64;
    VAR_16.y_offset = -8;
  }
  else if (FUNC_13(VAR_19.international,"CRIME PATROL") != ((void*)0))
  {

    if (VAR_17[0] == -1)
    {
      VAR_17[0] = VAR_16.system[0];
    }
    if (VAR_17[1] == -1)
    {
      VAR_17[1] = VAR_16.system[1];
    }


    VAR_16.system[0] = VAR_5;
    VAR_16.system[1] = VAR_6;
    VAR_16.x_offset = 61;
    VAR_16.y_offset = 0;
  }
  else if (FUNC_13(VAR_19.international,"MAD DOG II THE LOST GOLD") != ((void*)0))
  {

    if (VAR_17[0] == -1)
    {
      VAR_17[0] = VAR_16.system[0];
    }
    if (VAR_17[1] == -1)
    {
      VAR_17[1] = VAR_16.system[1];
    }


    VAR_16.system[0] = VAR_5;
    VAR_16.system[1] = VAR_6;
    VAR_16.x_offset = 70;
    VAR_16.y_offset = 18;
  }
  else if (FUNC_13(VAR_19.international,"MAD DOG MCCREE") != ((void*)0))
  {

    if (VAR_17[0] == -1)
    {
      VAR_17[0] = VAR_16.system[0];
    }
    if (VAR_17[1] == -1)
    {
      VAR_17[1] = VAR_16.system[1];
    }


    VAR_16.system[0] = VAR_5;
    VAR_16.system[1] = VAR_6;
    VAR_16.x_offset = 49;
    VAR_16.y_offset = 0;
  }
  else if (FUNC_13(VAR_19.international,"WHO SHOT JOHNNY ROCK?") != ((void*)0))
  {

    if (VAR_17[0] == -1)
    {
      VAR_17[0] = VAR_16.system[0];
    }
    if (VAR_17[1] == -1)
    {
      VAR_17[1] = VAR_16.system[1];
    }


    VAR_16.system[0] = VAR_5;
    VAR_16.system[1] = VAR_6;
    VAR_16.x_offset = 60;
    VAR_16.y_offset = 30;
  }
  else if ((FUNC_13(VAR_19.international,"LETHAL ENFORCERS") != ((void*)0)) ||
           (FUNC_13(VAR_19.international,"SNATCHER") != ((void*)0)))
  {

    if (VAR_17[0] == -1)
    {
      VAR_17[0] = VAR_16.system[0];
    }
    if (VAR_17[1] == -1)
    {
      VAR_17[1] = VAR_16.system[1];
    }


    VAR_16.system[0] = VAR_5;
    VAR_16.system[1] = VAR_2;
    VAR_16.x_offset = (FUNC_13(VAR_19.international,"GUN FIGHTERS") != ((void*)0)) ? 24 : 0;
    VAR_16.y_offset = 0;
  }

  return(1);
}
