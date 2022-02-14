
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 () ;
 int* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_1(void)
{

  if ((VAR_8 & VAR_4) == VAR_3)
  {
    VAR_6[0x00] = VAR_7 | (VAR_5.bios & 1);
    VAR_6[0x01] = 0x00;
    VAR_6[0x02] = 0x00;
    VAR_6[0x03] = 0x00;
    VAR_6[0x04] = 0x00;
    VAR_6[0x05] = 0x00;
    VAR_6[0x06] = 0x00;
    VAR_6[0x07] = 0xFF;
    VAR_6[0x08] = 0x00;
    VAR_6[0x09] = 0x00;
    VAR_6[0x0A] = 0xFF;
    VAR_6[0x0B] = 0x00;
    VAR_6[0x0C] = 0x00;
    VAR_6[0x0D] = 0xFB;
    VAR_6[0x0E] = 0x00;
    VAR_6[0x0F] = 0x00;


    if (VAR_8 != VAR_2)
    {
      VAR_6[0x00] |= 0x20;
    }
  }
  else
  {

    VAR_6[0x00] = 0x80 | (VAR_7 >> 1);
    VAR_6[0x01] = 0x00;
    VAR_6[0x02] = 0xFF;
    VAR_6[0x03] = 0x00;
    VAR_6[0x04] = 0xFF;
    VAR_6[0x05] = 0x00;
    VAR_6[0x06] = 0xFF;


    VAR_6[0x0D] = VAR_1;


    if (VAR_8 != VAR_4)
    {
      VAR_6[0x0D] |= VAR_0;
    }


    VAR_6[0x0E] = 0x00;
    VAR_6[0x0F] = 0xFF;
  }


  FUNC_0();
}
