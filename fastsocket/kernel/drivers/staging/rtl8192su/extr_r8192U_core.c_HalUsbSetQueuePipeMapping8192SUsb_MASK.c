
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct TYPE_3__ {size_t bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct r8192_priv {size_t ep_in_num; size_t ep_out_num; size_t ep_num; void** txqueue_to_outpipemap; void** RtOutPipes; void** RtInPipes; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {struct usb_endpoint_descriptor desc; } ;


 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (void**,size_t*,int) ;
 int FUNC_2 (void**,int ,int) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_5 (struct usb_endpoint_descriptor*) ;
 void* FUNC_6 (struct usb_endpoint_descriptor*) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_0, struct net_device *VAR_1)
{
 struct r8192_priv *VAR_2 = FUNC_0(VAR_1);
 struct usb_host_interface *VAR_3;
 struct usb_endpoint_descriptor *VAR_4;
 u8 VAR_5 = 0;

 VAR_2->ep_in_num = 0;
 VAR_2->ep_out_num = 0;
 FUNC_2(VAR_2->RtOutPipes,0,16);
 FUNC_2(VAR_2->RtInPipes,0,16);

 VAR_3 = VAR_0->cur_altsetting;
 VAR_2->ep_num = VAR_3->desc.bNumEndpoints;

 for (VAR_5 = 0; VAR_5 < VAR_2->ep_num; ++VAR_5) {
  VAR_4 = &VAR_3->endpoint[VAR_5].desc;
  if (FUNC_4(VAR_4)) {
   VAR_2->RtInPipes[VAR_2->ep_in_num] = FUNC_6(VAR_4);
   VAR_2->ep_in_num ++;

  } else if (FUNC_5(VAR_4)) {
   VAR_2->RtOutPipes[VAR_2->ep_out_num] = FUNC_6(VAR_4);
   VAR_2->ep_out_num ++;

  }
 }
 {
  FUNC_2(VAR_2->txqueue_to_outpipemap,0,9);
  if (VAR_2->ep_num == 6) {

   u8 VAR_6[] = {3, 2, 1, 0, 4, 4, 4, 4, 4};

   FUNC_1(VAR_2->txqueue_to_outpipemap,VAR_6,9);
  } else if (VAR_2->ep_num == 4) {

   u8 VAR_7[] = {1, 1, 0, 0, 2, 2, 2, 2, 2};

   FUNC_1(VAR_2->txqueue_to_outpipemap,VAR_7,9);
  } else if (VAR_2->ep_num > 9) {

   u8 VAR_8[] = {3, 2, 1, 0, 4, 8, 7, 6, 5};

   FUNC_1(VAR_2->txqueue_to_outpipemap,VAR_8,9);
  } else {

   u8 VAR_9[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
   FUNC_1(VAR_2->txqueue_to_outpipemap,VAR_9,9);
  }
 }
 FUNC_3("==>ep_num:%d, in_ep_num:%d, out_ep_num:%d\n", VAR_2->ep_num, VAR_2->ep_in_num, VAR_2->ep_out_num);

 FUNC_3("==>RtInPipes:");
 for(VAR_5=0; VAR_5 < VAR_2->ep_in_num; VAR_5++)
  FUNC_3("%d  ", VAR_2->RtInPipes[VAR_5]);
 FUNC_3("\n");

 FUNC_3("==>RtOutPipes:");
 for(VAR_5=0; VAR_5 < VAR_2->ep_out_num; VAR_5++)
  FUNC_3("%d  ", VAR_2->RtOutPipes[VAR_5]);
 FUNC_3("\n");

 FUNC_3("==>txqueue_to_outpipemap for BK, BE, VI, VO, HCCA, TXCMD, MGNT, HIGH, BEACON:\n");
 for(VAR_5=0; VAR_5 < 9; VAR_5++)
  FUNC_3("%d  ", VAR_2->txqueue_to_outpipemap[VAR_5]);
 FUNC_3("\n");

 return;
}
