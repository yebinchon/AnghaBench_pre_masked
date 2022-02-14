
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char cmd_off; unsigned char cmd_auto; } ;
struct TYPE_4__ {int fanreg; TYPE_1__ cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int ,unsigned char) ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_3(int VAR_5)
{
 unsigned char VAR_6;

 if (VAR_4)
  FUNC_2("fan %s\n", (VAR_5 == VAR_1) ?
    "OFF" : "ON");

 if ((VAR_5 != VAR_1) && (VAR_5 != VAR_0)) {
  FUNC_1("invalid fan state %d requested, setting to auto!\n",
   VAR_5);
  VAR_5 = VAR_0;
 }

 VAR_6 = (VAR_5 == VAR_1) ? VAR_2->cmd.cmd_off
      : VAR_2->cmd.cmd_auto;
 VAR_3 = VAR_5;

 FUNC_0(VAR_2->fanreg, VAR_6);
}
