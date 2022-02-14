
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wdm_device {struct wdm_device* ubuf; struct wdm_device* irq; struct wdm_device* orq; TYPE_1__* response; int inbuf; int wMaxCommand; int intf; TYPE_2__* validity; int sbuf; int wMaxPacketSize; } ;
struct TYPE_4__ {int transfer_dma; } ;
struct TYPE_3__ {int transfer_dma; } ;


 int FUNC_0 (struct wdm_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct wdm_device*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct wdm_device *VAR_0)
{
 FUNC_3(FUNC_1(VAR_0->intf),
   VAR_0->wMaxPacketSize,
   VAR_0->sbuf,
   VAR_0->validity->transfer_dma);
 FUNC_3(FUNC_1(VAR_0->intf),
   VAR_0->wMaxCommand,
   VAR_0->inbuf,
   VAR_0->response->transfer_dma);
 FUNC_2(VAR_0->orq);
 FUNC_2(VAR_0->irq);
 FUNC_2(VAR_0->ubuf);
 FUNC_0(VAR_0);
 FUNC_2(VAR_0);
}
