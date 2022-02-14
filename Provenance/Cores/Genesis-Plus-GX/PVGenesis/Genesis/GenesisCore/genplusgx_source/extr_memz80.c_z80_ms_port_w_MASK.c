
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cycles; } ;
struct TYPE_3__ {int ym2413; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,unsigned char) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (scalar_t__,unsigned int,unsigned char) ;
 int FUNC_2 (unsigned int,unsigned char,scalar_t__) ;
 int FUNC_3 (unsigned char) ;
 int FUNC_4 (unsigned char) ;
 int FUNC_5 (unsigned int,unsigned char) ;

void FUNC_6(unsigned int VAR_3, unsigned char VAR_4)
{
  switch (VAR_3 & 0xC1)
  {
    case 0x00:
    case 0x01:
    {
      FUNC_2(VAR_3 & 1, VAR_4, VAR_1 + VAR_0);
      return;
    }

    case 0x40:
    case 0x41:
    {
      FUNC_0(VAR_1, VAR_4);
      return;
    }

    case 0x80:
    {
      FUNC_4(VAR_4);
      return;
    }

    case 0x81:
    {
      FUNC_3(VAR_4);
      return;
    }

    default:
    {
      if (!(VAR_3 & 4) && (VAR_2.ym2413 & 1))
      {
        FUNC_1(VAR_1, VAR_3 & 3, VAR_4);
        return;
      }

      FUNC_5(VAR_3 & 0xFF, VAR_4);
      return;
    }
  }
}
