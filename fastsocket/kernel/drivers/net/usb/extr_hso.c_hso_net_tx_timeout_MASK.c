
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; int dev; } ;
struct hso_net {TYPE_2__* mux_bulk_tx_urb; } ;
struct TYPE_4__ {int status; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct hso_net* FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct hso_net *VAR_2 = FUNC_1(VAR_1);

 if (!VAR_2)
  return;


 FUNC_0(&VAR_1->dev, "Tx timed out.\n");


 if (VAR_2->mux_bulk_tx_urb
     && (VAR_2->mux_bulk_tx_urb->status == -VAR_0))
  FUNC_2(VAR_2->mux_bulk_tx_urb);


 VAR_1->stats.tx_errors++;
}
