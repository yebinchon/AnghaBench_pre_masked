
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
struct task_pend_token {int dummy; } ;
typedef int kern_return_t ;
typedef int integer_t ;
struct TYPE_10__ {int importance; int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,struct task_pend_token*) ;
 int FUNC_3 (TYPE_1__*,struct task_pend_token*) ;
 int FUNC_4 (TYPE_1__*) ;

kern_return_t
FUNC_5(
 task_t VAR_7,
 integer_t VAR_8)
{
 if (VAR_7 == VAR_4 || VAR_7 == VAR_6)
  return (VAR_0);

 FUNC_1(VAR_7);

 if (!VAR_7->active) {
  FUNC_4(VAR_7);

  return (VAR_2);
 }

 if (FUNC_0(VAR_7, VAR_5) >= VAR_3) {
  FUNC_4(VAR_7);

  return (VAR_0);
 }

 VAR_7->importance = VAR_8;

 struct task_pend_token VAR_9 = {};

 FUNC_3(VAR_7, &VAR_9);

 FUNC_4(VAR_7);

 FUNC_2(VAR_7, &VAR_9);

 return (VAR_1);
}
