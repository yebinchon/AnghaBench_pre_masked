
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ipr_ioa_cfg {scalar_t__ sdt_state; int in_ioa_bringdown; int hrrq_num; TYPE_2__* host; TYPE_1__* hrrq; scalar_t__ reset_retries; } ;
struct TYPE_4__ {int host_lock; } ;
struct TYPE_3__ {int _lock; scalar_t__ allow_cmds; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ipr_ioa_cfg*,int ) ;
 struct ipr_ioa_cfg* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_4)
{
 unsigned long VAR_5 = 0;
 struct ipr_ioa_cfg *VAR_6 = FUNC_1(VAR_4);
 int VAR_7;

 FUNC_3(VAR_6->host->host_lock, VAR_5);
 if (VAR_6->sdt_state == VAR_3)
  VAR_6->sdt_state = VAR_0;
 VAR_6->reset_retries = VAR_1 - 1;
 VAR_6->in_ioa_bringdown = 1;
 for (VAR_7 = 0; VAR_7 < VAR_6->hrrq_num; VAR_7++) {
  FUNC_2(&VAR_6->hrrq[VAR_7]._lock);
  VAR_6->hrrq[VAR_7].allow_cmds = 0;
  FUNC_4(&VAR_6->hrrq[VAR_7]._lock);
 }
 FUNC_6();
 FUNC_0(VAR_6, VAR_2);
 FUNC_5(VAR_6->host->host_lock, VAR_5);
}
