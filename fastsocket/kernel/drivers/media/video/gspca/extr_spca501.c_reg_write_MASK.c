
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct usb_device*,int ,int ,int,int ,int ,int *,int ,int) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_device *VAR_3,
       __u16 VAR_4, __u16 VAR_5, __u16 VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3,
   FUNC_3(VAR_3, 0),
   VAR_4,
   VAR_2 | VAR_1,
   VAR_6, VAR_5, ((void*)0), 0, 500);
 FUNC_0(VAR_0, "reg write: 0x%02x 0x%02x 0x%02x",
  VAR_4, VAR_5, VAR_6);
 if (VAR_7 < 0)
  FUNC_1("reg write: error %d", VAR_7);
 return VAR_7;
}
