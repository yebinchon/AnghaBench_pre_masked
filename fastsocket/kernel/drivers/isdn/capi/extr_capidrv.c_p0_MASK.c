
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {size_t arg; int driver; int command; } ;
typedef TYPE_3__ isdn_ctrl ;
struct TYPE_14__ {size_t chan; } ;
typedef TYPE_4__ capidrv_plci ;
struct TYPE_12__ {int (* statcallb ) (TYPE_3__*) ;} ;
struct TYPE_15__ {TYPE_2__ interface; int myid; TYPE_1__* bchans; } ;
typedef TYPE_5__ capidrv_contr ;
struct TYPE_11__ {int * contr; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(capidrv_contr * VAR_1, capidrv_plci * VAR_2)
{
 isdn_ctrl VAR_3;

 VAR_1->bchans[VAR_2->chan].contr = ((void*)0);
 VAR_3.command = VAR_0;
 VAR_3.driver = VAR_1->myid;
 VAR_3.arg = VAR_2->chan;
 VAR_1->interface.statcallb(&VAR_3);
 FUNC_0(VAR_1, VAR_2);
}
