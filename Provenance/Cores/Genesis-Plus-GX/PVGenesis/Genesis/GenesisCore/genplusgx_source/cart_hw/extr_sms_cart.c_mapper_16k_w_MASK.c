
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_6__ {int rom; } ;
struct TYPE_5__ {unsigned int pages; int* fcr; scalar_t__ mapper; int * rom; } ;
struct TYPE_4__ {int * sram; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int * VAR_6 ;
 int ** VAR_7 ;
 int ** VAR_8 ;

__attribute__((used)) static void FUNC_1(int VAR_9, unsigned int VAR_10)
{
  int VAR_11;


  uint8 VAR_12 = VAR_10 % VAR_4.pages;


  if ((VAR_4.fcr[0] & 0x03) && (VAR_4.mapper == VAR_2))
  {
    VAR_12 = (VAR_12 + ((4 - (VAR_4.fcr[0] & 0x03)) << 3)) % VAR_4.pages;
  }


  VAR_4.fcr[VAR_9] = VAR_10;

  switch (VAR_9)
  {
    case 0:
    {
      if (VAR_10 & 0x08)
      {

        for (VAR_11 = 0x20; VAR_11 < 0x30; VAR_11++)
        {
          VAR_7[VAR_11] = VAR_8[VAR_11] = &VAR_5.sram[((VAR_10 & 0x04) << 12) + ((VAR_11 & 0x0F) << 10)];
        }
      }
      else
      {

        VAR_12 = VAR_4.fcr[3] % VAR_4.pages;


        if ((VAR_10 & 0x03) && (VAR_4.mapper == VAR_2))
        {
          VAR_12 = (VAR_12 + ((4 - (VAR_10 & 0x03)) << 3)) % VAR_4.pages;
        }


        for (VAR_11 = 0x20; VAR_11 < 0x30; VAR_11++)
        {
          VAR_7[VAR_11] = &VAR_4.rom[(VAR_12 << 14) | ((VAR_11 & 0x0F) << 10)];
          VAR_8[VAR_11] = VAR_3.rom + 0x510000;
        }
      }

      if (VAR_10 & 0x10)
      {

        for (VAR_11 = 0x30; VAR_11 < 0x40; VAR_11++)
        {
          VAR_7[VAR_11] = VAR_8[VAR_11] = &VAR_5.sram[(VAR_11 & 0x0F) << 10];
        }
      }
      else
      {

        for (VAR_11 = 0x30; VAR_11 < 0x40; VAR_11++)
        {
          VAR_7[VAR_11] = VAR_8[VAR_11] = &VAR_6[(VAR_11 & 0x07) << 10];
        }
      }
      break;
    }

    case 1:
    {

      if ((VAR_4.mapper == VAR_0) || (VAR_4.mapper == VAR_1))
      {
        VAR_7[0] = &VAR_4.rom[(VAR_12 << 14)];
      }

      for (VAR_11 = 0x01; VAR_11 < 0x10; VAR_11++)
      {
        VAR_7[VAR_11] = &VAR_4.rom[(VAR_12 << 14) | ((VAR_11 & 0x0F) << 10)];
      }
      break;
    }

    case 2:
    {
      for (VAR_11 = 0x10; VAR_11 < 0x20; VAR_11++)
      {
        VAR_7[VAR_11] = &VAR_4.rom[(VAR_12 << 14) | ((VAR_11 & 0x0F) << 10)];
      }


      if (VAR_4.mapper == VAR_0)
      {
        if (VAR_10 & 0x80)
        {

          for (VAR_11 = 0x28; VAR_11 < 0x30; VAR_11++)
          {
            VAR_7[VAR_11] = VAR_8[VAR_11] = &VAR_5.sram[(VAR_11 & 0x0F) << 10];
          }
        }
        else
        {

          VAR_12 = VAR_4.fcr[3] % VAR_4.pages;


          for (VAR_11 = 0x28; VAR_11 < 0x30; VAR_11++)
          {
            VAR_7[VAR_11] = &VAR_4.rom[(VAR_12 << 14) | ((VAR_11 & 0x0F) << 10)];
            VAR_8[VAR_11] = VAR_3.rom + 0x510000;
          }
        }
      }
      break;
    }

    case 3:
    {

      if ((VAR_4.fcr[0] & 0x08)) break;


      for (VAR_11 = 0x20; VAR_11 < 0x28; VAR_11++)
      {
        VAR_7[VAR_11] = &VAR_4.rom[(VAR_12 << 14) | ((VAR_11 & 0x0F) << 10)];
      }


      if ((VAR_4.mapper == VAR_0) && (VAR_4.fcr[2] & 0x80)) break;


      for (VAR_11 = 0x28; VAR_11 < 0x30; VAR_11++)
      {
        VAR_7[VAR_11] = &VAR_4.rom[(VAR_12 << 14) | ((VAR_11 & 0x0F) << 10)];
      }
      break;
    }
  }





}
