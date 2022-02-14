
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
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct device*,struct scatterlist*,int,int ) ;

int FUNC_1(const struct usb_device *VAR_4, int VAR_5,
        struct scatterlist *VAR_6, int VAR_7)
{
 struct usb_bus *VAR_8;
 struct device *VAR_9;

 if (!VAR_4
   || !(VAR_8 = VAR_4->bus)
   || !(VAR_9 = VAR_8->controller)
   || !VAR_9->dma_mask)
  return -VAR_2;


 return FUNC_0(VAR_9, VAR_6, VAR_7,
   VAR_5 ? VAR_0 : VAR_1) ? : -VAR_3;
}
