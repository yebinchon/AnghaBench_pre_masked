
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_hcd {scalar_t__ regs; } ;
struct ptd {int dummy; } ;
struct isp1760_qtd {int urb; int length; } ;
struct isp1760_qh {int dummy; } ;
struct isp1760_hcd {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct isp1760_hcd*,int ) ;
 int FUNC_3 (int,int,struct isp1760_hcd*,struct isp1760_qh*,int ,int,struct isp1760_qtd*) ;
 struct isp1760_hcd* FUNC_4 (struct usb_hcd*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct usb_hcd *VAR_5, struct isp1760_qh *VAR_6,
      struct isp1760_qtd *VAR_7)
{
 struct isp1760_hcd *VAR_8 = FUNC_4(VAR_5);
 u32 VAR_9, VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13, VAR_14;
 u32 VAR_15;







 FUNC_7(195);
 VAR_9 = FUNC_5(VAR_5->regs + VAR_2);

 FUNC_0(!VAR_9);
 VAR_12 = FUNC_1(VAR_9);
 VAR_11 = 1 << VAR_12;

 VAR_13 = VAR_4 + VAR_12 * sizeof(struct ptd);

 VAR_14 = FUNC_2(VAR_8, VAR_7->length);

 FUNC_3(VAR_13, VAR_14, VAR_8, VAR_6, VAR_7->urb, VAR_12, VAR_7);

 VAR_10 = FUNC_5(VAR_5->regs + VAR_1);
 VAR_10 |= VAR_11;
 FUNC_6(VAR_10, VAR_5->regs + VAR_1);

 VAR_9 &= ~VAR_11;
 FUNC_6(VAR_9, VAR_5->regs + VAR_2);

 VAR_15 = FUNC_5(VAR_5->regs + VAR_0);
 VAR_15 |= VAR_3;
 FUNC_6(VAR_15, VAR_5->regs + VAR_0);
}
