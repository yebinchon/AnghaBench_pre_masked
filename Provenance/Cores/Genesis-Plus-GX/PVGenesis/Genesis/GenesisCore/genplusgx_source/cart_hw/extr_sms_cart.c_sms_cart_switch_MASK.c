
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_8__ {int pages; int mapper; scalar_t__ fcr; } ;
struct TYPE_7__ {int romsize; scalar_t__ rom; } ;
struct TYPE_6__ {int pages; int mapper; scalar_t__ fcr; } ;
struct TYPE_5__ {int pages; int mapper; scalar_t__ fcr; scalar_t__ rom; } ;


 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 TYPE_1__ VAR_3 ;
 scalar_t__* VAR_4 ;

void FUNC_2(uint8 VAR_5)
{

  VAR_3.pages = 0;


  if (VAR_5 & 0x40)
  {

    if (VAR_2.pages)
    {

      VAR_3.rom = VAR_1.rom;
      VAR_3.fcr = VAR_2.fcr;
      VAR_3.mapper = VAR_2.mapper;
      VAR_3.pages = VAR_2.pages;
    }
  }
  else
  {

    if (VAR_5 & 0x08)
    {

      if (VAR_0.pages > 1)
      {

        VAR_3.rom = VAR_1.rom + 0x400000;
        VAR_3.fcr = VAR_0.fcr;
        VAR_3.mapper = VAR_0.mapper;
        VAR_3.pages = VAR_0.pages;
      }
      else
      {

        VAR_3.rom = VAR_1.rom;
        VAR_3.fcr = VAR_2.fcr;
        VAR_3.mapper = VAR_2.mapper;
        VAR_3.pages = VAR_2.pages;
      }
    }


    if (!VAR_0.pages)
    {

      if (VAR_1.romsize <= 0x100000)
      {

        FUNC_1(VAR_1.rom + 0x400000, VAR_1.rom, VAR_1.romsize);
        FUNC_1(VAR_0.fcr, VAR_2.fcr, 4);
        VAR_0.mapper = VAR_2.mapper;
        VAR_0.pages = VAR_2.pages;


        VAR_2.pages = 0;
      }
    }
  }


  FUNC_0();


  if ((VAR_0.pages == 1) && ((VAR_5 & 0x48) == 0x08))
  {

    VAR_4[0] = VAR_1.rom + 0x400000;
  }
}
