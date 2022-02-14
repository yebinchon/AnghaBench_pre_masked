
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int pusb_dev; int dflags; int pusb_intf; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct us_data *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2->pusb_dev, VAR_2->pusb_intf);
 if (VAR_3 < 0)
  FUNC_0("unable to lock device for reset: %d\n", VAR_3);
 else {

  if (FUNC_1(VAR_1, &VAR_2->dflags)) {
   VAR_3 = -VAR_0;
   FUNC_0("No reset during disconnect\n");
  } else {
   VAR_3 = FUNC_3(VAR_2->pusb_dev);
   FUNC_0("usb_reset_device returns %d\n",
     VAR_3);
  }
  FUNC_4(VAR_2->pusb_dev);
 }
 return VAR_3;
}
