
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct turnstile {scalar_t__ ts_port_ref; } ;
typedef TYPE_1__* ipc_port_t ;
struct TYPE_8__ {scalar_t__ ip_receiver_name; int ip_messages; struct TYPE_8__* ip_destination; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct turnstile* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 struct turnstile* FUNC_4 (TYPE_1__*) ;
 struct turnstile* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 struct turnstile* FUNC_7 () ;
 int FUNC_8 (struct turnstile*) ;
 struct turnstile* FUNC_9 (uintptr_t,int ,struct turnstile*,int ) ;
 int FUNC_10 (struct turnstile*,struct turnstile*,int) ;
 int FUNC_11 (struct turnstile*,int ) ;

void
FUNC_12(ipc_port_t VAR_7)
{
 struct turnstile *VAR_8 = VAR_5;
 struct turnstile *VAR_9 = VAR_5;
 struct turnstile *VAR_10 = VAR_5;

retry_alloc:
 FUNC_1(&VAR_7->ip_messages);

 if (FUNC_5(VAR_7) == ((void*)0) ||
     FUNC_5(VAR_7)->ts_port_ref == 0) {

  if (VAR_8 == VAR_5) {
   FUNC_2(&VAR_7->ip_messages);
   VAR_8 = FUNC_7();
   goto retry_alloc;
  }

  VAR_10 = FUNC_9((uintptr_t)VAR_7,
   FUNC_6(VAR_7),
   VAR_8, VAR_6);
  VAR_8 = VAR_5;





  if (FUNC_3(VAR_7) &&
      VAR_7->ip_receiver_name == VAR_1 &&
      VAR_7->ip_destination != VAR_0) {
   FUNC_0(VAR_7->ip_receiver_name == VAR_1);
   FUNC_0(VAR_7->ip_destination != VAR_0);

   VAR_9 = FUNC_5(VAR_7->ip_destination);
  } else {
   VAR_9 = FUNC_4(VAR_7);
  }
  FUNC_10(VAR_10, VAR_9,
   VAR_3 | VAR_2);

 }


 FUNC_5(VAR_7)->ts_port_ref++;
 FUNC_2(&VAR_7->ip_messages);

 if (VAR_10) {
  FUNC_11(VAR_10,
   VAR_4);
 }
 if (VAR_8 != VAR_5) {
  FUNC_8(VAR_8);
 }
}
