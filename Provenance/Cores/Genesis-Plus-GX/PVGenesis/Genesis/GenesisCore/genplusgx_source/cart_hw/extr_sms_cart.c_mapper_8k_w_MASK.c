
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_2__ {unsigned int pages; unsigned int* fcr; int * rom; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;
 int ** VAR_1 ;

__attribute__((used)) static void FUNC_1(int VAR_2, unsigned int VAR_3)
{
  int VAR_4;


  uint8 VAR_5 = VAR_3 % VAR_0.pages;


  VAR_0.fcr[VAR_2] = VAR_3;


  switch (VAR_2 & 3)
  {
    case 0:
    {
      for (VAR_4 = 0x20; VAR_4 < 0x28; VAR_4++)
      {
        VAR_1[VAR_4] = &VAR_0.rom[(VAR_5 << 13) | ((VAR_4 & 0x07) << 10)];
      }
      break;
    }

    case 1:
    {
      for (VAR_4 = 0x28; VAR_4 < 0x30; VAR_4++)
      {
        VAR_1[VAR_4] = &VAR_0.rom[(VAR_5 << 13) | ((VAR_4 & 0x07) << 10)];
      }
      break;
    }

    case 2:
    {
      for (VAR_4 = 0x10; VAR_4 < 0x18; VAR_4++)
      {
        VAR_1[VAR_4] = &VAR_0.rom[(VAR_5 << 13) | ((VAR_4 & 0x07) << 10)];
      }
      break;
    }

    case 3:
    {
      for (VAR_4 = 0x18; VAR_4 < 0x20; VAR_4++)
      {
        VAR_1[VAR_4] = &VAR_0.rom[(VAR_5 << 13) | ((VAR_4 & 0x07) << 10)];
      }
      break;
    }
  }





}
