
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (struct usb_device*,int ,int ,int,int ,int,int *,int,int ) ;
 int FUNC_3 (struct usb_device*,int ) ;

int FUNC_4(struct usb_device *VAR_5, int VAR_6, int VAR_7, void *VAR_8)
{
 int VAR_9;
 u16 *VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_1);

 if (!VAR_10)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_5, FUNC_3(VAR_5, 0),
  VAR_4, VAR_3 | VAR_6, 0, VAR_7, VAR_10,
  sizeof(*VAR_10), VAR_2);

 *(u16 *)VAR_8 = *VAR_10;
 FUNC_0(VAR_10);
 return VAR_9;
}
