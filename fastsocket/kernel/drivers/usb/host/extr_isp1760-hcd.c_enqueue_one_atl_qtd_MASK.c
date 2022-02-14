
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct usb_hcd {size_t regs; } ;
struct urb {int dummy; } ;
struct ptd {int dummy; } ;
struct isp1760_qtd {int status; int data_buffer; } ;
struct isp1760_qh {int dummy; } ;
struct isp1760_hcd {TYPE_1__* atl_ints; } ;
typedef int ptd ;
struct TYPE_2__ {size_t payload; int data_buffer; struct isp1760_qtd* qtd; struct isp1760_qh* qh; struct urb* urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct isp1760_qtd*,struct isp1760_hcd*,size_t) ;
 struct usb_hcd* FUNC_1 (struct isp1760_hcd*) ;
 int FUNC_2 (struct isp1760_hcd*,size_t*,size_t,int) ;
 int FUNC_3 (struct isp1760_hcd*,struct isp1760_qh*,struct isp1760_qtd*,struct urb*,size_t,struct ptd*) ;

__attribute__((used)) static void FUNC_4(u32 VAR_2, u32 VAR_3,
  struct isp1760_hcd *VAR_4, struct isp1760_qh *VAR_5,
  struct urb *VAR_6, u32 VAR_7, struct isp1760_qtd *VAR_8)
{
 struct ptd VAR_9;
 struct usb_hcd *VAR_10 = FUNC_1(VAR_4);

 FUNC_3(VAR_4, VAR_5, VAR_8, VAR_6, VAR_3, &VAR_9);
 FUNC_2(VAR_4, (u32 *)&VAR_9, VAR_10->regs + VAR_2, sizeof(VAR_9));
 FUNC_0(VAR_8, VAR_4, VAR_3);

 VAR_4->atl_ints[VAR_7].urb = VAR_6;
 VAR_4->atl_ints[VAR_7].qh = VAR_5;
 VAR_4->atl_ints[VAR_7].qtd = VAR_8;
 VAR_4->atl_ints[VAR_7].data_buffer = VAR_8->data_buffer;
 VAR_4->atl_ints[VAR_7].payload = VAR_3;
 VAR_8->status |= VAR_0 | VAR_1;
 VAR_8->status |= VAR_7 << 16;
}
