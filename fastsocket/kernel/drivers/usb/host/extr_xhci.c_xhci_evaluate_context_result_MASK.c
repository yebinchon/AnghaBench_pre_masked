
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xhci_virt_device {int out_ctx; } ;
struct xhci_hcd {struct xhci_virt_device** devs; } ;
struct usb_device {size_t slot_id; int dev; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct xhci_hcd*,int ,int) ;
 int FUNC_3 (struct xhci_hcd*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct xhci_hcd *VAR_2,
  struct usb_device *VAR_3, u32 *VAR_4)
{
 int VAR_5;
 struct xhci_virt_device *VAR_6 = VAR_2->devs[VAR_3->slot_id];

 switch (*VAR_4) {
 case 130:
  FUNC_1(&VAR_3->dev, "WARN: xHCI driver setup invalid evaluate "
    "context command.\n");
  VAR_5 = -VAR_0;
  break;
 case 131:
  FUNC_1(&VAR_3->dev, "WARN: slot not enabled for"
    "evaluate context command.\n");
  VAR_5 = -VAR_0;
  break;
 case 133:
  FUNC_1(&VAR_3->dev, "WARN: invalid context state for "
    "evaluate context command.\n");
  FUNC_2(VAR_2, VAR_6->out_ctx, 1);
  VAR_5 = -VAR_0;
  break;
 case 132:
  FUNC_1(&VAR_3->dev, "ERROR: Incompatible device for evaluate "
    "context command.\n");
  VAR_5 = -VAR_1;
  break;
 case 129:

  FUNC_1(&VAR_3->dev, "WARN: Max Exit Latency too large\n");
  VAR_5 = -VAR_0;
  break;
 case 128:
  FUNC_0(&VAR_3->dev, "Successful evaluate context command\n");
  VAR_5 = 0;
  break;
 default:
  FUNC_3(VAR_2, "ERROR: unexpected command completion "
    "code 0x%x.\n", *VAR_4);
  VAR_5 = -VAR_0;
  break;
 }
 return VAR_5;
}
