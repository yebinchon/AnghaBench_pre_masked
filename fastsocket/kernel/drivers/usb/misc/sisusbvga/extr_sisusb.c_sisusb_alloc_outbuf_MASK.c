
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sisusb_usb_data {int * urbstatus; } ;


 int VAR_0 ;
 int FUNC_0 (struct sisusb_usb_data*) ;

__attribute__((used)) static int
FUNC_1(struct sisusb_usb_data *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 >= 0)
  VAR_1->urbstatus[VAR_2] |= VAR_0;

 return VAR_2;
}
