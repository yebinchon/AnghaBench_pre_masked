
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


typedef int u_char ;
struct l3_process {TYPE_4__* chan; TYPE_3__* st; } ;
struct TYPE_12__ {int (* statcallb ) (TYPE_6__*) ;} ;
struct IsdnCardState {TYPE_5__ iif; int myid; } ;
struct TYPE_8__ {char* display; } ;
struct TYPE_13__ {int arg; int driver; int command; TYPE_1__ parm; } ;
typedef TYPE_6__ isdn_ctrl ;
struct TYPE_11__ {int chan; } ;
struct TYPE_9__ {struct IsdnCardState* hardware; } ;
struct TYPE_10__ {TYPE_2__ l1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*) ;

__attribute__((used)) static void
FUNC_1(struct l3_process *VAR_2, int VAR_3, u_char *VAR_4)
{ u_char VAR_5;
        isdn_ctrl VAR_6;
 struct IsdnCardState *VAR_7;
        char *VAR_8;

        if (*VAR_4++ != VAR_0) return;
        if ((VAR_5 = *VAR_4++) > 80) return;
 if (!VAR_2->chan) return;

 VAR_8 = VAR_6.parm.display;
        while (VAR_5--)
   *VAR_8++ = *VAR_4++;
 *VAR_8 = '\0';
 VAR_6.command = VAR_1;
 VAR_7 = VAR_2->st->l1.hardware;
 VAR_6.driver = VAR_7->myid;
 VAR_6.arg = VAR_2->chan->chan;
 VAR_7->iif.statcallb(&VAR_6);
}
