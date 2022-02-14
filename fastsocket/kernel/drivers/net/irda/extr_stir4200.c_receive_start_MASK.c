
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; int in_frame; } ;
struct stir_cb {int receiving; TYPE_2__* rx_urb; TYPE_1__ rx_buff; } ;
struct TYPE_4__ {scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_1(struct stir_cb *VAR_3)
{

 VAR_3->receiving = 1;

 VAR_3->rx_buff.in_frame = VAR_0;
 VAR_3->rx_buff.state = VAR_2;

 VAR_3->rx_urb->status = 0;
 return FUNC_0(VAR_3->rx_urb, VAR_1);
}
