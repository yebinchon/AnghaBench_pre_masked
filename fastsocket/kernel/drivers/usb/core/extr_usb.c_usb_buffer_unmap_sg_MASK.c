
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {struct usb_bus* bus; } ;
struct usb_bus {struct device* controller; } ;
struct scatterlist {int dummy; } ;
struct device {int dma_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct scatterlist*,int,int ) ;

void FUNC_1(const struct usb_device *VAR_2, int VAR_3,
    struct scatterlist *VAR_4, int VAR_5)
{
 struct usb_bus *VAR_6;
 struct device *VAR_7;

 if (!VAR_2
   || !(VAR_6 = VAR_2->bus)
   || !(VAR_7 = VAR_6->controller)
   || !VAR_7->dma_mask)
  return;

 FUNC_0(VAR_7, VAR_4, VAR_5,
   VAR_3 ? VAR_0 : VAR_1);
}
