
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int spl_t ;
typedef int kern_return_t ;
struct TYPE_6__ {int sched_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

kern_return_t
FUNC_6(thread_t VAR_3)
{
 kern_return_t VAR_4 = VAR_0;

 spl_t VAR_5 = FUNC_1();
 FUNC_4(VAR_3);

 FUNC_0((VAR_3->sched_flags & VAR_1) != VAR_1);





 if ((VAR_3->sched_flags & VAR_2) == 0) {
  VAR_4 = FUNC_3(VAR_3);
 }

 FUNC_5(VAR_3);
 FUNC_2(VAR_5);

 return VAR_4;
}
