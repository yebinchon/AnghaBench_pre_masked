
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cpu_ft_lock; struct TYPE_3__* cpu_next; } ;
typedef TYPE_1__ dtrace_cpu_t ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(void)
{


 FUNC_1(&VAR_3);
 FUNC_0(VAR_4 > 0);
 VAR_4--;
 if (VAR_4 == 0) {
  dtrace_cpu_t *VAR_5, *VAR_6 = VAR_0;
  for (VAR_5 = VAR_6->cpu_next; VAR_5 != VAR_6; VAR_5 = VAR_5->cpu_next) {
   FUNC_3(&VAR_5->cpu_ft_lock);

  }

  VAR_1 = ((void*)0);
  VAR_2 = ((void*)0);

  for (VAR_5 = VAR_6->cpu_next; VAR_5 != VAR_6; VAR_5 = VAR_5->cpu_next) {
   FUNC_4(&VAR_5->cpu_ft_lock);

  }
 }
 FUNC_2(&VAR_3);
}
