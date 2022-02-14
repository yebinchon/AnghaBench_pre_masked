
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sisusb_usb_data {int numobufs; int* urbstatus; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct sisusb_usb_data *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->numobufs; VAR_2++) {

  if (VAR_1->urbstatus[VAR_2] & VAR_0)
   return 0;

 }

 return 1;
}
