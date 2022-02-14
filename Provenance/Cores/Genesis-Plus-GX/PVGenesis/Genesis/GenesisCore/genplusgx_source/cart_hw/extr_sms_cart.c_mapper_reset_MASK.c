
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * rom; } ;
struct TYPE_5__ {scalar_t__ mapper; } ;
struct TYPE_4__ {int pages; int mapper; int * fcr; int * rom; } ;
 int VAR_0 ;

 scalar_t__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int ** VAR_21 ;
 int VAR_22 ;
 int ** VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static void FUNC_2(void)
{
  int VAR_25;


  if (VAR_9 == VAR_1)
  {

    if (VAR_3.mapper == 129)
    {

      for (VAR_25 = 0x30; VAR_25 < 0x40; VAR_25++)
      {
        VAR_21[VAR_25] = VAR_23[VAR_25] = &VAR_10[(VAR_25 & 0x07) << 10];
      }
    }
    else
    {

      for (VAR_25 = 0x30; VAR_25 < 0x40; VAR_25++)
      {
        VAR_21[VAR_25] = VAR_23[VAR_25] = &VAR_10[(VAR_25 & 0x01) << 10];
      }
    }
  }
  else
  {

    for (VAR_25 = 0x30; VAR_25 < 0x40; VAR_25++)
    {
      VAR_21[VAR_25] = VAR_23[VAR_25] = &VAR_10[(VAR_25 & 0x07) << 10];
    }
  }


  if (!VAR_8.pages)
  {

    for(VAR_25 = 0x00; VAR_25 < 0x30; VAR_25++)
    {
      VAR_23[VAR_25] = VAR_2.rom + 0x510000;
      VAR_21[VAR_25] = VAR_2.rom + 0x510400;
    }


    VAR_22 = VAR_5;
    VAR_24 = VAR_18;
    return;
  }


  if (VAR_8.mapper < VAR_0)
  {

    for (VAR_25 = 0x00; VAR_25 < 0x30; VAR_25++)
    {
      VAR_21[VAR_25] = &VAR_8.rom[VAR_25 << 10];
      VAR_23[VAR_25] = VAR_2.rom + 0x510000;
    }


    if (VAR_8.pages <= 0x20)
    {

      for (VAR_25 = 0x20; VAR_25 < 0x30; VAR_25++)
      {
        VAR_21[VAR_25] = VAR_23[VAR_25] = &VAR_10[0x2000 + ((VAR_25 & 0x07) << 10)];
      }
    }


    if (VAR_8.mapper == 130)
    {

      for (VAR_25 = 0x08; VAR_25 < 0x10; VAR_25++)
      {
        VAR_21[VAR_25] = VAR_23[VAR_25] = &VAR_10[0x2000 + ((VAR_25 & 0x07) << 10)];
      }
    }
  }
  else
  {

    for (VAR_25 = 0x00; VAR_25 < 0x30; VAR_25++)
    {
      VAR_21[VAR_25] = &VAR_8.rom[VAR_25 << 10];
      VAR_23[VAR_25] = VAR_2.rom + 0x510000;
    }


    if (VAR_8.mapper & 135)
    {
      FUNC_1(0,VAR_8.fcr[0]);
      FUNC_1(1,VAR_8.fcr[1]);
      FUNC_1(2,VAR_8.fcr[2]);
      FUNC_1(3,VAR_8.fcr[3]);


      if (VAR_8.mapper == 133)
      {

        for (VAR_25 = 0x00; VAR_25 < 0x08; VAR_25++)
        {
          VAR_21[VAR_25] = &VAR_8.rom[(0x0f << 13) | ((VAR_25 & 0x07) << 10)];
        }
      }
    }
    else
    {
      FUNC_0(0,VAR_8.fcr[0]);
      FUNC_0(1,VAR_8.fcr[1]);
      FUNC_0(2,VAR_8.fcr[2]);
      FUNC_0(3,VAR_8.fcr[3]);
    }
  }


  switch (VAR_8.mapper)
  {
    case 131:
    case 130:
    case 129:
      VAR_22 = VAR_5;
      VAR_24 = VAR_18;
      break;

    case 138:
      VAR_22 = VAR_5;
      VAR_24 = VAR_12;
      break;

    case 137:
      VAR_22 = VAR_5;
      VAR_24 = VAR_13;
      break;

    case 135:
      VAR_22 = VAR_6;
      VAR_24 = VAR_15;
      break;

    case 136:
      VAR_22 = VAR_5;
      VAR_24 = VAR_14;
      break;

    case 134:
    case 133:
      VAR_22 = VAR_5;
      VAR_24 = VAR_16;
      break;

    case 132:
      VAR_22 = VAR_5;
      VAR_24 = VAR_17;
      break;

    case 139:
      VAR_22 = VAR_4;
      VAR_24 = VAR_11;
      break;

    case 128:
      VAR_22 = VAR_7;
      VAR_24 = VAR_20;
      break;

    default:
      VAR_22 = VAR_5;
      VAR_24 = VAR_19;
      break;
  }
}
