
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb_usb {scalar_t__ DetectCount; } ;
struct wb35_reg {scalar_t__ EP0vm_state; } ;
struct hw_data {int SurpriseRemove; struct wb_usb WbUsb; struct wb35_reg reg; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static unsigned char FUNC_0(struct hw_data *VAR_1)
{
 struct wb35_reg *VAR_2 = &VAR_1->reg;
 struct wb_usb *VAR_3 = &VAR_1->WbUsb;

 if (!VAR_1->SurpriseRemove
     && (VAR_3->DetectCount || VAR_2->EP0vm_state != VAR_0))
  return 0;

 return 1;
}
