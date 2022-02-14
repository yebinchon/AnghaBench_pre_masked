
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct isci_remote_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ current_state_id; } ;
struct isci_host {TYPE_2__ sm; TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,struct isci_host*,struct isci_remote_device*,scalar_t__) ;
 int FUNC_1 (struct isci_host*) ;
 int FUNC_2 (struct isci_host*) ;

void FUNC_3(struct isci_host *VAR_1,
       struct isci_remote_device *VAR_2)
{
 if (VAR_1->sm.current_state_id != VAR_0) {
  FUNC_0(&VAR_1->pdev->dev,
   "SCIC Controller 0x%p remote device stopped event "
   "from device 0x%p in unexpected state %d\n",
   VAR_1, VAR_2,
   VAR_1->sm.current_state_id);
  return;
 }

 if (!FUNC_2(VAR_1))
  FUNC_1(VAR_1);
}
