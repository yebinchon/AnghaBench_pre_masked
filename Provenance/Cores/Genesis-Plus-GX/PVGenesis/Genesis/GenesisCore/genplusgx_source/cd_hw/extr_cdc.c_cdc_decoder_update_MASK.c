
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
struct TYPE_10__ {int w; } ;
struct TYPE_9__ {int w; } ;
struct TYPE_12__ {int* ctrl; int* stat; int ifctrl; scalar_t__ ram; TYPE_4__ pt; TYPE_3__ wa; int ifstat; scalar_t__* head; } ;
struct TYPE_11__ {int pending; TYPE_2__* regs; } ;
struct TYPE_7__ {int l; } ;
struct TYPE_8__ {TYPE_1__ byte; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int FUNC_2 (int) ;
 TYPE_5__ VAR_5 ;

int FUNC_3(uint32 VAR_6)
{

  if (VAR_4.ctrl[0] & VAR_0)
  {

    *(uint32 *)(VAR_4.head[0]) = VAR_6;


    VAR_4.stat[3] = 0x00;


    VAR_4.ifstat &= ~VAR_1;


    if (VAR_4.ifctrl & VAR_2)
    {

      VAR_5.pending |= (1 << 5);


      if (VAR_5.regs[0x32>>1].byte.l & 0x20)
      {

        FUNC_2((VAR_5.pending & VAR_5.regs[0x32>>1].byte.l) >> 1);
      }
    }


    if (VAR_4.ctrl[0] & VAR_3)
    {
      uint16 VAR_7;


      VAR_4.pt.w += 2352;


      VAR_4.wa.w += 2352;


      VAR_7 = VAR_4.pt.w & 0x3fff;


      *(uint32 *)(VAR_4.ram + VAR_7) = VAR_6;


      FUNC_0(VAR_4.ram + 4 + VAR_7);


      if (VAR_7 > (0x4000 - 2048 - 4))
      {

        FUNC_1(VAR_4.ram, VAR_4.ram + 0x4000, VAR_7 + 2048 + 4 - 0x4000);
      }


      return 1;
    }
  }


  return 0;
}
