
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct qe_udc {TYPE_1__* usb_regs; struct qe_ep* eps; } ;
struct qe_ep {int dir; } ;
struct TYPE_2__ {int * usb_usep; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct qe_ep*) ;
 int FUNC_3 (struct qe_udc*,int) ;

__attribute__((used)) static int FUNC_4(struct qe_udc *VAR_3, int VAR_4)
{
 struct qe_ep *VAR_5;
 u16 VAR_6;

 VAR_5 = &VAR_3->eps[VAR_4];
 VAR_6 = FUNC_0(&VAR_3->usb_regs->usb_usep[VAR_4]);
 VAR_6 &= ~VAR_1;

 switch (VAR_5->dir) {
 case 130:
  FUNC_2(VAR_5);
  break;
 case 128:
  VAR_6 |= VAR_2;
  break;
 case 129:
  FUNC_2(VAR_5);
  VAR_6 |= VAR_0;
  break;
 default:
  break;
 }
 FUNC_1(&VAR_3->usb_regs->usb_usep[VAR_4], VAR_6);

 FUNC_3(VAR_3, VAR_4);

 return 0;
}
