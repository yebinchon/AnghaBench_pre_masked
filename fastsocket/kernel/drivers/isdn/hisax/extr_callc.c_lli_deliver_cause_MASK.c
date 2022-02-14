
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


struct Channel {TYPE_5__* cs; TYPE_3__* proc; int chan; } ;
struct TYPE_8__ {int num; } ;
struct TYPE_13__ {TYPE_1__ parm; int arg; int command; int driver; } ;
typedef TYPE_6__ isdn_ctrl ;
struct TYPE_11__ {int (* statcallb ) (TYPE_6__*) ;} ;
struct TYPE_12__ {scalar_t__ protocol; TYPE_4__ iif; int myid; } ;
struct TYPE_9__ {int cause; int loc; } ;
struct TYPE_10__ {TYPE_2__ para; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (TYPE_6__*) ;

__attribute__((used)) static inline void
FUNC_2(struct Channel *VAR_3)
{
 isdn_ctrl VAR_4;

 if (!VAR_3->proc)
  return;
 if (VAR_3->proc->para.cause == VAR_2)
  return;
 VAR_4.driver = VAR_3->cs->myid;
 VAR_4.command = VAR_1;
 VAR_4.arg = VAR_3->chan;
 if (VAR_3->cs->protocol == VAR_0)
  FUNC_0(VAR_4.parm.num, "E%02X%02X", VAR_3->proc->para.loc & 0x7f,
   VAR_3->proc->para.cause & 0x7f);
 else
  FUNC_0(VAR_4.parm.num, "%02X%02X", VAR_3->proc->para.loc & 0x7f,
   VAR_3->proc->para.cause & 0x7f);
 VAR_3->cs->iif.statcallb(&VAR_4);
}
