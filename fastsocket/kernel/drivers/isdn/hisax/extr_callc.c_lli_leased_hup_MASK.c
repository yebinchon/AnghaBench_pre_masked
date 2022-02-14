
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct FsmInst {int dummy; } ;
struct Channel {int debug; TYPE_3__* cs; int chan; } ;
struct TYPE_6__ {int num; } ;
struct TYPE_9__ {TYPE_1__ parm; int arg; int command; int driver; } ;
typedef TYPE_4__ isdn_ctrl ;
struct TYPE_7__ {int (* statcallb ) (TYPE_4__*) ;} ;
struct TYPE_8__ {TYPE_2__ iif; int myid; } ;


 int FUNC_0 (struct Channel*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct Channel*,int ,char*) ;
 int FUNC_2 (struct FsmInst*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_5(struct FsmInst *VAR_2, struct Channel *VAR_3)
{
 isdn_ctrl VAR_4;

 VAR_4.driver = VAR_3->cs->myid;
 VAR_4.command = VAR_0;
 VAR_4.arg = VAR_3->chan;
 FUNC_3(VAR_4.parm.num, "L0010");
 VAR_3->cs->iif.statcallb(&VAR_4);
 if (VAR_3->debug & 1)
  FUNC_1(VAR_3, 0, "STAT_DHUP");
 FUNC_0(VAR_3, VAR_1);
 FUNC_2(VAR_2);
}
