
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {long transferred; scalar_t__ start_addr; scalar_t__ xfer_setup; } ;
struct TYPE_10__ {long scsi_xferred; } ;
struct TYPE_11__ {TYPE_1__ SCp; } ;
struct TYPE_14__ {int SCpnt; TYPE_4__ dma; TYPE_3__* host; TYPE_2__ scsi; } ;
struct TYPE_12__ {int host_no; } ;
typedef TYPE_5__ AS_Host ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*,char*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,int ,long) ;
 int FUNC_4 (char*,int ,int ,long) ;

__attribute__((used)) static
void FUNC_5(AS_Host *VAR_3)
{
    if (VAR_3->dma.xfer_setup) {
 signed long VAR_4;
 VAR_4 = VAR_3->scsi.SCp.scsi_xferred - VAR_3->dma.transferred;
 if (VAR_4 < 0)
     FUNC_4("scsi%d.%c: Ack! DMA write correction %ld < 0!\n",
      VAR_3->host->host_no, FUNC_2(VAR_3), VAR_4);
 else if (VAR_4 == 0)
     VAR_3->dma.xfer_setup = 0;
 else {
     VAR_4 += VAR_3->dma.start_addr;
     FUNC_3(VAR_3, VAR_1, VAR_4);
     FUNC_3(VAR_3, VAR_2, VAR_4 >> 8);
     FUNC_3(VAR_3, VAR_0, VAR_4 >> 16);



 }
    }
}
