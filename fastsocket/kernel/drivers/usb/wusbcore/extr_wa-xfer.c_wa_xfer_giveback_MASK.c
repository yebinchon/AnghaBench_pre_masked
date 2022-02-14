
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wa_xfer {TYPE_1__* wa; int result; int urb; int list_node; } ;
struct TYPE_2__ {int wusb; int xfer_list_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct wa_xfer*) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct wa_xfer *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->wa->xfer_list_lock, VAR_1);
 FUNC_0(&VAR_0->list_node);
 FUNC_2(&VAR_0->wa->xfer_list_lock, VAR_1);

 FUNC_5(VAR_0->wa->wusb, VAR_0->urb, VAR_0->result);
 FUNC_3(VAR_0->wa);
 FUNC_4(VAR_0);
}
