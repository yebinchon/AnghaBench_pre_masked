
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int trans_start; int name; int dev; } ;
struct TYPE_2__ {int tx_errors; } ;
struct kaweth_device {int tx_urb; TYPE_1__ stats; } ;


 int FUNC_0 (int *,char*,int ) ;
 int VAR_0 ;
 struct kaweth_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct kaweth_device *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(&VAR_1->dev, "%s: Tx timed out. Resetting.\n", VAR_1->name);
 VAR_2->stats.tx_errors++;
 VAR_1->trans_start = VAR_0;

 FUNC_2(VAR_2->tx_urb);
}
