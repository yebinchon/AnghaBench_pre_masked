
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efx_rx_queue {struct efx_nic* efx; } ;
struct efx_rx_buffer {int len; int flags; } ;
struct efx_nic {int net_dev; TYPE_1__* type; } ;
struct TYPE_4__ {int n_rx_overlength; } ;
struct TYPE_3__ {unsigned int rx_buffer_padding; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct efx_nic*) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (struct efx_rx_queue*) ;
 int FUNC_2 (struct efx_rx_queue*) ;
 int FUNC_3 (struct efx_nic*,int ) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct efx_nic*,int ,int ,char*,int ,int,unsigned int,...) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(struct efx_rx_queue *VAR_3,
         struct efx_rx_buffer *VAR_4,
         int VAR_5)
{
 struct efx_nic *VAR_6 = VAR_3->efx;
 unsigned VAR_7 = VAR_4->len - VAR_6->type->rx_buffer_padding;

 if (FUNC_4(VAR_5 <= VAR_7))
  return;




 VAR_4->flags |= VAR_0;

 if ((VAR_5 > VAR_4->len) && FUNC_0(VAR_6)) {
  if (FUNC_5())
   FUNC_6(VAR_6, VAR_2, VAR_6->net_dev,
      " RX queue %d seriously overlength "
      "RX event (0x%x > 0x%x+0x%x). Leaking\n",
      FUNC_2(VAR_3), VAR_5, VAR_7,
      VAR_6->type->rx_buffer_padding);
  FUNC_3(VAR_6, VAR_1);
 } else {
  if (FUNC_5())
   FUNC_6(VAR_6, VAR_2, VAR_6->net_dev,
      " RX queue %d overlength RX event "
      "(0x%x > 0x%x)\n",
      FUNC_2(VAR_3), VAR_5, VAR_7);
 }

 FUNC_1(VAR_3)->n_rx_overlength++;
}
