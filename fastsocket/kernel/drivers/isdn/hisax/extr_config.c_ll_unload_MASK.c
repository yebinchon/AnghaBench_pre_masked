
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* statcallb ) (TYPE_2__*) ;} ;
struct IsdnCardState {int * dlog; int * status_end; int * status_write; int * status_read; int * status_buf; TYPE_1__ iif; int myid; } ;
struct TYPE_5__ {int driver; int command; } ;
typedef TYPE_2__ isdn_ctrl ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct IsdnCardState *VAR_1)
{
 isdn_ctrl VAR_2;

 VAR_2.command = VAR_0;
 VAR_2.driver = VAR_1->myid;
 VAR_1->iif.statcallb(&VAR_2);
 FUNC_0(VAR_1->status_buf);
 VAR_1->status_read = ((void*)0);
 VAR_1->status_write = ((void*)0);
 VAR_1->status_end = ((void*)0);
 FUNC_0(VAR_1->dlog);
 VAR_1->dlog = ((void*)0);
}
