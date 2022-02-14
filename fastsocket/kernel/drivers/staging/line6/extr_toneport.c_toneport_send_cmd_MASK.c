
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct usb_device*,int ,int,int,int,int,int *,int ,int) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_device *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_1(VAR_5, FUNC_2(VAR_5, 0), 0x67,
         VAR_4 | VAR_3 | VAR_2,
         VAR_6, VAR_7, ((void*)0), 0, VAR_1 * VAR_0);

 if (VAR_8 < 0) {
  FUNC_0("send failed (error %d)\n", VAR_8);
  return VAR_8;
 }

 return 0;
}
