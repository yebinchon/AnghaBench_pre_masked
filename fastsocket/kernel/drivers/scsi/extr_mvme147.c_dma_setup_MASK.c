
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int this_residual; int ptr; } ;
struct scsi_cmnd {TYPE_1__ SCp; } ;
struct TYPE_6__ {int dma_dir; } ;
struct TYPE_5__ {int dma_bcr; unsigned long dma_dadr; unsigned char dma_cntrl; } ;


 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int) ;
 int FUNC_2 (unsigned long,int) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct scsi_cmnd *VAR_2, int VAR_3)
{
    unsigned char VAR_4 = 0x01;
    unsigned long VAR_5 = FUNC_3(VAR_2->SCp.ptr);


    if (!VAR_3)
 VAR_4 |= 0x04;


    FUNC_0(VAR_1)->dma_dir = VAR_3;

    if (VAR_3)

 FUNC_1 (VAR_5, VAR_2->SCp.this_residual);
    else

 FUNC_2 (VAR_5, VAR_2->SCp.this_residual);


    VAR_0->dma_bcr = VAR_2->SCp.this_residual | (1<<24);
    VAR_0->dma_dadr = VAR_5;
    VAR_0->dma_cntrl = VAR_4;


    return 0;
}
