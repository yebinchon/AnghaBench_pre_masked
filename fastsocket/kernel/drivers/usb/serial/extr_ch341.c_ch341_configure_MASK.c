
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct ch341_private {int line_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_device*,int,int,int ,char*,unsigned int const) ;
 int FUNC_1 (struct usb_device*,int,int,int) ;
 int FUNC_2 (struct usb_device*,struct ch341_private*) ;
 int FUNC_3 (struct usb_device*,struct ch341_private*) ;
 int FUNC_4 (struct usb_device*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (unsigned int const,int ) ;

__attribute__((used)) static int FUNC_8(struct usb_device *VAR_2, struct ch341_private *VAR_3)
{
 char *VAR_4;
 int VAR_5;
 const unsigned VAR_6 = 8;

 FUNC_5("ch341_configure()");

 VAR_4 = FUNC_7(VAR_6, VAR_1);
 if (!VAR_4)
  return -VAR_0;


 VAR_5 = FUNC_0(VAR_2, 0x5f, 0, 0, VAR_4, VAR_6);
 if (VAR_5 < 0)
  goto out;

 VAR_5 = FUNC_1(VAR_2, 0xa1, 0, 0);
 if (VAR_5 < 0)
  goto out;

 VAR_5 = FUNC_3(VAR_2, VAR_3);
 if (VAR_5 < 0)
  goto out;


 VAR_5 = FUNC_0(VAR_2, 0x95, 0x2518, 0, VAR_4, VAR_6);
 if (VAR_5 < 0)
  goto out;

 VAR_5 = FUNC_1(VAR_2, 0x9a, 0x2518, 0x0050);
 if (VAR_5 < 0)
  goto out;


 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (VAR_5 < 0)
  goto out;

 VAR_5 = FUNC_1(VAR_2, 0xa1, 0x501f, 0xd90a);
 if (VAR_5 < 0)
  goto out;

 VAR_5 = FUNC_3(VAR_2, VAR_3);
 if (VAR_5 < 0)
  goto out;

 VAR_5 = FUNC_4(VAR_2, VAR_3->line_control);
 if (VAR_5 < 0)
  goto out;


 VAR_5 = FUNC_2(VAR_2, VAR_3);

out: FUNC_6(VAR_4);
 return VAR_5;
}
