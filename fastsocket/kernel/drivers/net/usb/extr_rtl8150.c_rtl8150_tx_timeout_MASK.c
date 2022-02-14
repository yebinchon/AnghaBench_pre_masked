
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; int dev; } ;
struct TYPE_5__ {int tx_urb; } ;
typedef TYPE_2__ rtl8150_t ;


 int FUNC_0 (int *,char*) ;
 TYPE_2__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 rtl8150_t *VAR_1 = FUNC_1(VAR_0);
 FUNC_0(&VAR_0->dev, "Tx timeout.\n");
 FUNC_2(VAR_1->tx_urb);
 VAR_0->stats.tx_errors++;
}
