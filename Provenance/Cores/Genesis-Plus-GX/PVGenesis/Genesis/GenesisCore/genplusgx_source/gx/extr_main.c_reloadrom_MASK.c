
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ status; } ;
struct TYPE_7__ {int hot_swap; int s_device; int s_default; } ;
struct TYPE_5__ {scalar_t__ boot; } ;
struct TYPE_6__ {TYPE_1__ cartridge; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 TYPE_4__ VAR_5 ;
 TYPE_3__ VAR_6 ;
 int FUNC_2 () ;
 scalar_t__ VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 TYPE_2__ VAR_8 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_9 ;
 int FUNC_8 () ;
 int FUNC_9 () ;

void FUNC_10(void)
{

  if ((VAR_6.hot_swap == 3) && ((VAR_9 != VAR_2) || VAR_8.cartridge.boot))
  {

    if ((VAR_9 & VAR_4) == VAR_3)
    {

      FUNC_3();
      FUNC_4(1);
    }
    else
    {

      FUNC_6();
      FUNC_7();
    }
  }


  else if ((VAR_9 != VAR_2) || (VAR_5.status != VAR_0))
  {

    VAR_7 = 0;
    FUNC_1(VAR_1, FUNC_2());


    FUNC_8();
    FUNC_9();


    VAR_6.hot_swap |= 2;
  }


  FUNC_5(0,VAR_6.s_device);


  FUNC_5(VAR_6.s_default,VAR_6.s_device);


  FUNC_0();
}
