
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int this_residual; int ptr; } ;
struct scsi_cmnd {TYPE_1__ SCp; } ;
struct TYPE_6__ {unsigned short CNTR; unsigned long ACR; int ST_DMA; } ;
struct TYPE_5__ {int dma_bounce_len; int dma_dir; int dma_bounce_buffer; } ;


 unsigned long VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 TYPE_3__* FUNC_0 (int ) ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int ) ;
 unsigned long FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct scsi_cmnd *VAR_6, int VAR_7)
{
    unsigned short VAR_8 = VAR_3 | VAR_2;
    unsigned long VAR_9 = FUNC_7(VAR_6->SCp.ptr);







    if (VAR_9 & VAR_0)
    {
 FUNC_1(VAR_5)->dma_bounce_len = (VAR_6->SCp.this_residual + 511)
     & ~0x1ff;
 FUNC_1(VAR_5)->dma_bounce_buffer =
     FUNC_4 (FUNC_1(VAR_5)->dma_bounce_len, VAR_4);


 if (!FUNC_1(VAR_5)->dma_bounce_buffer) {
     FUNC_1(VAR_5)->dma_bounce_len = 0;
     return 1;
 }

 if (!VAR_7) {

     FUNC_6 (FUNC_1(VAR_5)->dma_bounce_buffer,
  VAR_6->SCp.ptr, VAR_6->SCp.this_residual);
 }

 VAR_9 = FUNC_7(FUNC_1(VAR_5)->dma_bounce_buffer);
    }


    if (!VAR_7)
 VAR_8 |= VAR_1;


    FUNC_1(VAR_5)->dma_dir = VAR_7;

    FUNC_0(VAR_5)->CNTR = VAR_8;


    FUNC_0(VAR_5)->ACR = VAR_9;

    if (VAR_7)

 FUNC_2 (VAR_9, VAR_6->SCp.this_residual);
    else

 FUNC_3 (VAR_9, VAR_6->SCp.this_residual);


    FUNC_5();
    FUNC_0(VAR_5)->ST_DMA = 1;
    FUNC_5();


    return 0;
}
