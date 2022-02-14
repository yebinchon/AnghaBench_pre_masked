
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_12__ {int ptr; } ;
struct TYPE_14__ {TYPE_10__ SCp; } ;
struct TYPE_13__ {scalar_t__ direction; unsigned int xfer_start; unsigned int xfer_length; unsigned int start_addr; unsigned int transferred; scalar_t__ xfer_setup; int xfer_ptr; scalar_t__ xfer_required; } ;
struct TYPE_15__ {int SCpnt; TYPE_2__ scsi; TYPE_1__ dma; } ;
typedef TYPE_3__ AS_Host ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ,unsigned int,unsigned int) ;
 int FUNC_2 (TYPE_3__*,TYPE_10__*,unsigned int) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 unsigned int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static
void FUNC_7(AS_Host *VAR_3)
{
    FUNC_6(VAR_3, VAR_0, VAR_2);
    FUNC_5(VAR_3);




    if (VAR_3->dma.xfer_required) {
 VAR_3->dma.xfer_required = 0;
 if (VAR_3->dma.direction == VAR_1)
     FUNC_1(VAR_3, VAR_3->dma.xfer_ptr,
     VAR_3->dma.xfer_start, VAR_3->dma.xfer_length);
    }




    if (VAR_3->dma.xfer_setup) {
 unsigned int VAR_4;

 VAR_3->dma.xfer_setup = 0;
 VAR_4 = FUNC_4(VAR_3) - VAR_3->dma.start_addr;
 VAR_3->dma.transferred += VAR_4;

 if (VAR_3->dma.direction == VAR_1)
     FUNC_1(VAR_3, VAR_3->scsi.SCp.ptr,
     VAR_3->dma.start_addr, VAR_4);




 FUNC_2(VAR_3, &VAR_3->scsi.SCp, VAR_4);



    }
}
