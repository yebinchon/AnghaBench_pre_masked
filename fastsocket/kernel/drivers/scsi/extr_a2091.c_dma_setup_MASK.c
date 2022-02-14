
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int this_residual; int * ptr; } ;
struct scsi_cmnd {TYPE_2__* device; TYPE_1__ SCp; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_8__ {unsigned short CNTR; unsigned long ACR; int ST_DMA; } ;
struct TYPE_7__ {int dma_bounce_len; int dma_dir; int * dma_bounce_buffer; } ;
struct TYPE_6__ {struct Scsi_Host* host; } ;


 unsigned long VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 TYPE_4__* FUNC_0 (struct Scsi_Host*) ;
 int VAR_4 ;
 TYPE_3__* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *,int ) ;
 unsigned long FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct scsi_cmnd *VAR_5, int VAR_6)
{
    unsigned short VAR_7 = VAR_3 | VAR_2;
    unsigned long VAR_8 = FUNC_7(VAR_5->SCp.ptr);
    struct Scsi_Host *VAR_9 = VAR_5->device->host;


    if (VAR_8 & VAR_0)
    {
 FUNC_1(VAR_9)->dma_bounce_len = (VAR_5->SCp.this_residual + 511)
     & ~0x1ff;
 FUNC_1(VAR_9)->dma_bounce_buffer =
     FUNC_5 (FUNC_1(VAR_9)->dma_bounce_len, VAR_4);


 if (!FUNC_1(VAR_9)->dma_bounce_buffer) {
     FUNC_1(VAR_9)->dma_bounce_len = 0;
     return 1;
 }


 VAR_8 = FUNC_7(FUNC_1(VAR_9)->dma_bounce_buffer);


 if (VAR_8 & VAR_0) {

     FUNC_4 (FUNC_1(VAR_9)->dma_bounce_buffer);
     FUNC_1(VAR_9)->dma_bounce_buffer = ((void*)0);
     FUNC_1(VAR_9)->dma_bounce_len = 0;
     return 1;
 }

 if (!VAR_6) {

  FUNC_6 (FUNC_1(VAR_9)->dma_bounce_buffer,
   VAR_5->SCp.ptr, VAR_5->SCp.this_residual);
 }
    }


    if (!VAR_6)
 VAR_7 |= VAR_1;


    FUNC_1(VAR_5->device->host)->dma_dir = VAR_6;

    FUNC_0(VAR_5->device->host)->CNTR = VAR_7;


    FUNC_0(VAR_5->device->host)->ACR = VAR_8;

    if (VAR_6){

 FUNC_2 (VAR_8, VAR_5->SCp.this_residual);
    }else{

 FUNC_3 (VAR_8, VAR_5->SCp.this_residual);
      }

    FUNC_0(VAR_5->device->host)->ST_DMA = 1;


    return 0;
}
