
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_hcd {scalar_t__ regs; int state; } ;
struct isp1760_hcd {int next_statechange; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct isp1760_hcd*,scalar_t__,int ,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_3 ;
 struct usb_hcd* FUNC_3 (struct isp1760_hcd*) ;

__attribute__((used)) static int FUNC_4(struct isp1760_hcd *VAR_4)
{
 int VAR_5;
 struct usb_hcd *VAR_6 = FUNC_3(VAR_4);
 u32 VAR_7 = FUNC_1(VAR_6->regs + VAR_2);

 VAR_7 |= VAR_0;
 FUNC_2(VAR_7, VAR_6->regs + VAR_2);
 VAR_6->state = VAR_1;
 VAR_4->next_statechange = VAR_3;
 VAR_5 = FUNC_0(VAR_4, VAR_6->regs + VAR_2,
       VAR_0, 0, 250 * 1000);
 return VAR_5;
}
