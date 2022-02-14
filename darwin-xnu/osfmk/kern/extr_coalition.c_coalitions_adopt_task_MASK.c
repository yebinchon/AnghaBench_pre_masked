
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef TYPE_1__* task_t ;
typedef scalar_t__ kern_return_t ;
typedef TYPE_2__* coalition_t ;
struct TYPE_10__ {scalar_t__ type; } ;
struct TYPE_9__ {scalar_t__* coalition; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;

kern_return_t
FUNC_2(coalition_t *VAR_5, task_t VAR_6)
{
 int VAR_7;
 kern_return_t VAR_8;

 if (!VAR_5 || VAR_5[VAR_2] == VAR_0)
  return VAR_3;


 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  if (VAR_5[VAR_7] && VAR_5[VAR_7]->type != (uint32_t)VAR_7)
   return VAR_3;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_8 = VAR_4;
  if (VAR_5[VAR_7])
   VAR_8 = FUNC_0(VAR_5[VAR_7], VAR_6);
  if (VAR_8 != VAR_4) {

   while (--VAR_7 >= 0) {
    if (VAR_6->coalition[VAR_7])
     FUNC_1(VAR_6, VAR_7);
   }
   break;
  }
 }
 return VAR_8;
}
