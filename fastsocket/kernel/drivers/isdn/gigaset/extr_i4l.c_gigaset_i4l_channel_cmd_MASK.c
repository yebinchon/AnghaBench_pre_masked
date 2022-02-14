
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bc_state {TYPE_2__* cs; int channel; } ;
struct TYPE_7__ {int command; int arg; int driver; } ;
typedef TYPE_3__ isdn_ctrl ;
struct TYPE_5__ {int (* statcallb ) (TYPE_3__*) ;} ;
struct TYPE_6__ {TYPE_1__ iif; int myid; } ;


 int FUNC_0 (TYPE_3__*) ;

void FUNC_1(struct bc_state *VAR_0, int VAR_1)
{
 isdn_ctrl VAR_2;

 VAR_2.driver = VAR_0->cs->myid;
 VAR_2.command = VAR_1;
 VAR_2.arg = VAR_0->channel;
 VAR_0->cs->iif.statcallb(&VAR_2);
}
