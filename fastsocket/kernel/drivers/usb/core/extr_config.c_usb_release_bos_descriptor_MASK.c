
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {TYPE_1__* bos; int bos_kabi_bit; } ;
struct TYPE_2__ {struct TYPE_2__* desc; } ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(struct usb_device *VAR_0)
{

 if (!VAR_0->bos_kabi_bit)
  return;

 if (VAR_0->bos) {
  FUNC_0(VAR_0->bos->desc);
  FUNC_0(VAR_0->bos);
  VAR_0->bos = ((void*)0);
 }
}
