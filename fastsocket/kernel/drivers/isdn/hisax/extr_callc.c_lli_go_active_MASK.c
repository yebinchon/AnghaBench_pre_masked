
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct FsmInst {struct Channel* userdata; } ;
struct Channel {int data_open; int debug; scalar_t__ chan; TYPE_5__* cs; TYPE_1__* bcs; } ;
struct TYPE_8__ {scalar_t__* num; } ;
struct TYPE_10__ {scalar_t__ arg; int command; int driver; TYPE_2__ parm; } ;
typedef TYPE_4__ isdn_ctrl ;
struct TYPE_9__ {int (* statcallb ) (TYPE_4__*) ;} ;
struct TYPE_11__ {int (* cardmsg ) (TYPE_5__*,int ,void*) ;TYPE_3__ iif; int myid; } ;
struct TYPE_7__ {scalar_t__ conmsg; } ;


 int FUNC_0 (struct FsmInst*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct Channel*,int ,char*,scalar_t__*) ;
 int FUNC_2 (scalar_t__*,scalar_t__) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_5__*,int ,void*) ;

__attribute__((used)) static void
FUNC_5(struct FsmInst *VAR_3, int VAR_4, void *VAR_5)
{
 struct Channel *VAR_6 = VAR_3->userdata;
 isdn_ctrl VAR_7;


 FUNC_0(VAR_3, VAR_2);
 VAR_6->data_open = !0;
 if (VAR_6->bcs->conmsg)
  FUNC_2(VAR_7.parm.num, VAR_6->bcs->conmsg);
 else
  VAR_7.parm.num[0] = 0;
 if (VAR_6->debug & 1)
  FUNC_1(VAR_6, 0, "STAT_BCONN %s", VAR_7.parm.num);
 VAR_7.driver = VAR_6->cs->myid;
 VAR_7.command = VAR_0;
 VAR_7.arg = VAR_6->chan;
 VAR_6->cs->iif.statcallb(&VAR_7);
 VAR_6->cs->cardmsg(VAR_6->cs, VAR_1, (void *) (long)VAR_6->chan);
}
