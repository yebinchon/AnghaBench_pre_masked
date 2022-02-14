
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cycles; } ;
struct TYPE_3__ {int ym2413; } ;


 unsigned char FUNC_0 (unsigned int) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 unsigned char FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 unsigned char FUNC_3 (int ) ;
 unsigned char FUNC_4 () ;
 unsigned char FUNC_5 (unsigned int) ;

unsigned char FUNC_6(unsigned int VAR_2)
{
  switch (VAR_2 & 0xC1)
  {
    case 0x40:
    {
      return ((FUNC_2(VAR_0 - 15) >> 8) & 0xFF);
    }

    case 0x41:
    {
      return (FUNC_2(VAR_0 - 15) & 0xFF);
    }

    case 0x80:
    {
      return FUNC_4();
    }

    case 0x81:
    {
      return FUNC_3(VAR_0);
    }

    default:
    {
      VAR_2 &= 0xFF;

      if ((VAR_2 == 0xC0) || (VAR_2 == 0xC1) || (VAR_2 == 0xDC) || (VAR_2 == 0xDD))
      {
        return FUNC_1(VAR_2 & 1);
      }


      if ((VAR_2 >= 0xF0) && (VAR_1.ym2413 & 1))
      {
        return FUNC_0(VAR_2 & 3);
      }

      return FUNC_5(VAR_2);
    }
  }
}
