
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;
struct pci_dev {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct MPT2SAS_ADAPTER {int remove_host; int fw_event_lock; struct workqueue_struct* firmware_event_thread; } ;


 int FUNC_0 (struct MPT2SAS_ADAPTER*) ;
 int FUNC_1 (struct MPT2SAS_ADAPTER*) ;
 int FUNC_2 (struct workqueue_struct*) ;
 int FUNC_3 (struct MPT2SAS_ADAPTER*) ;
 struct Scsi_Host* FUNC_4 (struct pci_dev*) ;
 struct MPT2SAS_ADAPTER* FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_8(struct pci_dev *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_4(VAR_0);
 struct MPT2SAS_ADAPTER *VAR_2 = FUNC_5(VAR_1);
 struct workqueue_struct *VAR_3;
 unsigned long VAR_4;

 VAR_2->remove_host = 1;
 FUNC_0(VAR_2);

 FUNC_6(&VAR_2->fw_event_lock, VAR_4);
 VAR_3 = VAR_2->firmware_event_thread;
 VAR_2->firmware_event_thread = ((void*)0);
 FUNC_7(&VAR_2->fw_event_lock, VAR_4);
 if (VAR_3)
  FUNC_2(VAR_3);

 FUNC_1(VAR_2);
 FUNC_3(VAR_2);
}
