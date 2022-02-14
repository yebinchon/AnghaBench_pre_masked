
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef char u_char ;
typedef int ncmd ;
struct TYPE_17__ {int si1; int screen; int plan; void* si2; int eazmsn; int phone; } ;
struct TYPE_18__ {int num; TYPE_2__ setup; } ;
struct TYPE_19__ {int driver; int arg; void* command; TYPE_3__ parm; } ;
typedef TYPE_4__ isdn_ctrl ;
struct TYPE_20__ {char* statstr; int action; void* command; } ;
typedef TYPE_5__ icn_stat ;
struct TYPE_16__ {int (* statcallb ) (TYPE_4__*) ;} ;
struct TYPE_21__ {int myid; int flags; TYPE_1__ interface; int lock; int * rcvidx; } ;
typedef TYPE_6__ icn_card ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (TYPE_6__*,int) ;
 TYPE_5__* VAR_4 ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 void* FUNC_2 (char*,int *,int) ;
 int FUNC_3 (int ,int,char*,...) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,char*,int) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_16(u_char * VAR_5, int VAR_6, icn_card * VAR_7)
{
 icn_stat *VAR_8 = VAR_4;
 int VAR_9 = -1;
 unsigned long VAR_10;
 isdn_ctrl VAR_11;

 while (VAR_8->statstr) {
  if (!FUNC_10(VAR_5, VAR_8->statstr, FUNC_9(VAR_8->statstr))) {
   VAR_11.command = VAR_8->command;
   VAR_9 = VAR_8->action;
   break;
  }
  VAR_8++;
 }
 if (VAR_9 == -1)
  return;
 VAR_11.driver = VAR_7->myid;
 VAR_11.arg = VAR_6;
 switch (VAR_9) {
  case 11:
   FUNC_4(&VAR_7->lock, VAR_10);
   FUNC_0(VAR_7,VAR_6);
   VAR_7->rcvidx[VAR_6] = 0;

   if (VAR_7->flags &
       ((VAR_6)?VAR_1:VAR_0)) {

    isdn_ctrl VAR_12;

    VAR_7->flags &= ~((VAR_6)?
       VAR_1:VAR_0);

    FUNC_1(&VAR_12, 0, sizeof(VAR_12));

    VAR_12.driver = VAR_7->myid;
    VAR_12.arg = VAR_6;
    VAR_12.command = VAR_2;
    FUNC_5(&VAR_7->lock, VAR_10);
    VAR_7->interface.statcallb(&VAR_11);
   } else
    FUNC_5(&VAR_7->lock, VAR_10);
   break;
  case 1:
   FUNC_4(&VAR_7->lock, VAR_10);
   FUNC_0(VAR_7,VAR_6);
   VAR_7->flags |= (VAR_6) ?
       VAR_1 : VAR_0;
   FUNC_5(&VAR_7->lock, VAR_10);
   break;
  case 2:
   FUNC_4(&VAR_7->lock, VAR_10);
   VAR_7->flags &= ~((VAR_6) ?
    VAR_1 : VAR_0);
   FUNC_0(VAR_7, VAR_6);
   VAR_7->rcvidx[VAR_6] = 0;
   FUNC_5(&VAR_7->lock, VAR_10);
   break;
  case 3:
   {
    char *VAR_13 = VAR_5 + 6;
    char *VAR_14 = FUNC_7(VAR_13, ',');

    *VAR_14++ = '\0';
    FUNC_8(VAR_11.parm.setup.phone, VAR_13,
     sizeof(VAR_11.parm.setup.phone));
    VAR_14 = FUNC_7(VAR_13 = VAR_14, ',');
    *VAR_14++ = '\0';
    if (!FUNC_9(VAR_13))
     VAR_11.parm.setup.si1 = 0;
    else
     VAR_11.parm.setup.si1 =
         FUNC_2(VAR_13, ((void*)0), 10);
    VAR_14 = FUNC_7(VAR_13 = VAR_14, ',');
    *VAR_14++ = '\0';
    if (!FUNC_9(VAR_13))
     VAR_11.parm.setup.si2 = 0;
    else
     VAR_11.parm.setup.si2 =
         FUNC_2(VAR_13, ((void*)0), 10);
    FUNC_8(VAR_11.parm.setup.eazmsn, VAR_14,
     sizeof(VAR_11.parm.setup.eazmsn));
   }
   VAR_11.parm.setup.plan = 0;
   VAR_11.parm.setup.screen = 0;
   break;
  case 4:
   FUNC_6(VAR_11.parm.setup.phone, "LEASED%d", VAR_7->myid);
   FUNC_6(VAR_11.parm.setup.eazmsn, "%d", VAR_6 + 1);
   VAR_11.parm.setup.si1 = 7;
   VAR_11.parm.setup.si2 = 0;
   VAR_11.parm.setup.plan = 0;
   VAR_11.parm.setup.screen = 0;
   break;
  case 5:
   FUNC_8(VAR_11.parm.num, VAR_5 + 3, sizeof(VAR_11.parm.num));
   break;
  case 6:
   FUNC_3(VAR_11.parm.num, sizeof(VAR_11.parm.num), "%d",
        (int) FUNC_2(VAR_5 + 7, ((void*)0), 16));
   break;
  case 7:
   VAR_5 += 3;
   if (FUNC_9(VAR_5) == 4)
    FUNC_3(VAR_11.parm.num, sizeof(VAR_11.parm.num), "%s%c%c",
         VAR_5 + 2, *VAR_5, *(VAR_5 + 1));
   else
    FUNC_8(VAR_11.parm.num, VAR_5 + 1, sizeof(VAR_11.parm.num));
   break;
  case 8:
   FUNC_4(&VAR_7->lock, VAR_10);
   VAR_7->flags &= ~VAR_0;
   FUNC_0(VAR_7, 0);
   VAR_7->rcvidx[0] = 0;
   FUNC_5(&VAR_7->lock, VAR_10);
   VAR_11.arg = 0;
   VAR_11.driver = VAR_7->myid;
   VAR_7->interface.statcallb(&VAR_11);
   VAR_11.command = VAR_3;
   VAR_11.arg = 0;
   VAR_11.driver = VAR_7->myid;
   VAR_7->interface.statcallb(&VAR_11);
   VAR_11.command = VAR_2;
   FUNC_4(&VAR_7->lock, VAR_10);
   VAR_7->flags &= ~VAR_1;
   FUNC_0(VAR_7, 1);
   VAR_7->rcvidx[1] = 0;
   FUNC_5(&VAR_7->lock, VAR_10);
   VAR_11.arg = 1;
   VAR_11.driver = VAR_7->myid;
   VAR_7->interface.statcallb(&VAR_11);
   VAR_11.command = VAR_3;
   VAR_11.arg = 1;
   VAR_11.driver = VAR_7->myid;
   break;
 }
 VAR_7->interface.statcallb(&VAR_11);
 return;
}
