
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct AdapterControlBlock {int eternal_timer; } ;


 int FUNC_0 (struct AdapterControlBlock*) ;
 int FUNC_1 (struct AdapterControlBlock*) ;
 int FUNC_2 (struct AdapterControlBlock*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 struct Scsi_Host* FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_5(VAR_0);
 struct AdapterControlBlock *VAR_2 =
  (struct AdapterControlBlock *)VAR_1->hostdata;
 FUNC_3(&VAR_2->eternal_timer);
 FUNC_0(VAR_2);
 FUNC_4();
 FUNC_2(VAR_2);
 FUNC_1(VAR_2);
}
