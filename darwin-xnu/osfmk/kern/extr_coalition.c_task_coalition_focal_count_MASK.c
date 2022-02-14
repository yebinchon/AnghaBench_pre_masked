
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* task_t ;
typedef TYPE_2__* coalition_t ;
struct TYPE_6__ {int focal_task_count; } ;
struct TYPE_5__ {TYPE_2__** coalition; } ;


 size_t VAR_0 ;
 TYPE_2__* VAR_1 ;

uint32_t FUNC_0(task_t VAR_2)
{
 coalition_t VAR_3 = VAR_2->coalition[VAR_0];
 if (VAR_3 == VAR_1)
     return 0;

 return VAR_3->focal_task_count;
}
