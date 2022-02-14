
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ar9170 {int tx_cmd; int rx_pool; int rx_work; int usb_tasklet; int rx_anch; int tx_anch; TYPE_1__* udev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar9170*,int ) ;
 int FUNC_1 (struct ar9170*) ;
 int FUNC_2 (struct ar9170*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ar9170 *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1, VAR_0);

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  FUNC_3(&VAR_1->udev->dev, "stuck tx urbs!\n");

 FUNC_5(&VAR_1->tx_anch);
 FUNC_2(VAR_1);
 FUNC_5(&VAR_1->rx_anch);

 FUNC_4(&VAR_1->usb_tasklet);

 FUNC_6(&VAR_1->rx_work);
 FUNC_6(&VAR_1->rx_pool);
 FUNC_6(&VAR_1->tx_cmd);
}
