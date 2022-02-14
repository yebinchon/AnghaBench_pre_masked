
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {scalar_t__ buf; int complete; int dma; } ;
struct usb_ep {struct dev_data* driver_data; } ;
struct dev_data {scalar_t__ rbuf; scalar_t__ setup_out_ready; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1 (struct usb_ep *VAR_2, struct usb_request *VAR_3)
{
 struct dev_data *VAR_4 = VAR_2->driver_data;

 if (VAR_3->buf != VAR_4->rbuf) {
  FUNC_0(VAR_3->buf);
  VAR_3->buf = VAR_4->rbuf;
  VAR_3->dma = VAR_0;
 }
 VAR_3->complete = VAR_1;
 VAR_4->setup_out_ready = 0;
}
