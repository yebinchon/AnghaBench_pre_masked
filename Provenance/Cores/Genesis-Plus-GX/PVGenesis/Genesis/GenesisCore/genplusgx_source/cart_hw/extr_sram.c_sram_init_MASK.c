
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int T_SRAM ;
struct TYPE_10__ {int romsize; TYPE_1__* rom; } ;
struct TYPE_9__ {int realchecksum; int checksum; int international; int product; int ROMType; } ;
struct TYPE_8__ {int detected; int start; int end; int on; struct TYPE_8__* sram; int crc; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 void* FUNC_1 (TYPE_1__*,int) ;
 TYPE_5__ VAR_0 ;
 int FUNC_2 (int ,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int * FUNC_4 (int ,char*) ;

void FUNC_5()
{
  FUNC_3(&VAR_2, 0, sizeof (T_SRAM));


  if (VAR_0.romsize > 0x800000) return;
  VAR_2.sram = VAR_0.rom + 0x800000;


  FUNC_3(VAR_2.sram, 0xFF, 0x10000);
  VAR_2.crc = FUNC_2(0, VAR_2.sram, 0x10000);


  if ((FUNC_0(VAR_0.rom,0x1b0) == 0x52) && (FUNC_0(VAR_0.rom,0x1b1) == 0x41))
  {

    VAR_2.detected = 1;


    VAR_2.start = FUNC_1(VAR_0.rom, 0x1b4);
    VAR_2.end = FUNC_1(VAR_0.rom, 0x1b8);


    if (FUNC_4(VAR_1.product,"T-26013") != ((void*)0))
    {

      VAR_2.start = 0x200001;
      VAR_2.end = 0x203fff;
    }


    else if ((VAR_2.start > VAR_2.end) || ((VAR_2.end - VAR_2.start) >= 0x10000))
    {
      VAR_2.end = VAR_2.start + 0xffff;
    }


    VAR_2.on = 1;
  }
  else
  {

    if (FUNC_4(VAR_1.product,"T-50086") != ((void*)0))
    {

      VAR_2.on = 1;
      VAR_2.start = 0x200001;
      VAR_2.end = 0x203fff;
    }
    else if (FUNC_4(VAR_1.product,"ACLD007") != ((void*)0))
    {

      VAR_2.on = 1;
      VAR_2.start = 0x200001;
      VAR_2.end = 0x200fff;
    }
    else if (FUNC_4(VAR_1.product,"T-50286") != ((void*)0))
    {

      VAR_2.on = 1;
      VAR_2.start = 0x200001;
      VAR_2.end = 0x203fff;
    }
    else if (((VAR_1.realchecksum == 0xaeaa) || (VAR_1.realchecksum == 0x8dba)) &&
             (VAR_1.checksum == 0x8104))
    {

      VAR_2.on = 1;
      VAR_2.start = 0x400001;
      VAR_2.end = 0x40ffff;
    }
    else if ((FUNC_4(VAR_1.ROMType,"SF") != ((void*)0)) && (FUNC_4(VAR_1.product,"001") != ((void*)0)))
    {

      VAR_2.on = 1;
      if (VAR_1.checksum == 0x3e08)
      {

        VAR_2.start = 0x3c0001;
        VAR_2.end = 0x3cffff;
      }
      else
      {

        VAR_2.start = 0x400001;
        VAR_2.end = 0x40ffff;
      }
    }
    else if ((FUNC_4(VAR_1.ROMType,"SF") != ((void*)0)) && (FUNC_4(VAR_1.product,"004") != ((void*)0)))
    {

      VAR_2.on = 1;
      VAR_2.start = 0x200001;
      VAR_2.end = 0x203fff;
    }
    else if (FUNC_4(VAR_1.international,"SONIC & KNUCKLES") != ((void*)0))
    {

      if (VAR_0.romsize == 0x400000)
      {

        VAR_2.on = 1;
        VAR_2.start = 0x200001;
        VAR_2.end = 0x203fff;
      }
    }


    else if (FUNC_4(VAR_1.product,"T-113016") != ((void*)0))
    {

      VAR_2.on = 0;
    }
    else if (FUNC_4(VAR_1.international,"SONIC THE HEDGEHOG 2") != ((void*)0))
    {


      VAR_2.on = 0;
    }


    else if (VAR_0.romsize <= 0x200000)
    {

      VAR_2.start = 0x200000;
      VAR_2.end = 0x20ffff;
      VAR_2.on = 1;
    }
  }
}
