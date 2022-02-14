
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fsl_udc {int phy_mode; unsigned int ep_qh_dma; int ep_qh; } ;
struct TYPE_4__ {int endpointlistaddr; int usbsts; int usbmode; int usbcmd; int portsc1; } ;
struct TYPE_3__ {int snoop2; int snoop1; int control; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 unsigned long VAR_2 ;




 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int FUNC_1 (char*,int ,int,unsigned int) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (unsigned int,int *) ;
 int FUNC_4 () ;
 TYPE_2__* VAR_16 ;
 unsigned int FUNC_5 (int *) ;
 int FUNC_6 (unsigned int,int *) ;
 unsigned long VAR_17 ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;
 TYPE_1__* VAR_18 ;

__attribute__((used)) static int FUNC_8(struct fsl_udc *VAR_19)
{
 unsigned int VAR_20, VAR_21;

 unsigned int VAR_22;

 unsigned long VAR_23;



 VAR_21 = FUNC_5(&VAR_16->portsc1);
 VAR_21 &= ~(VAR_3 | VAR_4);
 switch (VAR_19->phy_mode) {
 case 130:
  VAR_21 |= VAR_6;
  break;
 case 128:
  VAR_21 |= VAR_8;

 case 129:
  VAR_21 |= VAR_7;
  break;
 case 131:
  VAR_21 |= VAR_5;
  break;
 default:
  return -VAR_0;
 }
 FUNC_6(VAR_21, &VAR_16->portsc1);


 VAR_20 = FUNC_5(&VAR_16->usbcmd);
 VAR_20 &= ~VAR_11;
 FUNC_6(VAR_20, &VAR_16->usbcmd);

 VAR_20 = FUNC_5(&VAR_16->usbcmd);
 VAR_20 |= VAR_10;
 FUNC_6(VAR_20, &VAR_16->usbcmd);


 VAR_23 = VAR_17 + 1000;
 while (FUNC_5(&VAR_16->usbcmd) & VAR_10) {
  if (FUNC_7(VAR_17, VAR_23)) {
   FUNC_0("udc reset timeout!\n");
   return -VAR_1;
  }
  FUNC_4();
 }


 VAR_20 = FUNC_5(&VAR_16->usbmode);
 VAR_20 |= VAR_14;

 VAR_20 |= VAR_15;
 FUNC_6(VAR_20, &VAR_16->usbmode);


 FUNC_6(0, &VAR_16->usbsts);

 VAR_20 = VAR_19->ep_qh_dma;
 VAR_20 &= VAR_13;
 FUNC_6(VAR_20, &VAR_16->endpointlistaddr);

 FUNC_1("vir[qh_base] is %p phy[qh_base] is 0x%8x reg is 0x%8x",
  VAR_19->ep_qh, (int)VAR_20,
  FUNC_5(&VAR_16->endpointlistaddr));



 VAR_22 = FUNC_2(&VAR_18->control);
 VAR_22 |= VAR_12;
 FUNC_3(VAR_22, &VAR_18->control);
 return 0;
}
