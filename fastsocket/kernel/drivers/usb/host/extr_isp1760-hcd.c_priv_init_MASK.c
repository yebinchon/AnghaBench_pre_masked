
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_hcd {scalar_t__ regs; } ;
struct isp1760_hcd {int i_thresh; int periodic_size; int lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 struct isp1760_hcd* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct usb_hcd *VAR_2)
{
 struct isp1760_hcd *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4;

 FUNC_4(&VAR_3->lock);





 VAR_3->periodic_size = VAR_0;


 VAR_4 = FUNC_3(VAR_2->regs + VAR_1);

 if (FUNC_0(VAR_4))
  VAR_3->i_thresh = 8;
 else
  VAR_3->i_thresh = 2 + FUNC_1(VAR_4);

 return 0;
}
