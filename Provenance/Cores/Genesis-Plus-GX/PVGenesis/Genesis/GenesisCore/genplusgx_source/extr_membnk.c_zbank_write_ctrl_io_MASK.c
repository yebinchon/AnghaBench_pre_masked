
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int cycles; } ;
struct TYPE_5__ {int (* time_w ) (unsigned int,unsigned int) ;} ;
struct TYPE_7__ {TYPE_1__ hw; } ;
struct TYPE_6__ {int bios; } ;


 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (unsigned int,unsigned int) ;
 int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (unsigned int,unsigned int) ;

void FUNC_7(unsigned int VAR_3, unsigned int VAR_4)
{
  switch ((VAR_3 >> 8) & 0xFF)
  {
    case 0x00:
    {

      if ((VAR_3 & 0xE1) == 0x01)
      {
        FUNC_3((VAR_3 >> 1) & 0x0F, VAR_4);
        return;
      }
      FUNC_6(VAR_3, VAR_4);
      return;
    }

    case 0x11:
    {
      if (!(VAR_3 & 1))
      {
        FUNC_1(VAR_4 & 1, VAR_0);
        return;
      }
      FUNC_6(VAR_3, VAR_4);
      return;
    }

    case 0x12:
    {
      if (!(VAR_3 & 1))
      {
        FUNC_2(VAR_4 & 1, VAR_0);
        return;
      }
      FUNC_6(VAR_3, VAR_4);
      return;
    }

    case 0x30:
    {
      VAR_1.hw.time_w(VAR_3, VAR_4);
      return;
    }

    case 0x41:
    {
      if ((VAR_2.bios & 1) && (VAR_3 & 1))
      {
        FUNC_0(VAR_4 & 1);
        return;
      }
      FUNC_6(VAR_3, VAR_4);
      return;
    }

    case 0x10:
    case 0x20:
    case 0x40:
    case 0x44:
    case 0x50:
    {
      FUNC_6(VAR_3, VAR_4);
      return;
    }

    default:
    {
      FUNC_5(VAR_3, VAR_4);
      return;
    }
  }
}
