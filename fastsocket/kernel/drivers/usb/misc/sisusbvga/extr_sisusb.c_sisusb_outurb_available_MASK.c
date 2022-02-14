
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sisusb_usb_data {int numobufs; int* urbstatus; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct sisusb_usb_data *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->numobufs; VAR_3++) {

  if ((VAR_2->urbstatus[VAR_3] & (VAR_1|VAR_0)) == 0)
   return VAR_3;

 }

 return -1;
}
