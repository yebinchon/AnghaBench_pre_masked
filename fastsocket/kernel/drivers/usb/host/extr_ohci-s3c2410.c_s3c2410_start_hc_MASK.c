
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct s3c2410_hcd_info {int (* enable_oc ) (struct s3c2410_hcd_info*,int) ;int report_oc; struct usb_hcd* hcd; } ;
struct TYPE_2__ {struct s3c2410_hcd_info* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (struct s3c2410_hcd_info*,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct platform_device *VAR_3, struct usb_hcd *VAR_4)
{
 struct s3c2410_hcd_info *VAR_5 = VAR_3->dev.platform_data;

 FUNC_1(&VAR_3->dev, "s3c2410_start_hc:\n");

 FUNC_0(VAR_2);
 FUNC_2(2);

 FUNC_0(VAR_0);

 if (VAR_5 != ((void*)0)) {
  VAR_5->hcd = VAR_4;
  VAR_5->report_oc = VAR_1;

  if (VAR_5->enable_oc != ((void*)0)) {
   (VAR_5->enable_oc)(VAR_5, 1);
  }
 }
}
