
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cycles; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;

unsigned int FUNC_5(unsigned int VAR_1)
{
  switch (VAR_1 & 0xFD)
  {
    case 0x00:
    {
      return (FUNC_1() >> 8);
    }

    case 0x01:
    {
      return (FUNC_1() & 0xFF);
    }

    case 0x04:
    {
      return (((FUNC_0(VAR_0) >> 8) & 3) | 0xFC);
    }

    case 0x05:
    {
      return (FUNC_0(VAR_0) & 0xFF);
    }

    case 0x08:
    case 0x0C:
    {
      return (FUNC_2(VAR_0) >> 8);
    }

    case 0x09:
    case 0x0D:
    {
      return (FUNC_2(VAR_0) & 0xFF);
    }

    case 0x18:
    case 0x19:
    case 0x1C:
    case 0x1D:
    {
      return FUNC_4(VAR_1);
    }

    default:
    {
      return FUNC_3(VAR_1);
    }
  }
}
