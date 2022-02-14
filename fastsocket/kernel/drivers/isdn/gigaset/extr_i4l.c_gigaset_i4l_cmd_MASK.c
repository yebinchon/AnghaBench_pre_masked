
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* statcallb ) (TYPE_2__*) ;} ;
struct cardstate {TYPE_1__ iif; int myid; } ;
struct TYPE_5__ {int command; scalar_t__ arg; int driver; } ;
typedef TYPE_2__ isdn_ctrl ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(struct cardstate *VAR_0, int VAR_1)
{
 isdn_ctrl VAR_2;

 VAR_2.driver = VAR_0->myid;
 VAR_2.command = VAR_1;
 VAR_2.arg = 0;
 VAR_0->iif.statcallb(&VAR_2);
}
