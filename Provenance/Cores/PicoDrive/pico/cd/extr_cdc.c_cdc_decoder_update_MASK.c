
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16 ;
struct TYPE_4__ {int* s68k_regs; } ;
struct TYPE_3__ {int* ctrl; int* stat; int ifctrl; int pt; int wa; int * ram; int ifstat; int ** head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int *,int) ;

int FUNC_4(uint8 VAR_8[4])
{

  if (VAR_7.ctrl[0] & VAR_0)
  {

    FUNC_3(VAR_7.head[0], VAR_8, sizeof(VAR_7.head[0]));


    VAR_7.stat[3] = 0x00;


    VAR_7.ifstat &= ~VAR_1;


    if (VAR_7.ifctrl & VAR_2)
    {

      if (VAR_6->s68k_regs[0x32+1] & VAR_5)
      {

        FUNC_2(VAR_4, "cdc DEC irq 5");
        FUNC_0(5);
      }
    }


    if (VAR_7.ctrl[0] & VAR_3)
    {
      uint16 VAR_9;


      VAR_7.pt += 2352;


      VAR_7.wa += 2352;


      VAR_9 = VAR_7.pt & 0x3fff;


      FUNC_3(VAR_7.ram + VAR_9, VAR_8, 4);


      FUNC_1(VAR_7.ram + 4 + VAR_9);


      if (VAR_9 > (0x4000 - 2048 - 4))
      {

        FUNC_3(VAR_7.ram, VAR_7.ram + 0x4000, VAR_9 + 2048 + 4 - 0x4000);
      }


      return 1;
    }
  }


  return 0;
}
