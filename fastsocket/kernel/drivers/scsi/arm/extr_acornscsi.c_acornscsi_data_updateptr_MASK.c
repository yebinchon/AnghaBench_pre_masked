
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_pointer {unsigned int ptr; scalar_t__ this_residual; } ;
struct TYPE_4__ {int xfer_done; } ;
struct TYPE_5__ {TYPE_1__ dma; } ;
typedef TYPE_2__ AS_Host ;


 scalar_t__ FUNC_0 (struct scsi_pointer*) ;

__attribute__((used)) static
void FUNC_1(AS_Host *VAR_0, struct scsi_pointer *VAR_1, unsigned int VAR_2)
{
    VAR_1->ptr += VAR_2;
    VAR_1->this_residual -= VAR_2;

    if (VAR_1->this_residual == 0 && FUNC_0(VAR_1) == 0)
 VAR_0->dma.xfer_done = 1;
}
