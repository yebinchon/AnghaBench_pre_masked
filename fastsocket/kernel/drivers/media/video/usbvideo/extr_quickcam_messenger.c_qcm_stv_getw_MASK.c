
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_device*,int ,int,int,unsigned short,int ,int *,int,int) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_4, unsigned short VAR_5,
       __le16 *VAR_6)
{
 int VAR_7;


 VAR_7 = FUNC_0(VAR_4, FUNC_1(VAR_4, 0),
  0x04, VAR_3 | VAR_1 | VAR_2,
  VAR_5, 0, VAR_6, 2, 3*VAR_0);
 return VAR_7;
}
