
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* proc_t ;
typedef int caddr_t ;
struct TYPE_5__ {scalar_t__ p_stat; int task; int p_flag; } ;


 int FUNC_0 (int ,int *) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(proc_t VAR_3, proc_t VAR_4)
{
 FUNC_0(~((uint32_t)VAR_1), &VAR_3->p_flag);
 if ((VAR_4 != VAR_0) && (VAR_4->p_stat != VAR_2)) {
  FUNC_1();
  FUNC_4((caddr_t)VAR_4);
  FUNC_2();
 }
 (void) FUNC_3(VAR_3->task);
}
