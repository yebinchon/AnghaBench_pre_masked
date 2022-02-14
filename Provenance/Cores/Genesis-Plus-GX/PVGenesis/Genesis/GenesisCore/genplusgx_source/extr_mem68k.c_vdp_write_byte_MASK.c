
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cycles; } ;


 int FUNC_0 (int ,unsigned int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;

void FUNC_6(unsigned int VAR_1, unsigned int VAR_2)
{
  switch (VAR_1 & 0xFC)
  {
    case 0x00:
    {
      FUNC_4(VAR_2 << 8 | VAR_2);
      return;
    }

    case 0x04:
    {
      FUNC_3(VAR_2 << 8 | VAR_2);
      return;
    }

    case 0x10:
    case 0x14:
    {
      if (VAR_1 & 1)
      {
        FUNC_0(VAR_0.cycles, VAR_2);
        return;
      }
      FUNC_2(VAR_1, VAR_2);
      return;
    }

    case 0x18:
    {
      FUNC_2(VAR_1, VAR_2);
      return;
    }

    case 0x1C:
    {
      FUNC_5(VAR_2 << 8 | VAR_2);
      return;
    }

    default:
    {
      FUNC_1(VAR_1, VAR_2);
      return;
    }
  }
}
