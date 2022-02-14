
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cycles; } ;


 int FUNC_0 (int ,unsigned char) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (unsigned int,unsigned char) ;

void FUNC_4(unsigned int VAR_1, unsigned char VAR_2)
{
  switch(VAR_1 & 0xC1)
  {
    case 0x40:
    case 0x41:
    {
      FUNC_0(VAR_0, VAR_2);
      return;
    }

    case 0x80:
    {
      FUNC_2(VAR_2);
      return;
    }

    case 0x81:
    {
      FUNC_1(VAR_2);
      return;
    }

    default:
    {
      FUNC_3(VAR_1 & 0xFF, VAR_2);
      return;
    }
  }
}
