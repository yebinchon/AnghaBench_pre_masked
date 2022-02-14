
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mssp {int dummy; } ;
struct mscp {int dummy; } ;
struct hostdata {size_t board_number; int sp_dma_addr; scalar_t__ sp_cpu_addr; int pdev; TYPE_1__* cp; } ;
struct Scsi_Host {unsigned int can_queue; scalar_t__ dma_channel; int n_io_port; int io_port; int irq; scalar_t__ hostdata; } ;
struct TYPE_2__ {int cp_dma_addr; int sglist; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,scalar_t__,int ) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct Scsi_Host*) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_7(struct Scsi_Host *VAR_3)
{
 struct hostdata *VAR_4 = (struct hostdata *)VAR_3->hostdata;
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->can_queue; VAR_5++)
  FUNC_2((&VAR_4->cp[VAR_5])->sglist);

 for (VAR_5 = 0; VAR_5 < VAR_3->can_queue; VAR_5++)
  FUNC_4(VAR_4->pdev, VAR_4->cp[VAR_5].cp_dma_addr,
     sizeof(struct mscp), VAR_1);

 if (VAR_4->sp_cpu_addr)
  FUNC_3(VAR_4->pdev, sizeof(struct mssp),
        VAR_4->sp_cpu_addr, VAR_4->sp_dma_addr);

 FUNC_1(VAR_3->irq, &VAR_2[VAR_4->board_number]);

 if (VAR_3->dma_channel != VAR_0)
  FUNC_0(VAR_3->dma_channel);

 FUNC_5(VAR_3->io_port, VAR_3->n_io_port);
 FUNC_6(VAR_3);
 return 0;
}
