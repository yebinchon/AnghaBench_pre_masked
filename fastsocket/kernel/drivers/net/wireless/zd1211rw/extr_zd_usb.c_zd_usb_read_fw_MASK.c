
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zd_addr_t ;
typedef int u8 ;
typedef int u16 ;
struct zd_usb {int dummy; } ;
struct usb_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct usb_device*,int ,int ,int,int ,int ,int *,int,int) ;
 int FUNC_5 (struct usb_device*,int ) ;
 struct usb_device* FUNC_6 (struct zd_usb*) ;

int FUNC_7(struct zd_usb *VAR_5, zd_addr_t VAR_6, u8 *VAR_7, u16 VAR_8)
{
 int VAR_9;
 struct usb_device *VAR_10 = FUNC_6(VAR_5);
 u8 *VAR_11;


 VAR_11 = FUNC_2(VAR_8, VAR_2);
 if (!VAR_11)
  return -VAR_1;
 VAR_9 = FUNC_4(VAR_10, FUNC_5(VAR_10, 0),
  VAR_4, VAR_3 | 0x40, VAR_6, 0,
  VAR_11, VAR_8, 5000);
 if (VAR_9 < 0) {
  FUNC_0(&VAR_10->dev,
   "read over firmware interface failed: %d\n", VAR_9);
  goto exit;
 } else if (VAR_9 != VAR_8) {
  FUNC_0(&VAR_10->dev,
   "incomplete read over firmware interface: %d/%d\n",
   VAR_9, VAR_8);
  VAR_9 = -VAR_0;
  goto exit;
 }
 VAR_9 = 0;
 FUNC_3(VAR_7, VAR_11, VAR_8);
exit:
 FUNC_1(VAR_11);
 return VAR_9;
}
