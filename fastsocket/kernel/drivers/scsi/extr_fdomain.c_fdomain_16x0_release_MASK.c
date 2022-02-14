
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {scalar_t__ n_io_port; scalar_t__ io_port; scalar_t__ irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,struct Scsi_Host*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct Scsi_Host *VAR_2)
{
 if (VAR_2->irq)
  FUNC_0(VAR_2->irq, VAR_2);
 if (VAR_2->io_port && VAR_2->n_io_port)
  FUNC_2(VAR_2->io_port, VAR_2->n_io_port);
 if (VAR_0)
  FUNC_1(VAR_1);
 return 0;
}
