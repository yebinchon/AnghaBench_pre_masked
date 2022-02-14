
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* task_t ;
typedef TYPE_2__* coalition_t ;
typedef int boolean_t ;
struct TYPE_6__ {int nonfocal_task_count; } ;
struct TYPE_5__ {TYPE_2__** coalition; } ;


 size_t VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;

boolean_t FUNC_2(task_t VAR_5, int VAR_6, uint32_t *VAR_7)
{
 coalition_t VAR_8 = VAR_5->coalition[VAR_0];
 if (VAR_8 == VAR_1)
     return VAR_2;

 *VAR_7 = FUNC_1(&VAR_8->nonfocal_task_count, VAR_6);
 FUNC_0(*VAR_7 != VAR_4);
 return VAR_3;
}
