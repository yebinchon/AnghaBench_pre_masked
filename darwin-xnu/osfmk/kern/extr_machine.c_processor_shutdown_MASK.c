
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int spl_t ;
typedef TYPE_1__* processor_t ;
typedef int processor_set_t ;
typedef int kern_return_t ;
struct TYPE_5__ {scalar_t__ state; int cpu_id; int processor_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_1__*,scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;

kern_return_t
FUNC_8(
 processor_t VAR_6)
{
 processor_set_t VAR_7;
 spl_t VAR_8;

 VAR_8 = FUNC_6();
 VAR_7 = VAR_6->processor_set;
 FUNC_3(VAR_7);
 if (VAR_6->state == VAR_3) {



  FUNC_4(VAR_7);
  FUNC_7(VAR_8);

  return (VAR_1);
 }

 if (VAR_6->state == VAR_5) {



  FUNC_4(VAR_7);
  FUNC_7(VAR_8);

  return (VAR_0);
 }




 while (VAR_6->state == VAR_2) {
  FUNC_4(VAR_7);
  FUNC_7(VAR_8);
  FUNC_1(1);
  VAR_8 = FUNC_6();
  FUNC_3(VAR_7);
 }




 if (VAR_6->state == VAR_4) {
  FUNC_4(VAR_7);
  FUNC_7(VAR_8);

  return (VAR_1);
 }

 FUNC_5(VAR_7, VAR_6, VAR_4);

 FUNC_4(VAR_7);

 FUNC_2(VAR_6);
 FUNC_7(VAR_8);

 FUNC_0(VAR_6->cpu_id);

 return (VAR_1);
}
