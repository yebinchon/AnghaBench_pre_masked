
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cycles; } ;
struct TYPE_3__ {int ym2413; } ;


 int FUNC_0 (int ,unsigned char) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int ,unsigned int,unsigned char) ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (unsigned char) ;
 int FUNC_4 (unsigned int,unsigned char) ;

void FUNC_5(unsigned int VAR_2, unsigned char VAR_3)
{
  switch (VAR_2 & 0xC1)
  {
    case 0x00:
    case 0x01:
    {
      FUNC_4(VAR_2, VAR_3);
      return;
    }

    case 0x40:
    case 0x41:
    {
      FUNC_0(VAR_0, VAR_3);
      return;
    }

    case 0x80:
    {
      FUNC_3(VAR_3);
      return;
    }

    case 0x81:
    {
      FUNC_2(VAR_3);
      return;
    }

    default:
    {
      if (!(VAR_2 & 4) && (VAR_1.ym2413 & 1))
      {
        FUNC_1(VAR_0, VAR_2 & 3, VAR_3);
        return;
      }

      FUNC_4(VAR_2 & 0xFF, VAR_3);
      return;
    }
  }
}
