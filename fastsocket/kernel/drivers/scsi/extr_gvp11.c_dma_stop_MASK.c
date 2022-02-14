
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int this_residual; int ptr; } ;
struct scsi_cmnd {TYPE_1__ SCp; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_6__ {int SP_DMA; int CNTR; } ;
struct TYPE_5__ {scalar_t__ dma_buffer_pool; scalar_t__ dma_bounce_len; int * dma_bounce_buffer; scalar_t__ dma_dir; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (struct Scsi_Host*) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_5(struct Scsi_Host *VAR_2, struct scsi_cmnd *VAR_3,
       int VAR_4)
{

    FUNC_0(VAR_2)->SP_DMA = 1;

    FUNC_0(VAR_2)->CNTR = VAR_1;


    if (VAR_4 && FUNC_1(VAR_2)->dma_bounce_buffer) {
 if (FUNC_1(VAR_2)->dma_dir && VAR_3)
     FUNC_4 (VAR_3->SCp.ptr,
      FUNC_1(VAR_2)->dma_bounce_buffer,
      VAR_3->SCp.this_residual);

 if (FUNC_1(VAR_2)->dma_buffer_pool == VAR_0)
     FUNC_3 (FUNC_1(VAR_2)->dma_bounce_buffer);
 else
     FUNC_2(FUNC_1(VAR_2)->dma_bounce_buffer);

 FUNC_1(VAR_2)->dma_bounce_buffer = ((void*)0);
 FUNC_1(VAR_2)->dma_bounce_len = 0;
    }
}
