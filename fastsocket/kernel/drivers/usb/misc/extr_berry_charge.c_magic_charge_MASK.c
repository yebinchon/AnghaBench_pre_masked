
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int,int ) ;
 int FUNC_4 (struct usb_device*,int ,int,int,int ,int,char*,int,int) ;
 int FUNC_5 (struct usb_device*,int) ;
 int FUNC_6 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct usb_device *VAR_2)
{
 char *VAR_3 = FUNC_3(2, VAR_1);
 int VAR_4;

 if (!VAR_3)
  return -VAR_0;
 FUNC_0(&VAR_2->dev, "Sending first magic command\n");
 VAR_4 = FUNC_4(VAR_2, FUNC_6(VAR_2, 0),
     0xa5, 0xc0, 0, 1, VAR_3, 2, 100);
 if (VAR_4 != 2) {
  FUNC_1(&VAR_2->dev, "First magic command failed: %d.\n",
   VAR_4);
  goto exit;
 }

 FUNC_0(&VAR_2->dev, "Sending second magic command\n");
 VAR_4 = FUNC_4(VAR_2, FUNC_6(VAR_2, 0),
     0xa2, 0x40, 0, 1, VAR_3, 0, 100);
 if (VAR_4 != 0) {
  FUNC_1(&VAR_2->dev, "Second magic command failed: %d.\n",
   VAR_4);
  goto exit;
 }

 FUNC_0(&VAR_2->dev, "Calling set_configuration\n");
 VAR_4 = FUNC_5(VAR_2, 1);
 if (VAR_4)
  FUNC_1(&VAR_2->dev, "Set Configuration failed :%d.\n", VAR_4);

exit:
 FUNC_2(VAR_3);
 return VAR_4;
}
