
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xhci_virt_device {TYPE_2__* tt_info; TYPE_1__* eps; int udev; int bw_table; int in_ctx; } ;
struct xhci_input_control_ctx {int dummy; } ;
struct xhci_hcd {int dummy; } ;
struct xhci_container_ctx {int dummy; } ;
struct xhci_bw_info {int dummy; } ;
typedef int ep_bw_info ;
struct TYPE_6__ {int active_eps; } ;
struct TYPE_5__ {struct xhci_bw_info bw_info; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xhci_input_control_ctx*,int) ;
 scalar_t__ FUNC_1 (struct xhci_input_control_ctx*,int) ;
 int FUNC_2 (struct xhci_bw_info*,struct xhci_bw_info*,int) ;
 int FUNC_3 (struct xhci_hcd*,struct xhci_bw_info*,int ,int ,TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (struct xhci_hcd*,struct xhci_virt_device*,int) ;
 int FUNC_5 (struct xhci_hcd*,struct xhci_bw_info*,int ,int ,TYPE_1__*,TYPE_2__*) ;
 struct xhci_input_control_ctx* FUNC_6 (struct xhci_hcd*,struct xhci_container_ctx*) ;
 int FUNC_7 (struct xhci_hcd*,int ,struct xhci_input_control_ctx*,struct xhci_virt_device*) ;
 int FUNC_8 (struct xhci_hcd*,struct xhci_virt_device*,int) ;

__attribute__((used)) static int FUNC_9(struct xhci_hcd *VAR_1,
  struct xhci_virt_device *VAR_2,
  struct xhci_container_ctx *VAR_3)
{
 struct xhci_bw_info VAR_4[31];
 int VAR_5;
 struct xhci_input_control_ctx *VAR_6;
 int VAR_7 = 0;

 if (VAR_2->tt_info)
  VAR_7 = VAR_2->tt_info->active_eps;

 VAR_6 = FUNC_6(VAR_1, VAR_3);

 for (VAR_5 = 0; VAR_5 < 31; VAR_5++) {
  if (!FUNC_0(VAR_6, VAR_5) && !FUNC_1(VAR_6, VAR_5))
   continue;


  FUNC_2(&VAR_4[VAR_5], &VAR_2->eps[VAR_5].bw_info,
    sizeof(VAR_4[VAR_5]));



  if (FUNC_1(VAR_6, VAR_5))
   FUNC_5(VAR_1,
     &VAR_2->eps[VAR_5].bw_info,
     VAR_2->bw_table,
     VAR_2->udev,
     &VAR_2->eps[VAR_5],
     VAR_2->tt_info);
 }

 FUNC_7(VAR_1, VAR_2->in_ctx, VAR_6, VAR_2);
 for (VAR_5 = 0; VAR_5 < 31; VAR_5++) {

  if (FUNC_0(VAR_6, VAR_5))
   FUNC_3(VAR_1,
     &VAR_2->eps[VAR_5].bw_info,
     VAR_2->bw_table,
     VAR_2->udev,
     &VAR_2->eps[VAR_5],
     VAR_2->tt_info);
 }

 if (!FUNC_4(VAR_1, VAR_2, VAR_7)) {



  FUNC_8(VAR_1, VAR_2, VAR_7);
  return 0;
 }


 for (VAR_5 = 0; VAR_5 < 31; VAR_5++) {
  if (!FUNC_0(VAR_6, VAR_5) && !FUNC_1(VAR_6, VAR_5))
   continue;




  if (FUNC_0(VAR_6, VAR_5)) {
   FUNC_5(VAR_1,
     &VAR_2->eps[VAR_5].bw_info,
     VAR_2->bw_table,
     VAR_2->udev,
     &VAR_2->eps[VAR_5],
     VAR_2->tt_info);
  }

  FUNC_2(&VAR_2->eps[VAR_5].bw_info, &VAR_4[VAR_5],
    sizeof(VAR_4[VAR_5]));

  if (FUNC_1(VAR_6, VAR_5))
   FUNC_3(VAR_1,
     &VAR_2->eps[VAR_5].bw_info,
     VAR_2->bw_table,
     VAR_2->udev,
     &VAR_2->eps[VAR_5],
     VAR_2->tt_info);
 }
 return -VAR_0;
}
