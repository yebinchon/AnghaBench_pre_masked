
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct FsmInst {struct Channel* userdata; } ;
struct Channel {TYPE_5__* cs; TYPE_3__* proc; int chan; } ;
struct TYPE_8__ {int num; } ;
struct TYPE_13__ {TYPE_1__ parm; int arg; int command; int driver; } ;
typedef TYPE_6__ isdn_ctrl ;
struct TYPE_11__ {int (* statcallb ) (TYPE_6__*) ;} ;
struct TYPE_12__ {TYPE_4__ iif; int myid; } ;
struct TYPE_9__ {int chargeinfo; } ;
struct TYPE_10__ {TYPE_2__ para; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_6__*) ;

__attribute__((used)) static void
FUNC_2(struct FsmInst *VAR_1, int VAR_2, void *VAR_3)
{
 struct Channel *VAR_4 = VAR_1->userdata;
 isdn_ctrl VAR_5;

 VAR_5.driver = VAR_4->cs->myid;
 VAR_5.command = VAR_0;
 VAR_5.arg = VAR_4->chan;
 FUNC_0(VAR_5.parm.num, "%d", VAR_4->proc->para.chargeinfo);
 VAR_4->cs->iif.statcallb(&VAR_5);
}
