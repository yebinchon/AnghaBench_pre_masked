
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ in_frame; } ;
struct stir_cb {TYPE_3__* netdev; TYPE_1__ rx_buff; int rx_urb; scalar_t__ receiving; } ;
struct TYPE_5__ {int collisions; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct stir_cb *VAR_0)
{
 VAR_0->receiving = 0;
 FUNC_0(VAR_0->rx_urb);

 if (VAR_0->rx_buff.in_frame)
  VAR_0->netdev->stats.collisions++;
}
