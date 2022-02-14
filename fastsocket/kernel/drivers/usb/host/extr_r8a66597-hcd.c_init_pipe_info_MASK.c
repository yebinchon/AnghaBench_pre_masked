
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {int dummy; } ;
struct usb_endpoint_descriptor {int bInterval; int wMaxPacketSize; } ;
struct urb {int dummy; } ;
struct r8a66597_pipe_info {scalar_t__ type; int dir_in; scalar_t__ timer_interval; scalar_t__ interval; int pipenum; int buf_bsize; int bufnum; int maxpacket; int epnum; int address; } ;
struct r8a66597 {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct r8a66597*,struct urb*,struct usb_host_endpoint*,struct r8a66597_pipe_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct r8a66597*,struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_4 (struct urb*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct urb*,int ) ;
 int FUNC_7 (struct r8a66597*,struct urb*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct usb_endpoint_descriptor*) ;
 int FUNC_10 (struct usb_endpoint_descriptor*) ;
 int FUNC_11 (struct usb_endpoint_descriptor*) ;

__attribute__((used)) static void FUNC_12(struct r8a66597 *VAR_1, struct urb *VAR_2,
      struct usb_host_endpoint *VAR_3,
      struct usb_endpoint_descriptor *VAR_4)
{
 struct r8a66597_pipe_info VAR_5;

 VAR_5.pipenum = FUNC_3(VAR_1, VAR_4);
 VAR_5.address = FUNC_7(VAR_1, VAR_2);
 VAR_5.epnum = FUNC_10(VAR_4);
 VAR_5.maxpacket = FUNC_8(VAR_4->wMaxPacketSize);
 VAR_5.type = FUNC_5(FUNC_11(VAR_4));
 VAR_5.bufnum = FUNC_2(VAR_5.pipenum);
 VAR_5.buf_bsize = FUNC_1(VAR_5.pipenum);
 if (VAR_5.type == VAR_0) {
  VAR_5.interval = 0;
  VAR_5.timer_interval = 0;
 } else {
  VAR_5.interval = FUNC_4(VAR_2, VAR_4->bInterval);
  VAR_5.timer_interval = FUNC_6(VAR_2, VAR_4->bInterval);
 }
 if (FUNC_9(VAR_4))
  VAR_5.dir_in = 1;
 else
  VAR_5.dir_in = 0;

 FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_5);
}
