
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; } ;
struct TYPE_2__ {int sysbus; int busy; int pa_cmd; scalar_t__ status; scalar_t__ command; void* pa_scb; void* pa_iscp; scalar_t__ pad; } ;
struct i596_private {TYPE_1__ iscp; TYPE_1__ scp; int * cmd_head; scalar_t__ cmd_backlog; int last_cmd; TYPE_1__ scb; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (void*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 struct i596_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int) ;
 void* FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_7(struct net_device *VAR_4) {
 struct i596_private *VAR_5 = FUNC_3(VAR_4);
 int VAR_6;
 VAR_5->scp.sysbus = 0x00440000;
 VAR_5->scp.pad = 0;
 VAR_5->scp.pa_iscp = FUNC_6(&(VAR_5->iscp));




 VAR_5->iscp.busy = 0x0001;
 VAR_5->iscp.pa_scb = FUNC_6(&(VAR_5->scb));

 VAR_5->scb.command = 0;
 VAR_5->scb.status = 0;
 VAR_5->scb.pa_cmd = VAR_0;


 VAR_5->last_cmd = VAR_3;
 VAR_5->cmd_backlog = 0;
 VAR_5->cmd_head = ((void*)0);






 FUNC_1(0, VAR_2);
 FUNC_5(100);





 FUNC_1(FUNC_6(&VAR_5->scp), VAR_1);






 FUNC_0();




 VAR_6 = 100;
 while (VAR_5->iscp.busy) {
  if (--VAR_6 == 0) {

   FUNC_4("%s: i82596 initialization timed out\n",
          VAR_4->name);
   return 1;
  }
  FUNC_5(5);
  FUNC_2();
 }


 return 0;
}
