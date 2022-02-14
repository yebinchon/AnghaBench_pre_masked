
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int idProduct; int idVendor; int product_name; int vendor_name; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (char*,...) ;

int FUNC_2(void)
{
 unsigned int VAR_4;

 VAR_2 = VAR_1;

 FUNC_1("==> dumping known device list <==\n");
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); VAR_4++) {
  FUNC_1("Vendor:\"%-9s\" Product:\"%-26s\" => USBID:[0x%04x:0x%04x]\n",
       VAR_3[VAR_4].vendor_name, VAR_3[VAR_4].product_name,
       VAR_3[VAR_4].idVendor, VAR_3[VAR_4].idProduct);
 }
 FUNC_1("==> end of device list <==\n");

 return VAR_0;
}
