
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ task_t ;
typedef int spl_t ;
typedef TYPE_1__* semaphore_t ;
typedef int kern_return_t ;
struct TYPE_8__ {scalar_t__ owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

kern_return_t
FUNC_8(
 task_t VAR_4,
 semaphore_t VAR_5)
{
 spl_t VAR_6;

 if (VAR_5 == VAR_2)
  return VAR_0;

 if (VAR_4 == VAR_3) {
  FUNC_0(VAR_5);
  return VAR_0;
 }

 FUNC_6(VAR_4);
 VAR_6 = FUNC_4();
 FUNC_2(VAR_5);

 if (VAR_5->owner != VAR_4) {
  FUNC_3(VAR_5);
  FUNC_0(VAR_5);
  FUNC_5(VAR_6);
  FUNC_7(VAR_4);
  return VAR_0;
 }

 FUNC_1(VAR_4, VAR_5);


 FUNC_5(VAR_6);
 FUNC_7(VAR_4);

 FUNC_0(VAR_5);
 return VAR_1;
}
