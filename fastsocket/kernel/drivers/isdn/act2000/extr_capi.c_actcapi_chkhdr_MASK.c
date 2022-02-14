
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ cmd; scalar_t__ subcmd; } ;
struct TYPE_8__ {int applicationID; int len; TYPE_1__ cmd; } ;
typedef TYPE_3__ actcapi_msghdr ;
typedef int act2000_card ;
struct TYPE_7__ {scalar_t__ cmd; scalar_t__ subcmd; } ;
struct TYPE_9__ {TYPE_2__ cmd; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;

int
FUNC_0(act2000_card * VAR_2, actcapi_msghdr *VAR_3)
{
 int VAR_4;

 if (VAR_3->applicationID != 1)
  return 0;
 if (VAR_3->len < 9)
  return 0;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if ((VAR_3->cmd.cmd == VAR_1[VAR_4].cmd.cmd) &&
      (VAR_3->cmd.subcmd == VAR_1[VAR_4].cmd.subcmd)) {
   return (VAR_4?1:2);
  }
 return 0;
}
