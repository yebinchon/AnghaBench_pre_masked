
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; int in_frame; scalar_t__ len; int head; int data; } ;
struct sir_dev {int enable_rx; TYPE_1__ rx_buff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(struct sir_dev *VAR_2)
{
 if (FUNC_2(FUNC_0(&VAR_2->enable_rx)))
  return;


 VAR_2->rx_buff.data = VAR_2->rx_buff.head;
 VAR_2->rx_buff.len = 0;
 VAR_2->rx_buff.in_frame = VAR_0;
 VAR_2->rx_buff.state = VAR_1;
 FUNC_1(&VAR_2->enable_rx, 1);
}
