
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct die_args {int regs; int trapnr; } ;
struct TYPE_2__ {int (* online_heartbeat ) () ;int (* offline_heartbeat ) () ;} ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 () ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_4(struct notifier_block *VAR_6, unsigned long VAR_7, void *VAR_8)
{
 struct die_args *VAR_9 = VAR_8;

 switch (VAR_7) {
 case 128:
  if (VAR_9->trapnr == VAR_1)
   FUNC_3();

  if (((VAR_9->trapnr == VAR_2) ||
       (VAR_9->trapnr == VAR_3)) &&
      !FUNC_2(VAR_9->regs))
   FUNC_3();

  break;
 case 136:
 case 140:
  break;
 case 129:
 case 139:
 default:
  FUNC_3();
 }


 return VAR_0;
}
