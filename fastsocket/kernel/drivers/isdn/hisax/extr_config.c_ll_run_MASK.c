
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int features; int (* statcallb ) (TYPE_2__*) ;} ;
struct IsdnCardState {TYPE_1__ iif; int myid; } ;
struct TYPE_5__ {int command; int driver; } ;
typedef TYPE_2__ isdn_ctrl ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

int FUNC_1(struct IsdnCardState *VAR_1, int VAR_2)
{
 isdn_ctrl VAR_3;

 VAR_3.driver = VAR_1->myid;
 VAR_3.command = VAR_0;
 VAR_1->iif.features |= VAR_2;
 VAR_1->iif.statcallb(&VAR_3);
 return 0;
}
