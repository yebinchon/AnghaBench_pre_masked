
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cycles; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,unsigned char) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (unsigned int,unsigned char) ;
 int FUNC_2 (unsigned int,unsigned char,scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (unsigned char) ;
 int FUNC_4 (unsigned char) ;
 int FUNC_5 (unsigned int,unsigned char) ;

void FUNC_6(unsigned int VAR_4, unsigned char VAR_5)
{
  switch(VAR_4 & 0xC1)
  {
    case 0x00:
    case 0x01:
    {
      VAR_4 &= 0xFF;

      if (VAR_4 < 0x07)
      {
        if (VAR_3 == VAR_1)
        {
          FUNC_1(VAR_4, VAR_5);
          return;
        }

        FUNC_5(VAR_4 & 0xFF, VAR_5);
        return;
      }

      FUNC_2(VAR_4 & 1, VAR_5, VAR_2 + VAR_0);
      return;
    }

    case 0x40:
    case 0x41:
    {
      FUNC_0(VAR_2, VAR_5);
      return;
    }

    case 0x80:
    {
      FUNC_4(VAR_5);
      return;
    }

    case 0x81:
    {
      FUNC_3(VAR_5);
      return;
    }

    default:
    {
      FUNC_5(VAR_4 & 0xFF, VAR_5);
      return;
    }
  }
}
