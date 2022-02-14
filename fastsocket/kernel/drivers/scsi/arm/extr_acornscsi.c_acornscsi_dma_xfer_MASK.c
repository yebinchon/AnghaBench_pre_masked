
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ direction; int xfer_length; int xfer_start; int xfer_ptr; scalar_t__ xfer_required; } ;
struct TYPE_6__ {TYPE_1__ dma; } ;
typedef TYPE_2__ AS_Host ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;

__attribute__((used)) static
void FUNC_1(AS_Host *VAR_1)
{
    VAR_1->dma.xfer_required = 0;

    if (VAR_1->dma.direction == VAR_0)
 FUNC_0(VAR_1, VAR_1->dma.xfer_ptr,
    VAR_1->dma.xfer_start, VAR_1->dma.xfer_length);
}
