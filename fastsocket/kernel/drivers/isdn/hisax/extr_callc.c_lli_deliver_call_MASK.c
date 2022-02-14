
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct FsmInst {struct Channel* userdata; } ;
struct Channel {int chan; int debug; TYPE_8__* cs; TYPE_7__* proc; TYPE_6__* d_st; int drel_timer; int setup; } ;
typedef int setup_parm ;
struct TYPE_24__ {int setup; } ;
struct TYPE_26__ {int arg; TYPE_3__ parm; int command; int driver; } ;
typedef TYPE_5__ isdn_ctrl ;
struct TYPE_23__ {int (* statcallb ) (TYPE_5__*) ;} ;
struct TYPE_29__ {int (* cardmsg ) (TYPE_8__*,int ,void*) ;TYPE_2__ iif; int myid; } ;
struct TYPE_22__ {int setup; } ;
struct TYPE_28__ {TYPE_1__ para; } ;
struct TYPE_25__ {int (* l4l3 ) (TYPE_6__*,int,TYPE_7__*) ;} ;
struct TYPE_27__ {TYPE_4__ lli; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct FsmInst*,int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct Channel*,int,char*,...) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (TYPE_8__*,int ,void*) ;
 int FUNC_5 (TYPE_8__*,int ,void*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_6__*,int,TYPE_7__*) ;
 int FUNC_8 (TYPE_6__*,int,TYPE_7__*) ;
 int FUNC_9 (TYPE_6__*,int,TYPE_7__*) ;
 int FUNC_10 (TYPE_6__*,int,TYPE_7__*) ;
 int FUNC_11 (TYPE_6__*,int,TYPE_7__*) ;
 int FUNC_12 (TYPE_8__*,int ,void*) ;
 int FUNC_13 (TYPE_6__*,int,TYPE_7__*) ;

__attribute__((used)) static void
FUNC_14(struct FsmInst *VAR_14, int VAR_15, void *VAR_16)
{
 struct Channel *VAR_17 = VAR_14->userdata;
 isdn_ctrl VAR_18;
 int VAR_19;

 VAR_17->cs->cardmsg(VAR_17->cs, VAR_8, (void *) (long)VAR_17->chan);





 if (1) {
  FUNC_0(VAR_14, VAR_12);
  if (VAR_17->debug & 1)
   FUNC_2(VAR_17, 0, (VAR_17->chan < 2) ? "STAT_ICALL" : "STAT_ICALLW");
  VAR_18.driver = VAR_17->cs->myid;
  VAR_18.command = ((VAR_17->chan < 2) ? VAR_5 : VAR_6);

  VAR_18.arg = VAR_17->chan;




  FUNC_3(&VAR_18.parm.setup, &VAR_17->proc->para.setup, sizeof(setup_parm));
  VAR_19 = VAR_17->cs->iif.statcallb(&VAR_18);
  if (VAR_17->debug & 1)
   FUNC_2(VAR_17, 1, "statcallb ret=%d", VAR_19);

  switch (VAR_19) {
   case 1:
    FUNC_1(&VAR_17->drel_timer, 61);
    FUNC_0(VAR_14, VAR_10);
    VAR_17->d_st->lli.l4l3(VAR_17->d_st, VAR_0 | VAR_9, VAR_17->proc);
    break;
   case 5:
   case 4:
    FUNC_1(&VAR_17->drel_timer, 61);
    FUNC_0(VAR_14, VAR_11);
    VAR_17->d_st->lli.l4l3(VAR_17->d_st, VAR_3 | VAR_9, VAR_17->proc);
    if (VAR_19 == 5) {
     FUNC_3(&VAR_17->setup, &VAR_18.parm.setup, sizeof(setup_parm));
     VAR_17->d_st->lli.l4l3(VAR_17->d_st, VAR_4 | VAR_9, VAR_17->proc);
    }
    break;
   case 2:
    break;
   case 3:
    FUNC_1(&VAR_17->drel_timer, 61);
    VAR_17->d_st->lli.l4l3(VAR_17->d_st, VAR_2 | VAR_9, VAR_17->proc);
    break;
   case 0:
   default:
    VAR_17->d_st->lli.l4l3(VAR_17->d_st, VAR_1 | VAR_9, VAR_17->proc);
    VAR_17->cs->cardmsg(VAR_17->cs, VAR_7, (void *) (long)VAR_17->chan);
    FUNC_0(VAR_14, VAR_13);
    break;
  }
 } else {
  VAR_17->d_st->lli.l4l3(VAR_17->d_st, VAR_1 | VAR_9, VAR_17->proc);
  VAR_17->cs->cardmsg(VAR_17->cs, VAR_7, (void *) (long)VAR_17->chan);
 }
}
