
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* statcallb ) (TYPE_2__*) ;} ;
struct IsdnCardState {TYPE_1__ iif; int myid; } ;
struct TYPE_5__ {int driver; int command; } ;
typedef TYPE_2__ isdn_ctrl ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(struct IsdnCardState *VAR_1)
{
 isdn_ctrl VAR_2;

 VAR_2.command = VAR_0;
 VAR_2.driver = VAR_1->myid;
 VAR_1->iif.statcallb(&VAR_2);

}
