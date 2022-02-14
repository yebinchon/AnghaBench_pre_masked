
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {scalar_t__ irq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,struct Scsi_Host*) ;
 int FUNC_1 (void*) ;
 scalar_t__ VAR_1 ;

int FUNC_2 (struct Scsi_Host *VAR_2)
{
 if (VAR_2->irq != VAR_0)
  FUNC_0(VAR_2->irq, VAR_2);

 FUNC_1((void *)VAR_1);

 return 0;
}
