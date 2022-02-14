
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct acm {int rx_buflimit; TYPE_1__* rb; int readsize; int control; } ;
struct TYPE_2__ {int dma; int base; } ;


 struct usb_device* FUNC_0 (int ) ;
 int FUNC_1 (struct usb_device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct acm *VAR_0)
{
 struct usb_device *VAR_1 = FUNC_0(VAR_0->control);
 int VAR_2, VAR_3 = VAR_0->rx_buflimit;

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  FUNC_1(VAR_1, VAR_0->readsize,
     VAR_0->rb[VAR_2].base, VAR_0->rb[VAR_2].dma);
}
