
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct st5481_intr {TYPE_1__* urb; } ;
struct st5481_ctrl {TYPE_1__* urb; } ;
struct st5481_adapter {struct st5481_ctrl ctrl; struct st5481_intr intr; } ;
struct TYPE_3__ {int transfer_buffer; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(struct st5481_adapter *VAR_0)
{
 struct st5481_intr *VAR_1 = &VAR_0->intr;
 struct st5481_ctrl *VAR_2 = &VAR_0->ctrl;

 FUNC_0(1,"");


 FUNC_3(VAR_2->urb);
 FUNC_1(VAR_2->urb->transfer_buffer);
 FUNC_2(VAR_2->urb);
 VAR_2->urb = ((void*)0);

 FUNC_3(VAR_1->urb);
 FUNC_1(VAR_1->urb->transfer_buffer);
 FUNC_2(VAR_1->urb);
 VAR_1->urb = ((void*)0);
}
