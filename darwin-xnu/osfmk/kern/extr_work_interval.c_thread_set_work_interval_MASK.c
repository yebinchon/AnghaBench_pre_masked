
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct work_interval {int dummy; } ;
struct TYPE_4__ {struct work_interval* th_work_interval; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (struct work_interval*) ;

__attribute__((used)) static void
FUNC_3(thread_t VAR_0,
                         struct work_interval *VAR_1)
{
 FUNC_0(VAR_0 == FUNC_1());

 struct work_interval *VAR_2 = VAR_0->th_work_interval;


 VAR_0->th_work_interval = VAR_1;


 if (VAR_2 != ((void*)0))
  FUNC_2(VAR_2);
}
