
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;


 int FUNC_0 (struct usb_device*,int ,int *,int,int*,int) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_0,
    u8 *VAR_1, int VAR_2, u8 VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_0, FUNC_1(VAR_0, VAR_3),
     VAR_1, VAR_2 , &VAR_5, 200);
 return VAR_4;
}
