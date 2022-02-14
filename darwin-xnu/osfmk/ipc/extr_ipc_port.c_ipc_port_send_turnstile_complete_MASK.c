
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct turnstile {int dummy; } ;
typedef TYPE_1__* ipc_port_t ;
struct TYPE_7__ {scalar_t__ ts_port_ref; } ;
struct TYPE_6__ {int ip_messages; } ;


 struct turnstile* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 int FUNC_6 (uintptr_t,int ,struct turnstile**) ;
 int FUNC_7 (struct turnstile*) ;

void
FUNC_8(ipc_port_t VAR_1)
{
 struct turnstile *VAR_2 = VAR_0;


 FUNC_1(&VAR_1->ip_messages);

 FUNC_3(VAR_1)->ts_port_ref--;
 if (FUNC_3(VAR_1)->ts_port_ref == 0) {
  FUNC_6((uintptr_t)VAR_1, FUNC_4(VAR_1),
    &VAR_2);
  FUNC_0(VAR_2 != VAR_0);
 }
 FUNC_2(&VAR_1->ip_messages);
 FUNC_5();

 if (VAR_2 != VAR_0) {
  FUNC_7(VAR_2);
  VAR_2 = VAR_0;
 }
}
