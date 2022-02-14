
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;


struct TYPE_18__ {int arg; int driver; int command; } ;
typedef TYPE_3__ isdn_ctrl ;
struct TYPE_19__ {int chan; TYPE_9__* plcip; } ;
typedef TYPE_4__ capidrv_ncci ;
struct TYPE_16__ {int (* statcallb ) (TYPE_3__*) ;} ;
struct TYPE_20__ {TYPE_1__ interface; int myid; int msgid; } ;
typedef TYPE_5__ capidrv_contr ;
struct TYPE_21__ {int plci; } ;
struct TYPE_17__ {int applid; } ;
struct TYPE_15__ {TYPE_2__ ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int *,int *,int *,int *) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*) ;
 TYPE_12__ VAR_3 ;
 int FUNC_2 (TYPE_5__*,TYPE_9__*,int ) ;
 int FUNC_3 (TYPE_5__*,int *) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(capidrv_contr * VAR_4, capidrv_ncci * VAR_5)
{
 isdn_ctrl VAR_6;

 FUNC_0(&VAR_2,
     VAR_3.ap.applid,
     VAR_4->msgid++,
     VAR_5->plcip->plci,
     ((void*)0),
     ((void*)0),
     ((void*)0),
     ((void*)0)
 );
 FUNC_2(VAR_4, VAR_5->plcip, VAR_0);
 FUNC_3(VAR_4, &VAR_2);

 VAR_6.command = VAR_1;
 VAR_6.driver = VAR_4->myid;
 VAR_6.arg = VAR_5->chan;
 VAR_4->interface.statcallb(&VAR_6);
 FUNC_1(VAR_4, VAR_5);
}
