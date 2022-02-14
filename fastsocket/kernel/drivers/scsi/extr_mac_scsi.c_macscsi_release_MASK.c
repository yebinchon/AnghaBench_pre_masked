
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {scalar_t__ irq; } ;


 int FUNC_0 (struct Scsi_Host*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,struct Scsi_Host*) ;

int FUNC_2 (struct Scsi_Host *VAR_1)
{
 if (VAR_1->irq != VAR_0)
  FUNC_1(VAR_1->irq, VAR_1);
 FUNC_0(VAR_1);

 return 0;
}
