
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct libusb_device_descriptor {scalar_t__ idVendor; scalar_t__ idProduct; } ;
struct TYPE_3__ {scalar_t__ idVendor; scalar_t__ idProduct; int product_name; int vendor_name; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ,int ,scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_2(struct libusb_device_descriptor *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if ((VAR_1->idVendor == VAR_0[VAR_2].idVendor) &&
      (VAR_1->idProduct == VAR_0[VAR_2].idProduct)) {
   FUNC_1("== found device \"%s %s\" [0x%04x:0x%04x]\n",
    VAR_0[VAR_2].vendor_name, VAR_0[VAR_2].product_name,
    VAR_1->idVendor, VAR_1->idProduct);

   return VAR_2;
  }
 }

 return -1;
}
