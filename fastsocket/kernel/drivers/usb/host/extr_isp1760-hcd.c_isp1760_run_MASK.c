
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_hcd {int uses_new_polling; scalar_t__ regs; int state; } ;
struct isp1760_hcd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int VAR_10 ;
 int FUNC_1 (struct isp1760_hcd*,scalar_t__,int,int,int) ;
 struct isp1760_hcd* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (struct isp1760_hcd*,char*,int,int) ;
 int FUNC_5 (struct usb_hcd*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct usb_hcd *VAR_11)
{
 struct isp1760_hcd *VAR_12 = FUNC_2(VAR_11);
 int VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;

 VAR_11->uses_new_polling = 1;

 VAR_11->state = VAR_7;
 FUNC_3(VAR_11);
 VAR_14 = FUNC_6(VAR_11->regs + VAR_6);
 FUNC_7(VAR_14 | VAR_9, VAR_11->regs + VAR_6);

 VAR_15 = FUNC_6(VAR_11->regs + VAR_8);
 VAR_15 &= ~(VAR_0|VAR_1);
 VAR_15 |= VAR_2;
 FUNC_7(VAR_15, VAR_11->regs + VAR_8);

 VAR_13 = FUNC_1(VAR_12, VAR_11->regs + VAR_8, VAR_2, VAR_2,
   250 * 1000);
 if (VAR_13)
  return VAR_13;






 FUNC_0(&VAR_10);
 FUNC_7(VAR_3, VAR_11->regs + VAR_5);

 VAR_13 = FUNC_1(VAR_12, VAR_11->regs + VAR_5, VAR_3, VAR_3,
   250 * 1000);
 FUNC_8(&VAR_10);
 if (VAR_13)
  return VAR_13;

 VAR_16 = FUNC_6(VAR_11->regs + VAR_4);
 FUNC_4(VAR_12, "USB ISP %04x HW rev. %d started\n", VAR_16 & 0xffff,
   VAR_16 >> 16);



 FUNC_5(VAR_11);





 return 0;
}
