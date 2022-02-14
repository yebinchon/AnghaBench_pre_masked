
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_request {int length; scalar_t__ zero; int complete; int * buf; } ;
struct usb_ep {struct dev_data* driver_data; } ;
struct dev_data {int * rbuf; scalar_t__ setup_out_ready; } ;


 int FUNC_0 (struct dev_data*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2 (struct usb_ep *VAR_4, struct usb_request *VAR_5, u16 VAR_6)
{
 struct dev_data *VAR_7 = VAR_4->driver_data;

 if (VAR_7->setup_out_ready) {
  FUNC_0 (VAR_7, "ep0 request busy!\n");
  return -VAR_0;
 }
 if (VAR_6 > sizeof (VAR_7->rbuf))
  VAR_5->buf = FUNC_1(VAR_6, VAR_2);
 if (VAR_5->buf == ((void*)0)) {
  VAR_5->buf = VAR_7->rbuf;
  return -VAR_1;
 }
 VAR_5->complete = VAR_3;
 VAR_5->length = VAR_6;
 VAR_5->zero = 0;
 return 0;
}
