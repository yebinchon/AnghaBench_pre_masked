
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zd1201 {int tx_urb; TYPE_1__* usb; } ;
struct TYPE_4__ {int tx_errors; } ;
struct net_device {int trans_start; TYPE_2__ stats; int name; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int VAR_0 ;
 struct zd1201* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct zd1201 *VAR_2 = FUNC_1(VAR_1);

 if (!VAR_2)
  return;
 FUNC_0(&VAR_2->usb->dev, "%s: TX timeout, shooting down urb\n",
     VAR_1->name);
 FUNC_2(VAR_2->tx_urb);
 VAR_1->stats.tx_errors++;

 VAR_1->trans_start = VAR_0;
}
