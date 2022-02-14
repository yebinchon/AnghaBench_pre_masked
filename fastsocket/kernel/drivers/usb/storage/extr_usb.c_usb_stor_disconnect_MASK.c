
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct us_data {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct us_data*) ;
 int FUNC_2 (struct us_data*) ;
 struct us_data* FUNC_3 (struct usb_interface*) ;

void FUNC_4(struct usb_interface *VAR_0)
{
 struct us_data *VAR_1 = FUNC_3(VAR_0);

 FUNC_0("storage_disconnect() called\n");
 FUNC_1(VAR_1);
 FUNC_2(VAR_1);
}
