
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct FsmInst {struct Channel* userdata; } ;
struct Channel {scalar_t__ chan; TYPE_4__* cs; scalar_t__ Flags; } ;
struct TYPE_6__ {int num; } ;
struct TYPE_8__ {TYPE_1__ parm; scalar_t__ arg; int command; int driver; } ;
typedef TYPE_3__ isdn_ctrl ;
struct TYPE_7__ {int (* statcallb ) (TYPE_3__*) ;} ;
struct TYPE_9__ {int (* cardmsg ) (TYPE_4__*,int ,void*) ;TYPE_2__ iif; int myid; } ;


 int FUNC_0 (struct FsmInst*,int ) ;
 int FUNC_1 (struct Channel*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*,int ,void*) ;

__attribute__((used)) static void
FUNC_5(struct FsmInst *VAR_4, int VAR_5, void *VAR_6)
{
 struct Channel *VAR_7 = VAR_4->userdata;
 isdn_ctrl VAR_8;

 FUNC_0(VAR_4, VAR_3);
 VAR_8.driver = VAR_7->cs->myid;
 VAR_8.command = VAR_0;
 VAR_8.arg = VAR_7->chan;
 FUNC_2(VAR_8.parm.num, "L%02X%02X", 0, 0x2f);
 VAR_7->cs->iif.statcallb(&VAR_8);
 FUNC_1(VAR_7, VAR_1);
 VAR_7->Flags = 0;
 VAR_7->cs->cardmsg(VAR_7->cs, VAR_2, (void *) (long)VAR_7->chan);
}
