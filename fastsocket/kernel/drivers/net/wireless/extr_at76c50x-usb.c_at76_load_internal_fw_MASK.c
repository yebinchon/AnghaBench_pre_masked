
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dev; } ;
struct fwentry {int intfw_size; int intfw; int board_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usb_device*) ;
 int FUNC_3 (struct usb_device*,int ,int ,int) ;
 int FUNC_4 (int ,int *,char*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct usb_device*) ;

__attribute__((used)) static int FUNC_7(struct usb_device *VAR_3, struct fwentry *VAR_4)
{
 int VAR_5;
 int VAR_6 = !FUNC_1(VAR_4->board_type);

 VAR_5 = FUNC_3(VAR_3, VAR_4->intfw, VAR_4->intfw_size,
       VAR_6 ? 0 : 2 * VAR_1);

 if (VAR_5 < 0) {
  FUNC_4(VAR_2, &VAR_3->dev,
      "downloading internal fw failed with %d\n", VAR_5);
  goto exit;
 }

 FUNC_0(VAR_0, "sending REMAP");


 if (VAR_6) {
  VAR_5 = FUNC_2(VAR_3);
  if (VAR_5 < 0) {
   FUNC_4(VAR_2, &VAR_3->dev,
       "sending REMAP failed with %d\n", VAR_5);
   goto exit;
  }
 }

 FUNC_0(VAR_0, "sleeping for 2 seconds");
 FUNC_5(2 * VAR_1 + 1);
 FUNC_6(VAR_3);

exit:
 return VAR_5;
}
