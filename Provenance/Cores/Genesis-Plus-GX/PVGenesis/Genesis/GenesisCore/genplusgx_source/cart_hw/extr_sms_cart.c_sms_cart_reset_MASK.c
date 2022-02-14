
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int* fcr; int pages; int mapper; } ;
struct TYPE_7__ {scalar_t__ rom; } ;
struct TYPE_6__ {int mapper; int* fcr; int pages; } ;
struct TYPE_5__ {int* fcr; int mapper; int pages; scalar_t__ rom; } ;







 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 scalar_t__* VAR_8 ;

void FUNC_1(void)
{

  VAR_1.fcr[0] = 0;
  VAR_1.fcr[1] = 0;
  VAR_1.fcr[2] = 1;
  VAR_1.fcr[3] = 2;


  switch (VAR_3.mapper)
  {
    case 129:
    case 128:
      VAR_3.fcr[0] = 0;
      VAR_3.fcr[1] = 0;
      VAR_3.fcr[2] = 1;
      VAR_3.fcr[3] = 2;
      break;

    case 132:
    case 131:
    case 130:
      VAR_3.fcr[0] = 0;
      VAR_3.fcr[1] = 0;
      VAR_3.fcr[2] = 0;
      VAR_3.fcr[3] = 0;
      break;

    default:
      VAR_3.fcr[0] = 0;
      VAR_3.fcr[1] = 0;
      VAR_3.fcr[2] = 1;
      VAR_3.fcr[3] = 0;
      break;
  }


  if (VAR_1.pages > 1)
  {

    VAR_5.rom = VAR_2.rom + 0x400000;
    VAR_5.fcr = VAR_1.fcr;
    VAR_5.mapper = VAR_1.mapper;
    VAR_5.pages = VAR_1.pages;
  }
  else
  {

    VAR_5.rom = VAR_2.rom;
    VAR_5.fcr = VAR_3.fcr;
    VAR_5.mapper = VAR_3.mapper;
    VAR_5.pages = VAR_3.pages;


    if (VAR_6 & VAR_0)
    {
      VAR_7[0] = 0xA8;
    }
  }


  VAR_4[0x0E] = VAR_1.pages ? 0xE0 : 0xA8;


  FUNC_0();


  if (VAR_1.pages == 1)
  {

    VAR_8[0] = VAR_2.rom + 0x400000;
  }
}
