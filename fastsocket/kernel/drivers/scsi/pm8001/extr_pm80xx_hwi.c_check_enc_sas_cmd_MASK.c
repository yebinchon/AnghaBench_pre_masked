
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* cdb; } ;
struct sas_task {TYPE_1__ ssp_task; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct sas_task *VAR_3)
{
 if ((VAR_3->ssp_task.cdb[0] == VAR_0)
  || (VAR_3->ssp_task.cdb[0] == VAR_1)
  || (VAR_3->ssp_task.cdb[0] == VAR_2))
  return 1;
 else
  return 0;
}
