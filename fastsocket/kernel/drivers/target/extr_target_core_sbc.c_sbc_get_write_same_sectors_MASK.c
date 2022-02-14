
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct se_cmd {scalar_t__* t_task_cdb; scalar_t__ t_task_lba; TYPE_2__* se_dev; } ;
typedef scalar_t__ sector_t ;
struct TYPE_4__ {TYPE_1__* transport; } ;
struct TYPE_3__ {scalar_t__ (* get_blocks ) (TYPE_2__*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

sector_t FUNC_3(struct se_cmd *VAR_2)
{
 u32 VAR_3;

 if (VAR_2->t_task_cdb[0] == VAR_0)
  VAR_3 = FUNC_0(&VAR_2->t_task_cdb[7]);
 else if (VAR_2->t_task_cdb[0] == VAR_1)
  VAR_3 = FUNC_1(&VAR_2->t_task_cdb[10]);
 else
  VAR_3 = FUNC_1(&VAR_2->t_task_cdb[28]);





 if (VAR_3)
  return VAR_3;

 return VAR_2->se_dev->transport->get_blocks(VAR_2->se_dev) -
  VAR_2->t_task_lba + 1;
}
