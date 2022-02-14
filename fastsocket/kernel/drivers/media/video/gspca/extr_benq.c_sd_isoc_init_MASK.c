
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {scalar_t__ nbalt; int iface; int dev; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->dev, VAR_0->iface,
  VAR_0->nbalt - 1);
 if (VAR_1 < 0) {
  FUNC_0("usb_set_interface failed");
  return VAR_1;
 }

 return 0;
}
