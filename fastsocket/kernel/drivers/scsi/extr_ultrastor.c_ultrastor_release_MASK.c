
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int dma_channel; scalar_t__ n_io_port; scalar_t__ io_port; scalar_t__ irq; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_4(struct Scsi_Host *VAR_0)
{
 if (VAR_0->irq)
  FUNC_1(VAR_0->irq, ((void*)0));
 if (VAR_0->dma_channel != 0xff)
  FUNC_0(VAR_0->dma_channel);
 if (VAR_0->io_port && VAR_0->n_io_port)
  FUNC_2(VAR_0->io_port, VAR_0->n_io_port);
 FUNC_3(VAR_0);
 return 0;
}
