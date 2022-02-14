
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_7__ {struct IsdnCardState* hardware; } ;
struct PStack {TYPE_1__ l1; } ;
struct TYPE_10__ {int (* statcallb ) (TYPE_5__*) ;} ;
struct IsdnCardState {TYPE_4__ iif; int myid; } ;
struct TYPE_8__ {int hl_id; int proc; int * data; int datalen; scalar_t__ timeout; scalar_t__ ll_id; } ;
struct TYPE_9__ {TYPE_2__ ni1_io; } ;
struct TYPE_11__ {TYPE_3__ parm; int arg; int command; int driver; } ;
typedef TYPE_5__ isdn_ctrl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct PStack*,char*,char*,int,int,int ) ;
 int FUNC_1 (TYPE_5__*) ;

__attribute__((used)) static void
FUNC_2(struct PStack *VAR_2, int VAR_3, int VAR_4,
                    int VAR_5, u_char *VAR_6, u_char VAR_7)
{ isdn_ctrl VAR_8;
  struct IsdnCardState *VAR_9;

  FUNC_0(VAR_2, "dummy invoke %s id=0x%x ident=0x%x datalen=%d",
               (VAR_3 == -1) ? "local" : "broadcast",VAR_4,VAR_5,VAR_7);
  if (VAR_3 >= -1) return;

  VAR_9 = VAR_2->l1.hardware;
  VAR_8.driver = VAR_9->myid;
  VAR_8.command = VAR_0;
  VAR_8.arg = VAR_1;
  VAR_8.parm.ni1_io.hl_id = VAR_4;
  VAR_8.parm.ni1_io.ll_id = 0;
  VAR_8.parm.ni1_io.proc = VAR_5;
  VAR_8.parm.ni1_io.timeout= 0;
  VAR_8.parm.ni1_io.datalen = VAR_7;
  VAR_8.parm.ni1_io.data = VAR_6;

  VAR_9->iif.statcallb(&VAR_8);
}
