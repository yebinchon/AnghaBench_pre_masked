
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_host_template {int name; int this_id; } ;
struct Scsi_Host {int irq; int base; scalar_t__ n_io_port; scalar_t__ io_port; scalar_t__ unique_id; scalar_t__ hostdata; } ;
struct TYPE_6__ {int nspinfo; int Lock; int MmioAddress; int IrqNumber; scalar_t__ NumAddress; scalar_t__ BaseAddress; scalar_t__ CmdId; TYPE_1__* ScsiInfo; } ;
typedef TYPE_2__ nsp_hw_data ;
struct TYPE_5__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,TYPE_2__*,int) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 struct Scsi_Host* FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int,char*,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct Scsi_Host *FUNC_5(struct scsi_host_template *VAR_3)
{
 struct Scsi_Host *VAR_4;
 nsp_hw_data *VAR_5 = &VAR_1, *VAR_6;

 FUNC_1(VAR_0, "this_id=%d", VAR_3->this_id);
 VAR_4 = FUNC_2(&VAR_2, sizeof(nsp_hw_data));
 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_0, "host failed");
  return ((void*)0);
 }

 FUNC_0(VAR_4->hostdata, VAR_5, sizeof(nsp_hw_data));
 VAR_6 = (nsp_hw_data *)VAR_4->hostdata;
 VAR_6->ScsiInfo->host = VAR_4;




 FUNC_1(VAR_0, "irq=%d,%d", VAR_5->IrqNumber, ((nsp_hw_data *)VAR_4->hostdata)->IrqNumber);

 VAR_4->unique_id = VAR_6->BaseAddress;
 VAR_4->io_port = VAR_6->BaseAddress;
 VAR_4->n_io_port = VAR_6->NumAddress;
 VAR_4->irq = VAR_6->IrqNumber;
 VAR_4->base = VAR_6->MmioAddress;

 FUNC_4(&(VAR_6->Lock));

 FUNC_3(VAR_6->nspinfo,
   sizeof(VAR_6->nspinfo),
   "NinjaSCSI-3/32Bi Driver $Revision: 1.23 $ IO:0x%04lx-0x%04lx MMIO(virt addr):0x%04lx IRQ:%02d",
   VAR_4->io_port, VAR_4->io_port + VAR_4->n_io_port - 1,
   VAR_4->base,
   VAR_4->irq);
 VAR_3->name = VAR_6->nspinfo;

 FUNC_1(VAR_0, "end");


 return VAR_4;
}
