
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_hcd {int regs; } ;
struct isp1760_qtd {int packet_type; scalar_t__ length; int data_buffer; } ;
struct isp1760_hcd {int dummy; } ;


 scalar_t__ VAR_0 ;



 struct usb_hcd* FUNC_0 (struct isp1760_hcd*) ;
 int FUNC_1 (struct isp1760_hcd*,int ,int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct isp1760_qtd *VAR_1, struct isp1760_hcd *VAR_2,
  u32 VAR_3)
{
 u32 VAR_4;
 struct usb_hcd *VAR_5 = FUNC_0(VAR_2);

 VAR_4 = VAR_1->packet_type;

 if (VAR_1->length && (VAR_1->length <= VAR_0)) {
  switch (VAR_4) {
  case 130:
   break;
  case 129:
  case 128:
   FUNC_1(VAR_2, VAR_1->data_buffer,
     VAR_5->regs + VAR_3,
     VAR_1->length);
  }
 }
}
