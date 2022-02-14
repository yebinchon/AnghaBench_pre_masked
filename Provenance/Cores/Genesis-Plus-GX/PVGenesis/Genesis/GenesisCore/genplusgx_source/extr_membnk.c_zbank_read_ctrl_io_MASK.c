
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int (* time_r ) (unsigned int) ;} ;
struct TYPE_4__ {TYPE_1__ hw; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 () ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;

unsigned int FUNC_5(unsigned int VAR_1)
{
  switch ((VAR_1 >> 8) & 0xFF)
  {
    case 0x00:
    {
      if (!(VAR_1 & 0xE0))
      {
        return (FUNC_1((VAR_1 >> 1) & 0x0F));
      }
      return FUNC_4(VAR_1);
    }

    case 0x11:
    {
      if (VAR_1 & 1)
      {
        return FUNC_4(VAR_1);
      }
      return 0xFF;
    }

    case 0x30:
    {
      if (VAR_0.hw.time_r)
      {
        unsigned int VAR_2 = VAR_0.hw.time_r(VAR_1);
        if (VAR_1 & 1)
        {
          return (VAR_2 & 0xFF);
        }
        return (VAR_2 >> 8);
      }
      return FUNC_4(VAR_1);
    }

    case 0x41:
    {
      if (VAR_1 & 1)
      {
        return (FUNC_0() | 0xFE);
      }
      return FUNC_4(VAR_1);
    }

    case 0x10:
    case 0x12:
    case 0x20:
    case 0x40:
    case 0x44:
    case 0x50:
    {
      return FUNC_4(VAR_1);
    }

    default:
    {
      return FUNC_3(VAR_1);
    }
  }
}
