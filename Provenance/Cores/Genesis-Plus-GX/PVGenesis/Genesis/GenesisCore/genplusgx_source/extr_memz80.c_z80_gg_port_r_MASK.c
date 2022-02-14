
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cycles; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 unsigned char FUNC_0 (unsigned int) ;
 unsigned char FUNC_1 (unsigned int) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 unsigned char FUNC_3 (int ) ;
 unsigned char FUNC_4 () ;
 unsigned char FUNC_5 (unsigned int) ;

unsigned char FUNC_6(unsigned int VAR_3)
{
  switch(VAR_3 & 0xC1)
  {
    case 0x00:
    case 0x01:
    {
      VAR_3 &= 0xFF;

      if (VAR_3 < 0x07)
      {
        if (VAR_2 == VAR_0)
        {
          return FUNC_0(VAR_3);
        }
      }

      return FUNC_5(VAR_3);
    }

    case 0x40:
    {
      return ((FUNC_2(VAR_1) >> 8) & 0xFF);
    }

    case 0x41:
    {
      return (FUNC_2(VAR_1) & 0xFF);
    }

    case 0x80:
    {
      return FUNC_4();
    }

    case 0x81:
    {
      return FUNC_3(VAR_1);
    }

    default:
    {
      VAR_3 &= 0xFF;

      if ((VAR_3 == 0xC0) || (VAR_3 == 0xC1) || (VAR_3 == 0xDC) || (VAR_3 == 0xDD))
      {
        return FUNC_1(VAR_3 & 1);
      }

      return FUNC_5(VAR_3);
    }
  }
}
