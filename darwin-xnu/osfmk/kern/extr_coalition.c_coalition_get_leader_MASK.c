
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ task_t ;
typedef TYPE_2__* coalition_t ;
struct TYPE_6__ {scalar_t__ leader; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__ j; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__) ;

task_t FUNC_3(coalition_t VAR_2)
{
 task_t VAR_3 = VAR_1;

 if (!VAR_2)
  return VAR_1;

 FUNC_0(VAR_2);
 if (VAR_2->type != VAR_0)
  goto out_unlock;

 VAR_3 = VAR_2->j.leader;
 if (VAR_3 != VAR_1)
  FUNC_2(VAR_3);

out_unlock:
 FUNC_1(VAR_2);
 return VAR_3;
}
