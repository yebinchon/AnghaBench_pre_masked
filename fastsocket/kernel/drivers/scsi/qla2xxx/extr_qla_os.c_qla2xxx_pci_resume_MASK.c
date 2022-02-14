
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ eeh_busy; } ;
struct qla_hw_data {TYPE_1__ flags; } ;
struct pci_dev {int dummy; } ;
struct TYPE_8__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;
 TYPE_2__* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int ,TYPE_2__*,int,char*) ;
 int VAR_1 ;
 int FUNC_3 (int ,TYPE_2__*,int,char*) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(struct pci_dev *VAR_3)
{
 scsi_qla_host_t *VAR_4 = FUNC_1(VAR_3);
 struct qla_hw_data *VAR_5 = VAR_4->hw;
 int VAR_6;

 FUNC_2(VAR_1, VAR_4, 0x900f,
     "pci_resume.\n");

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6 != VAR_0) {
  FUNC_3(VAR_2, VAR_4, 0x9002,
      "The device failed to resume I/O from slot/link_reset.\n");
 }

 FUNC_0(VAR_3);

 VAR_5->flags.eeh_busy = 0;
}
