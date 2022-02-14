
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct td {int dummy; } ;
struct fhci_hcd {scalar_t__ active_urbs; TYPE_2__* process_done_task; int empty_tds; int empty_eds; void* vroot_hub; TYPE_1__* hc_list; } ;
struct ed {int dummy; } ;
struct TYPE_4__ {unsigned long data; } ;
struct TYPE_3__ {int done_list; int intr_list; int iso_list; int bulk_list; int ctrl_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct fhci_hcd*) ;
 int FUNC_2 (struct fhci_hcd*,struct ed*) ;
 int FUNC_3 (struct fhci_hcd*,struct td*) ;
 TYPE_2__ VAR_4 ;
 void* FUNC_4 (int,int ) ;
 void* FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct fhci_hcd *VAR_5)
{
 int VAR_6;

 VAR_5->hc_list = FUNC_5(sizeof(*VAR_5->hc_list), VAR_1);
 if (!VAR_5->hc_list)
  goto err;

 FUNC_0(&VAR_5->hc_list->ctrl_list);
 FUNC_0(&VAR_5->hc_list->bulk_list);
 FUNC_0(&VAR_5->hc_list->iso_list);
 FUNC_0(&VAR_5->hc_list->intr_list);
 FUNC_0(&VAR_5->hc_list->done_list);

 VAR_5->vroot_hub = FUNC_5(sizeof(*VAR_5->vroot_hub), VAR_1);
 if (!VAR_5->vroot_hub)
  goto err;

 FUNC_0(&VAR_5->empty_eds);
 FUNC_0(&VAR_5->empty_tds);


 VAR_4.data = (unsigned long)VAR_5;
 VAR_5->process_done_task = &VAR_4;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  struct td *VAR_7;

  VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_1);
  if (!VAR_7)
   goto err;
  FUNC_3(VAR_5, VAR_7);
 }
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  struct ed *VAR_8;

  VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_1);
  if (!VAR_8)
   goto err;
  FUNC_2(VAR_5, VAR_8);
 }

 VAR_5->active_urbs = 0;
 return 0;
err:
 FUNC_1(VAR_5);
 return -VAR_0;
}
