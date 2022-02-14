
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int watchdog_enable; scalar_t__ reboot; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 if (VAR_2.watchdog_enable == 1)
  FUNC_1(VAR_0, VAR_1);

 if (VAR_2.reboot)
  FUNC_0();
}
