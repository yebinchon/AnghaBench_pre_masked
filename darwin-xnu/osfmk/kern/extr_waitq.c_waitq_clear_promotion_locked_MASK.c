
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct waitq {int dummy; } ;
typedef int spl_t ;
struct TYPE_8__ {int sched_flags; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct waitq*) ;
 int FUNC_8 (struct waitq*) ;

void FUNC_9(struct waitq *VAR_2, thread_t VAR_3)
{
 spl_t VAR_4;

 FUNC_0(FUNC_7(VAR_2));
 FUNC_0(VAR_3 != VAR_0);
 FUNC_0(VAR_3 == FUNC_1());


 if ((VAR_3->sched_flags & VAR_1) != VAR_1)
  return;

 if (!FUNC_8(VAR_2))
  VAR_4 = FUNC_3();
 FUNC_5(VAR_3);

 FUNC_2(VAR_3, VAR_1, 0);

 FUNC_6(VAR_3);
 if (!FUNC_8(VAR_2))
  FUNC_4(VAR_4);
}
