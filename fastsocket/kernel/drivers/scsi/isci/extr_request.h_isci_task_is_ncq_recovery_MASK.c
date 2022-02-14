
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ command; scalar_t__ lbal; } ;
struct TYPE_4__ {TYPE_1__ fis; } ;
struct sas_task {TYPE_2__ ata_task; int task_proto; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct sas_task *VAR_2)
{
 return (FUNC_0(VAR_2->task_proto) &&
  VAR_2->ata_task.fis.command == VAR_0 &&
  VAR_2->ata_task.fis.lbal == VAR_1);

}
