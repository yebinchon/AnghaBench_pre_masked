
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hif_device_usb {int regout_submitted; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hif_device_usb*) ;
 scalar_t__ FUNC_1 (struct hif_device_usb*) ;
 scalar_t__ FUNC_2 (struct hif_device_usb*) ;
 int FUNC_3 (struct hif_device_usb*) ;
 int FUNC_4 (struct hif_device_usb*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct hif_device_usb *VAR_1)
{

 FUNC_5(&VAR_1->regout_submitted);


 if (FUNC_2(VAR_1) < 0)
  goto err;


 if (FUNC_1(VAR_1) < 0)
  goto err_rx;


 if (FUNC_0(VAR_1) < 0)
  goto err_reg;

 return 0;
err_reg:
 FUNC_3(VAR_1);
err_rx:
 FUNC_4(VAR_1);
err:
 return -VAR_0;
}
