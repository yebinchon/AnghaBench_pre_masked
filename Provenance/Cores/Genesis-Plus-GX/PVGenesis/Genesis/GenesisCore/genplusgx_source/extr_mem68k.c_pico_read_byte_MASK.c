
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* pad; int** analog; } ;


 TYPE_1__ VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;

unsigned int FUNC_1(unsigned int VAR_3)
{
  switch (VAR_3 & 0xFF)
  {
    case 0x01:
    {
      return (VAR_2 >> 1);
    }

    case 0x03:
    {
      return ~VAR_0.pad[0];
    }

    case 0x05:
    {
      return (VAR_0.analog[0][0] >> 8);
    }

    case 0x07:
    {
      return (VAR_0.analog[0][0] & 0xFF);
    }

    case 0x09:
    {
      return (VAR_0.analog[0][1] >> 8);
    }

    case 0x0B:
    {
      return (VAR_0.analog[0][1] & 0xFF);
    }

    case 0x0D:
    {
      return (1 << VAR_1) - 1;
    }

    case 0x10:
    case 0x11:
    {
      return 0xff;
    }

    case 0x12:
    {
      return 0x80;
    }

    default:
    {
      return FUNC_0(VAR_3);
    }
  }
}
