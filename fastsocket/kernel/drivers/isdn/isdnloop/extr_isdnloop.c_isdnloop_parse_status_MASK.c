
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_18__ {char* statstr; int action; void* command; } ;
typedef TYPE_4__ isdnloop_stat ;
struct TYPE_17__ {int (* statcallb ) (TYPE_6__*) ;} ;
struct TYPE_19__ {int myid; TYPE_3__ interface; int flags; } ;
typedef TYPE_5__ isdnloop_card ;
struct TYPE_15__ {int si1; int screen; int plan; int si2; int eazmsn; int phone; } ;
struct TYPE_16__ {int num; TYPE_1__ setup; } ;
struct TYPE_20__ {int driver; int arg; void* command; TYPE_2__ parm; } ;
typedef TYPE_6__ isdn_ctrl ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (char*,TYPE_6__*) ;
 TYPE_4__* VAR_4 ;
 scalar_t__ FUNC_2 (char*,int *,int) ;
 int FUNC_3 (int ,int,char*,...) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_6__*) ;

__attribute__((used)) static void
FUNC_12(u_char * VAR_5, int VAR_6, isdnloop_card * VAR_7)
{
 isdnloop_stat *VAR_8 = VAR_4;
 int VAR_9 = -1;
 isdn_ctrl VAR_10;

 while (VAR_8->statstr) {
  if (!FUNC_7(VAR_5, VAR_8->statstr, FUNC_6(VAR_8->statstr))) {
   VAR_10.command = VAR_8->command;
   VAR_9 = VAR_8->action;
   break;
  }
  VAR_8++;
 }
 if (VAR_9 == -1)
  return;
 VAR_10.driver = VAR_7->myid;
 VAR_10.arg = VAR_6;
 switch (VAR_9) {
  case 1:

   VAR_7->flags |= (VAR_6) ?
       VAR_1 : VAR_0;
   break;
  case 2:

   VAR_7->flags &= ~((VAR_6) ?
      VAR_1 : VAR_0);
   FUNC_0(VAR_7, VAR_6);
   break;
  case 3:

   FUNC_1(VAR_5 + 6, &VAR_10);
   break;
  case 4:

   FUNC_4(VAR_10.parm.setup.phone, "LEASED%d", VAR_7->myid);
   FUNC_4(VAR_10.parm.setup.eazmsn, "%d", VAR_6 + 1);
   VAR_10.parm.setup.si1 = 7;
   VAR_10.parm.setup.si2 = 0;
   VAR_10.parm.setup.plan = 0;
   VAR_10.parm.setup.screen = 0;
   break;
  case 5:

   FUNC_5(VAR_10.parm.num, VAR_5 + 3, sizeof(VAR_10.parm.num));
   break;
  case 6:

   FUNC_3(VAR_10.parm.num, sizeof(VAR_10.parm.num), "%d",
        (int) FUNC_2(VAR_5 + 7, ((void*)0), 16));
   break;
  case 7:

   VAR_5 += 3;
   if (FUNC_6(VAR_5) == 4)
    FUNC_3(VAR_10.parm.num, sizeof(VAR_10.parm.num), "%s%c%c",
         VAR_5 + 2, *VAR_5, *(VAR_5 + 1));
   else
    FUNC_5(VAR_10.parm.num, VAR_5 + 1, sizeof(VAR_10.parm.num));
   break;
  case 8:

   VAR_7->flags &= ~VAR_0;
   FUNC_0(VAR_7, 0);
   VAR_10.arg = 0;
   VAR_10.driver = VAR_7->myid;
   VAR_7->interface.statcallb(&VAR_10);
   VAR_10.command = VAR_3;
   VAR_10.arg = 0;
   VAR_10.driver = VAR_7->myid;
   VAR_7->interface.statcallb(&VAR_10);
   VAR_10.command = VAR_2;
   VAR_7->flags &= ~VAR_1;
   FUNC_0(VAR_7, 1);
   VAR_10.arg = 1;
   VAR_10.driver = VAR_7->myid;
   VAR_7->interface.statcallb(&VAR_10);
   VAR_10.command = VAR_3;
   VAR_10.arg = 1;
   VAR_10.driver = VAR_7->myid;
   break;
 }
 VAR_7->interface.statcallb(&VAR_10);
}
