
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int* DeviceRemovable; } ;
struct TYPE_6__ {TYPE_1__ hs; } ;
struct usb_hub_descriptor {int bDescLength; int bDescriptorType; int bNbrPorts; int bPwrOn2PwrGood; TYPE_2__ u; int bHubContrCurrent; int wHubCharacteristics; } ;
struct TYPE_8__ {int is_b_host; } ;
struct usb_hcd {TYPE_4__ self; } ;
struct musb {int port1_status; int is_active; int lock; int mregs; TYPE_3__* xceiv; int rh_timer; } ;
typedef int __le32 ;
struct TYPE_7__ {int state; } ;






 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_1 (struct usb_hcd*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*) ;
 struct musb* FUNC_5 (struct usb_hcd*) ;
 int FUNC_6 (struct musb*) ;
 int FUNC_7 (struct musb*) ;
 int VAR_19 ;
 int FUNC_8 (struct musb*) ;
 int FUNC_9 (struct musb*,int) ;
 int FUNC_10 (struct musb*,int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct musb*,int ) ;
 int FUNC_13 (struct musb*) ;
 int FUNC_14 (struct musb*) ;
 int FUNC_15 (int ,int ,int) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *,unsigned long) ;
 int FUNC_20 (int ,int ) ;
 scalar_t__ FUNC_21 (int) ;
 int FUNC_22 (int ) ;

int FUNC_23(
 struct usb_hcd *VAR_20,
 u16 VAR_21,
 u16 VAR_22,
 u16 VAR_23,
 char *VAR_24,
 u16 VAR_25)
{
 struct musb *VAR_26 = FUNC_5(VAR_20);
 u32 VAR_27;
 int VAR_28 = 0;
 unsigned long VAR_29;

 FUNC_18(&VAR_26->lock, VAR_29);

 if (FUNC_21(!FUNC_1(VAR_20))) {
  FUNC_19(&VAR_26->lock, VAR_29);
  return -VAR_1;
 }





 switch (VAR_21) {
 case 144:
 case 139:
  switch (VAR_22) {
  case 145:
  case 146:
   break;
  default:
   goto error;
  }
  break;
 case 143:
  if ((VAR_23 & 0xff) != 1)
   goto error;

  switch (VAR_22) {
  case 132:
   break;
  case 129:
   FUNC_10(VAR_26, 0);
   break;
  case 131:
   if (!(FUNC_7(VAR_26) && VAR_20->self.is_b_host))
    FUNC_12(VAR_26, 0);
   break;
  case 137:
  case 136:
  case 135:
  case 134:
  case 133:
   break;
  default:
   goto error;
  }
  FUNC_0(5, "clear feature %d\n", VAR_22);
  VAR_26->port1_status &= ~(1 << VAR_22);
  break;
 case 142:
  {
  struct usb_hub_descriptor *VAR_30 = (void *)VAR_24;

  VAR_30->bDescLength = 9;
  VAR_30->bDescriptorType = 0x29;
  VAR_30->bNbrPorts = 1;
  VAR_30->wHubCharacteristics = FUNC_2(
      0x0001
    | 0x0010
    );
  VAR_30->bPwrOn2PwrGood = 5;
  VAR_30->bHubContrCurrent = 0;


  VAR_30->u.hs.DeviceRemovable[0] = 0x02;
  VAR_30->u.hs.DeviceRemovable[1] = 0xff;
  }
  break;
 case 141:
  VAR_27 = 0;
  *(__le32 *) VAR_24 = FUNC_3(VAR_27);
  break;
 case 140:
  if (VAR_23 != 1)
   goto error;


  if ((VAR_26->port1_status & VAR_17)
    && FUNC_20(VAR_19, VAR_26->rh_timer))
   FUNC_9(VAR_26, 0);


  if ((VAR_26->port1_status & VAR_4)
    && FUNC_20(VAR_19, VAR_26->rh_timer)) {
   u8 VAR_31;

   VAR_31 = FUNC_11(VAR_26->mregs, VAR_5);
   VAR_31 &= ~VAR_6;
   FUNC_0(4, "root port resume stopped, power %02x\n",
     VAR_31);
   FUNC_15(VAR_26->mregs, VAR_5, VAR_31);






   VAR_26->is_active = 1;
   VAR_26->port1_status &= ~(VAR_18
     | VAR_4);
   VAR_26->port1_status |= VAR_16 << 16;
   FUNC_22(FUNC_14(VAR_26));

   VAR_26->xceiv->state = VAR_15;
  }

  FUNC_17(FUNC_3(VAR_26->port1_status
     & ~VAR_4),
    (__le32 *) VAR_24);


  FUNC_0(FUNC_4((u16 *)(VAR_24+2)) ? 2 : 5, "port status %08x\n",
    VAR_26->port1_status);
  break;
 case 138:
  if ((VAR_23 & 0xff) != 1)
   goto error;

  switch (VAR_22) {
  case 131:
   if (!(FUNC_7(VAR_26) && VAR_20->self.is_b_host))
    FUNC_13(VAR_26);
   break;
  case 130:
   FUNC_9(VAR_26, 1);
   break;
  case 129:
   FUNC_10(VAR_26, 1);
   break;
  case 128:
   if (FUNC_21(FUNC_6(VAR_26)))
    goto error;

   VAR_23 >>= 8;
   switch (VAR_23) {
   case 1:
    FUNC_16("TEST_J\n");
    VAR_27 = VAR_11;
    break;
   case 2:
    FUNC_16("TEST_K\n");
    VAR_27 = VAR_12;
    break;
   case 3:
    FUNC_16("TEST_SE0_NAK\n");
    VAR_27 = VAR_14;
    break;
   case 4:
    FUNC_16("TEST_PACKET\n");
    VAR_27 = VAR_13;
    FUNC_8(VAR_26);
    break;
   case 5:
    FUNC_16("TEST_FORCE_ENABLE\n");
    VAR_27 = VAR_9
     | VAR_10;

    FUNC_15(VAR_26->mregs, VAR_2,
      VAR_3);
    break;
   case 6:
    FUNC_16("TEST_FIFO_ACCESS\n");
    VAR_27 = VAR_8;
    break;
   default:
    goto error;
   }
   FUNC_15(VAR_26->mregs, VAR_7, VAR_27);
   break;
  default:
   goto error;
  }
  FUNC_0(5, "set feature %d\n", VAR_22);
  VAR_26->port1_status |= 1 << VAR_22;
  break;

 default:
error:

  VAR_28 = -VAR_0;
 }
 FUNC_19(&VAR_26->lock, VAR_29);
 return VAR_28;
}
