
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bc_state {TYPE_3__* cs; int channel; } ;
struct TYPE_6__ {int errcode; } ;
struct TYPE_9__ {TYPE_1__ parm; int arg; int command; int driver; } ;
typedef TYPE_4__ isdn_ctrl ;
struct TYPE_7__ {int (* statcallb ) (TYPE_4__*) ;} ;
struct TYPE_8__ {TYPE_2__ iif; int myid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static inline void FUNC_2(struct bc_state *VAR_3)
{
 isdn_ctrl VAR_4;


 FUNC_0(VAR_0, "sending L1ERR");
 VAR_4.driver = VAR_3->cs->myid;
 VAR_4.command = VAR_1;
 VAR_4.arg = VAR_3->channel;
 VAR_4.parm.errcode = VAR_2;
 VAR_3->cs->iif.statcallb(&VAR_4);
}
