
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct turnstile {int dummy; } ;
struct knote {struct turnstile* kn_hook; scalar_t__* kn_ext; } ;
typedef TYPE_1__* ipc_port_t ;
typedef TYPE_2__* ipc_mqueue_t ;
struct TYPE_13__ {int imq_klist; } ;
struct TYPE_12__ {scalar_t__ ip_sync_link_state; struct knote* ip_sync_inheritor_knote; scalar_t__ ip_specialreply; TYPE_2__ ip_messages; } ;


 int VAR_0 ;
 struct turnstile* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct turnstile* VAR_8 ;
 int FUNC_2 (struct turnstile*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int *,int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct knote*) ;
 struct turnstile* FUNC_11 (int ) ;
 struct turnstile* FUNC_12 (TYPE_1__*) ;
 int FUNC_13 () ;
 int FUNC_14 (uintptr_t,struct turnstile**,struct turnstile**) ;
 int FUNC_15 (struct turnstile*) ;
 int FUNC_16 (struct turnstile*) ;
 int FUNC_17 (struct turnstile*) ;
 int FUNC_18 (struct turnstile*,int ,int ) ;
 int FUNC_19 (struct turnstile*,int ) ;

__attribute__((used)) static void
FUNC_20(struct knote *VAR_9)
{
 struct turnstile *VAR_10 = VAR_8;

 if (VAR_9->kn_ext[3]) {
  ipc_port_t VAR_11 = (ipc_port_t)VAR_9->kn_ext[3];
  ipc_mqueue_t VAR_12 = &VAR_11->ip_messages;

  FUNC_5(VAR_11);
  if (VAR_11->ip_specialreply) {
   if (VAR_11->ip_sync_link_state == VAR_3 &&
     VAR_11->ip_sync_inheritor_knote == VAR_9) {
    FUNC_8(VAR_11, ((void*)0),
      (VAR_2 | VAR_1), VAR_0);
   } else {
    FUNC_7(VAR_11);
   }
  } else {
   struct turnstile *VAR_13 = FUNC_11(FUNC_10(VAR_9));
   FUNC_3(VAR_12);
   if (!FUNC_1(VAR_12) && FUNC_0(VAR_12) == VAR_13) {
    FUNC_16(VAR_13);
    FUNC_9(&VAR_12->imq_klist);
    VAR_10 = FUNC_12(VAR_11);
   }
   if (VAR_10) {
    FUNC_18(VAR_10, VAR_5,
      VAR_4);
    FUNC_17(VAR_10);
   }
   FUNC_4(VAR_12);
   FUNC_7(VAR_11);

   if (VAR_10) {
    FUNC_19(VAR_10, VAR_7);
    FUNC_15(VAR_10);
   }
  }

  FUNC_6(VAR_11);
  VAR_9->kn_ext[3] = 0;
 }

 if (VAR_9->kn_hook) {
  VAR_10 = VAR_9->kn_hook;

  FUNC_18(VAR_10, VAR_5,
    VAR_4);
  FUNC_19(VAR_10, VAR_6);

  FUNC_14((uintptr_t)VAR_9, (struct turnstile **)&VAR_9->kn_hook, &VAR_10);
  FUNC_13();

  FUNC_2(VAR_10);
  FUNC_15(VAR_10);
 }
}
