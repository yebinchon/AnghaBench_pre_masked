
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
typedef int pid_t ;
struct TYPE_6__ {int did_throttle; int was_throttled; } ;


 int FUNC_0 (int,int *) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(pid_t VAR_1, int VAR_2)
{
 proc_t VAR_3;
 proc_t VAR_4 = FUNC_1();


 FUNC_0(VAR_2, &(VAR_4->was_throttled));


 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 != VAR_0) {
  FUNC_0(VAR_2, &(VAR_3->did_throttle));
  FUNC_3(VAR_3);
 }
}
