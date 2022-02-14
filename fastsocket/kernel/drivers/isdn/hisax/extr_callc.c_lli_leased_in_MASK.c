
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct FsmInst {struct Channel* userdata; } ;
struct Channel {int chan; int debug; TYPE_5__* cs; int leased; } ;
struct TYPE_8__ {int si1; int phone; int eazmsn; scalar_t__ screen; scalar_t__ plan; scalar_t__ si2; } ;
struct TYPE_9__ {TYPE_1__ setup; } ;
struct TYPE_11__ {int driver; int arg; TYPE_2__ parm; int command; } ;
typedef TYPE_4__ isdn_ctrl ;
struct TYPE_10__ {int (* statcallb ) (TYPE_4__*) ;} ;
struct TYPE_12__ {int myid; int (* cardmsg ) (TYPE_5__*,int ,void*) ;TYPE_3__ iif; } ;


 int FUNC_0 (struct FsmInst*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct Channel*,int,char*,...) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_5__*,int ,void*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_5__*,int ,void*) ;

__attribute__((used)) static void
FUNC_6(struct FsmInst *VAR_6, int VAR_7, void *VAR_8)
{
 struct Channel *VAR_9 = VAR_6->userdata;
 isdn_ctrl VAR_10;
 int VAR_11;

 if (!VAR_9->leased)
  return;
 VAR_9->cs->cardmsg(VAR_9->cs, VAR_3, (void *) (long)VAR_9->chan);
 FUNC_0(VAR_6, VAR_4);
 if (VAR_9->debug & 1)
  FUNC_1(VAR_9, 0, "STAT_ICALL_LEASED");
 VAR_10.driver = VAR_9->cs->myid;
 VAR_10.command = ((VAR_9->chan < 2) ? VAR_0 : VAR_1);
 VAR_10.arg = VAR_9->chan;
 VAR_10.parm.setup.si1 = 7;
 VAR_10.parm.setup.si2 = 0;
 VAR_10.parm.setup.plan = 0;
 VAR_10.parm.setup.screen = 0;
 FUNC_2(VAR_10.parm.setup.eazmsn,"%d", VAR_9->chan + 1);
 FUNC_2(VAR_10.parm.setup.phone,"LEASED%d", VAR_9->cs->myid);
 VAR_11 = VAR_9->cs->iif.statcallb(&VAR_10);
 if (VAR_9->debug & 1)
  FUNC_1(VAR_9, 1, "statcallb ret=%d", VAR_11);
 if (!VAR_11) {
  VAR_9->cs->cardmsg(VAR_9->cs, VAR_2, (void *) (long)VAR_9->chan);
  FUNC_0(VAR_6, VAR_5);
 }
}
