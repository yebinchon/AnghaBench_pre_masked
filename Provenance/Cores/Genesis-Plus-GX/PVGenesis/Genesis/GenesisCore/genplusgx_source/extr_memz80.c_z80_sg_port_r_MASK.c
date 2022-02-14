
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cycles; } ;


 TYPE_1__ VAR_0 ;
 unsigned char FUNC_0 (unsigned int) ;
 unsigned char FUNC_1 (int ) ;
 unsigned char FUNC_2 () ;
 unsigned char FUNC_3 (unsigned int) ;

unsigned char FUNC_4(unsigned int VAR_1)
{
  switch (VAR_1 & 0xC1)
  {
    case 0x80:
    {
      return FUNC_2();
    }

    case 0x81:
    {
      return FUNC_1(VAR_0);
    }

    case 0xC0:
    case 0xC1:
    {
      return FUNC_0(VAR_1 & 1);
    }

    default:
    {
      return FUNC_3(VAR_1);
    }
  }
}
