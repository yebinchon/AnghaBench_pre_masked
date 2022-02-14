
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {scalar_t__ shost_state; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct Scsi_Host *VAR_1)
{
 if (VAR_1->shost_state == VAR_0)
  return 1;
 return 0;
}
