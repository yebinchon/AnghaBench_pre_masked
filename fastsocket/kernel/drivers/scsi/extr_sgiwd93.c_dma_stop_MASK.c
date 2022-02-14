
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int this_residual; int dma_handle; int * ptr; } ;
struct scsi_cmnd {TYPE_3__ SCp; TYPE_2__* device; } ;
struct TYPE_8__ {scalar_t__ dma_dir; } ;
struct ip22_hostdata {TYPE_4__ wh; int dev; } ;
struct hpc3_scsiregs {int ctrl; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_6__ {TYPE_1__* host; } ;
struct TYPE_5__ {scalar_t__ base; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct ip22_hostdata* FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void FUNC_5(struct Scsi_Host *VAR_2, struct scsi_cmnd *VAR_3,
       int VAR_4)
{
 struct ip22_hostdata *VAR_5 = FUNC_3(VAR_2);
 struct hpc3_scsiregs *VAR_6;

 if (!VAR_3)
  return;

 if (VAR_3->SCp.ptr == ((void*)0) || VAR_3->SCp.this_residual == 0)
  return;

 VAR_6 = (struct hpc3_scsiregs *) VAR_3->device->host->base;

 FUNC_4("dma_stop: status<%d> ", VAR_4);


 if (VAR_5->wh.dma_dir) {
  VAR_6->ctrl |= VAR_1;
  while (VAR_6->ctrl & VAR_0)
   FUNC_1();
 }
 VAR_6->ctrl = 0;
 FUNC_2(VAR_5->dev, VAR_3->SCp.dma_handle,
    VAR_3->SCp.this_residual,
    FUNC_0(VAR_5->wh.dma_dir));

 FUNC_4("\n");
}
