
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct Scsi_Host {size_t irq; scalar_t__ n_io_port; scalar_t__ io_port; } ;
struct TYPE_3__ {scalar_t__ channel; scalar_t__ pdev; } ;
typedef TYPE_1__ hostdata ;


 TYPE_1__* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (size_t,int *) ;
 int FUNC_2 (scalar_t__) ;
 int* VAR_0 ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct Scsi_Host *VAR_1)
{
 hostdata *VAR_2 = FUNC_0(VAR_1);
 if (VAR_1->irq && VAR_0[VAR_1->irq] == 1)
  FUNC_1(VAR_1->irq, ((void*)0));
 else
  VAR_0[VAR_1->irq]--;
 if (FUNC_0(VAR_1)->channel == 0) {
  if (VAR_1->io_port && VAR_1->n_io_port)
   FUNC_3(VAR_1->io_port, VAR_1->n_io_port);
 }

 if (VAR_2->pdev)
  FUNC_2(VAR_2->pdev);
 return 1;
}
