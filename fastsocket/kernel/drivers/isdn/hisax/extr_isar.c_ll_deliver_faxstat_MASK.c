
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
struct Channel {int chan; } ;
struct BCState {TYPE_8__* cs; TYPE_5__* st; } ;
struct TYPE_9__ {int cmd; } ;
struct TYPE_10__ {TYPE_1__ aux; } ;
struct TYPE_14__ {TYPE_2__ parm; int arg; int command; int driver; } ;
typedef TYPE_6__ isdn_ctrl ;
struct TYPE_11__ {int (* statcallb ) (TYPE_6__*) ;} ;
struct TYPE_15__ {int debug; TYPE_3__ iif; int myid; } ;
struct TYPE_12__ {scalar_t__ userdata; } ;
struct TYPE_13__ {TYPE_4__ lli; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_8__*,char*,int ) ;
 int FUNC_1 (TYPE_6__*) ;

__attribute__((used)) static void
FUNC_2(struct BCState *VAR_2, u_char VAR_3)
{
        isdn_ctrl VAR_4;
 struct Channel *VAR_5 = (struct Channel *) VAR_2->st->lli.userdata;

 if (VAR_2->cs->debug & VAR_1)
  FUNC_0(VAR_2->cs, "HL->LL FAXIND %x", VAR_3);
 VAR_4.driver = VAR_2->cs->myid;
 VAR_4.command = VAR_0;
 VAR_4.arg = VAR_5->chan;
 VAR_4.parm.aux.cmd = VAR_3;
 VAR_2->cs->iif.statcallb(&VAR_4);
}
