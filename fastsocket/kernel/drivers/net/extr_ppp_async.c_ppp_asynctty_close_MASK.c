
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct asyncppp* disc_data; } ;
struct asyncppp {int tpkt; int rqueue; int rpkt; int chan; int tsk; int dead_sem; int refcnt; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct asyncppp*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct tty_struct *VAR_1)
{
 struct asyncppp *VAR_2;

 FUNC_7(&VAR_0);
 VAR_2 = VAR_1->disc_data;
 VAR_1->disc_data = ((void*)0);
 FUNC_8(&VAR_0);
 if (!VAR_2)
  return;
 if (!FUNC_0(&VAR_2->refcnt))
  FUNC_1(&VAR_2->dead_sem);
 FUNC_6(&VAR_2->tsk);

 FUNC_4(&VAR_2->chan);
 FUNC_3(VAR_2->rpkt);
 FUNC_5(&VAR_2->rqueue);
 FUNC_3(VAR_2->tpkt);
 FUNC_2(VAR_2);
}
