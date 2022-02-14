
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef TYPE_2__* task_t ;
typedef TYPE_3__* coalition_t ;
struct TYPE_9__ {int gpu_time; } ;
struct TYPE_11__ {TYPE_1__ r; } ;
struct TYPE_10__ {TYPE_3__** coalition; } ;


 TYPE_3__* VAR_0 ;
 size_t VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;

void FUNC_3(task_t VAR_3, uint64_t VAR_4)
{
 coalition_t VAR_5;

 FUNC_0(VAR_3 != VAR_2);
 if (VAR_4 == 0)
  return;

 VAR_5 = VAR_3->coalition[VAR_1];
 FUNC_0(VAR_5 != VAR_0);

 FUNC_1(VAR_5);
 VAR_5->r.gpu_time += VAR_4;
 FUNC_2(VAR_5);
}
