
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbatm_data {struct cxacru_data* driver_data; } ;
struct usb_interface {int dummy; } ;
struct firmware {int dummy; } ;
struct cxacru_data {TYPE_1__* modem_type; } ;
struct TYPE_2__ {scalar_t__ boot_rom_patch; } ;


 int FUNC_0 (struct cxacru_data*) ;
 int FUNC_1 (struct cxacru_data*,char*,struct firmware const**) ;
 int FUNC_2 (struct cxacru_data*,struct firmware const*,struct firmware const*,struct firmware const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct firmware const*) ;
 int FUNC_5 (struct usbatm_data*,char*) ;

__attribute__((used)) static int FUNC_6(struct usbatm_data *VAR_0,
        struct usb_interface *VAR_1)
{
 const struct firmware *VAR_2, *VAR_3, *VAR_4;
 struct cxacru_data *VAR_5 = VAR_0->driver_data;

 int VAR_6 = FUNC_1(VAR_5, "fw", &VAR_2);
 if (VAR_6) {
  FUNC_5(VAR_0, "firmware (cxacru-fw.bin) unavailable (system misconfigured?)\n");
  return VAR_6;
 }

 if (VAR_5->modem_type->boot_rom_patch) {
  VAR_6 = FUNC_1(VAR_5, "bp", &VAR_3);
  if (VAR_6) {
   FUNC_5(VAR_0, "boot ROM patch (cxacru-bp.bin) unavailable (system misconfigured?)\n");
   FUNC_4(VAR_2);
   return VAR_6;
  }
 }

 if (FUNC_1(VAR_5, "cf", &VAR_4))
  VAR_4 = ((void*)0);

 FUNC_2(VAR_5, VAR_2, VAR_3, VAR_4);

 if (VAR_4)
  FUNC_4(VAR_4);
 if (VAR_5->modem_type->boot_rom_patch)
  FUNC_4(VAR_3);
 FUNC_4(VAR_2);

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6)
  FUNC_3("modem initialisation failed");
 else
  FUNC_3("done setting up the modem");

 return VAR_6;
}
