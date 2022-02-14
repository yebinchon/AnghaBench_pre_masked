
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xhci_virt_device {int real_port; TYPE_3__* udev; } ;
struct xhci_interval_bw_table {TYPE_2__* interval_bw; } ;
struct xhci_tt_bw_info {int ttport; struct xhci_interval_bw_table bw_table; int slot_id; int tt_list; } ;
struct xhci_hcd {TYPE_1__* rh_bw; } ;
struct usb_tt {scalar_t__ multi; } ;
struct usb_device {unsigned int maxchild; } ;
typedef int gfp_t ;
struct TYPE_6__ {int slot_id; } ;
struct TYPE_5__ {int endpoints; } ;
struct TYPE_4__ {int tts; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct xhci_tt_bw_info* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct xhci_hcd*,struct xhci_virt_device*,int ) ;

int FUNC_4(struct xhci_hcd *VAR_2,
  struct xhci_virt_device *VAR_3,
  struct usb_device *VAR_4,
  struct usb_tt *VAR_5, gfp_t VAR_6)
{
 struct xhci_tt_bw_info *VAR_7;
 unsigned int VAR_8;
 int VAR_9, VAR_10;

 if (!VAR_5->multi)
  VAR_8 = 1;
 else
  VAR_8 = VAR_4->maxchild;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++, VAR_7++) {
  struct xhci_interval_bw_table *VAR_11;

  VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_6);
  if (!VAR_7)
   goto free_tts;
  FUNC_0(&VAR_7->tt_list);
  FUNC_2(&VAR_7->tt_list,
    &VAR_2->rh_bw[VAR_3->real_port - 1].tts);
  VAR_7->slot_id = VAR_3->udev->slot_id;
  if (VAR_5->multi)
   VAR_7->ttport = VAR_9+1;
  VAR_11 = &VAR_7->bw_table;
  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
   FUNC_0(&VAR_11->interval_bw[VAR_10].endpoints);
 }
 return 0;

free_tts:
 FUNC_3(VAR_2, VAR_3, VAR_3->udev->slot_id);
 return -VAR_0;
}
