
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct usb_interface {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (int ,int ,struct device*) ;

void FUNC_3(struct usb_interface *VAR_9)
{
 struct device *VAR_10;

 if (VAR_9 == ((void*)0))
  return;
 VAR_10 = &VAR_9->dev;

 if (VAR_10 != ((void*)0)) {

  FUNC_2(0, 0, VAR_10);
  FUNC_0(VAR_10, &VAR_3);
  FUNC_0(VAR_10, &VAR_8);
  FUNC_0(VAR_10, &VAR_7);
  FUNC_0(VAR_10, &VAR_4);
  FUNC_0(VAR_10, &VAR_1);
  FUNC_0(VAR_10, &VAR_2);
  FUNC_0(VAR_10, &VAR_0);




 }

 FUNC_1(VAR_9);
}
