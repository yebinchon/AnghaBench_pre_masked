
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int,int ) ;
 int FUNC_4 (struct usb_device*,int ,int,int,int,int,char*,int,int) ;
 int FUNC_5 (struct usb_device*,int) ;
 int FUNC_6 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct usb_device *VAR_2)
{
 char *VAR_3 = FUNC_3(2, VAR_1);
 int VAR_4;

 if (!VAR_3)
  return -VAR_0;




 FUNC_0(&VAR_2->dev, "Sending magic pearl command\n");
 VAR_4 = FUNC_4(VAR_2, FUNC_6(VAR_2, 0),
     0xa9, 0xc0, 1, 1, VAR_3, 2, 100);
 FUNC_0(&VAR_2->dev, "Magic pearl command returned %d\n", VAR_4);

 FUNC_0(&VAR_2->dev, "Calling set_configuration\n");
 VAR_4 = FUNC_5(VAR_2, 1);
 if (VAR_4)
  FUNC_1(&VAR_2->dev, "Set Configuration failed :%d.\n", VAR_4);

 FUNC_2(VAR_3);
 return VAR_4;
}
