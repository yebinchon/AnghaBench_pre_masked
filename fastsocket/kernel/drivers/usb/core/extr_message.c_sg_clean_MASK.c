
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_sg_request {size_t entries; TYPE_2__* dev; int nents; int sg; int pipe; int * urbs; } ;
struct TYPE_3__ {int * dma_mask; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct usb_sg_request *VAR_0)
{
 if (VAR_0->urbs) {
  while (VAR_0->entries--)
   FUNC_2(VAR_0->urbs [VAR_0->entries]);
  FUNC_0(VAR_0->urbs);
  VAR_0->urbs = ((void*)0);
 }
 if (VAR_0->dev->dev.dma_mask != ((void*)0))
  FUNC_1(VAR_0->dev, FUNC_3(VAR_0->pipe),
        VAR_0->sg, VAR_0->nents);
 VAR_0->dev = ((void*)0);
}
