
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waitq {int dummy; } ;
struct turnstile {struct waitq ts_waitq; } ;
typedef int ipc_port_t ;
typedef int ipc_mqueue_t ;


 struct turnstile* VAR_0 ;
 struct waitq* FUNC_0 (struct waitq*) ;
 int FUNC_1 (struct waitq*) ;
 int FUNC_2 (int ) ;
 struct turnstile* FUNC_3 (int ) ;

struct waitq *
FUNC_4(struct waitq *VAR_1)
{
 struct waitq *VAR_2;

 ipc_mqueue_t VAR_3 = FUNC_1(VAR_1);
 ipc_port_t VAR_4 = FUNC_2(VAR_3);
 struct turnstile *VAR_5 = FUNC_3(VAR_4);


 if (VAR_5 != VAR_0) {
  VAR_2 = &VAR_5->ts_waitq;
 } else {
  VAR_2 = FUNC_0(VAR_1);
 }
 return VAR_2;
}
