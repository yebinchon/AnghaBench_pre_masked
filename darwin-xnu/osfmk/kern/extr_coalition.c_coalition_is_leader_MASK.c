
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* task_t ;
typedef TYPE_3__* coalition_t ;
typedef int boolean_t ;
struct TYPE_9__ {TYPE_2__* leader; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_1__ j; } ;
struct TYPE_10__ {TYPE_3__** coalition; } ;


 TYPE_3__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;

boolean_t FUNC_3(task_t VAR_5, int VAR_6, coalition_t *VAR_7)
{
 coalition_t VAR_8;
 boolean_t VAR_9;

 if (VAR_7)
  *VAR_7 = VAR_0;

 if (!VAR_5)
  return VAR_3;

 if (VAR_6 > VAR_2)
  return VAR_3;

 VAR_8 = VAR_5->coalition[VAR_6];
 if (!VAR_8)
  return VAR_3;

 FUNC_0((int)VAR_8->type == VAR_6);

 FUNC_1(VAR_8);

 if (VAR_7)
  *VAR_7 = VAR_8;

 VAR_9 = VAR_3;
 if (VAR_8->type == VAR_1 && VAR_8->j.leader == VAR_5)
  VAR_9 = VAR_4;

 FUNC_2(VAR_8);

 return VAR_9;
}
