
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef struct turnstile* turnstile_inheritor_t ;
struct turnstile {int dummy; } ;
struct knote {int dummy; } ;
typedef TYPE_1__* ipc_port_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_12__ {scalar_t__ ip_specialreply; int ip_sync_link_state; int ip_messages; struct turnstile* ip_sync_inheritor_ts; struct knote* ip_sync_inheritor_knote; struct TYPE_12__* ip_sync_inheritor_port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ FUNC_0 (struct knote*,int ) ;
 int VAR_7 ;
 int VAR_8 ;




 int VAR_9 ;
 struct turnstile* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct turnstile* VAR_13 ;
 int FUNC_1 (int) ;
 struct turnstile* FUNC_2 (struct knote*,TYPE_1__*,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 struct turnstile* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 () ;
 int FUNC_14 (uintptr_t,int ,int *) ;
 int FUNC_15 (struct turnstile*) ;
 int FUNC_16 (struct turnstile*) ;
 int FUNC_17 (struct turnstile*,struct turnstile*,int) ;
 int FUNC_18 (struct turnstile*,int ) ;

void
FUNC_19(
 ipc_port_t VAR_14,
 struct knote *VAR_15,
 uint8_t VAR_16,
 boolean_t VAR_17)
{
 ipc_port_t VAR_18 = VAR_6;
 int VAR_19 = 131;
 turnstile_inheritor_t VAR_20 = VAR_10;
 struct turnstile *VAR_21 = VAR_13, *VAR_22 = VAR_13;

 FUNC_3(&VAR_14->ip_messages);

 if (VAR_16 & VAR_5) {
  FUNC_11(VAR_14);
 }


 if (VAR_14->ip_specialreply == 0 ||
   VAR_14->ip_sync_link_state == VAR_8) {
  if (VAR_17) {
   FUNC_14((uintptr_t)VAR_14,
    FUNC_9(VAR_14),
   ((void*)0));
  }
  FUNC_4(&VAR_14->ip_messages);
  FUNC_6(VAR_14);
  if (VAR_17) {
   FUNC_13();
  }
  return;
 }


 if (VAR_16 & VAR_2) {

  FUNC_1(VAR_17 == VAR_0);
  VAR_14->ip_specialreply = 0;

  FUNC_10(VAR_14);


  if (VAR_14->ip_sync_link_state == 131) {
   FUNC_4(&VAR_14->ip_messages);
   FUNC_6(VAR_14);
   return;
  }
 } else if (VAR_16 & VAR_4) {
  if (VAR_14->ip_sync_link_state == VAR_8 ||
      VAR_14->ip_sync_link_state == 130) {
   if (FUNC_0(VAR_15, VAR_7)) {
    VAR_20 = FUNC_2(VAR_15, VAR_14,
      &VAR_19);
   }
  }
 } else if (VAR_16 & VAR_1) {
  VAR_19 = VAR_8;
 }

 switch (VAR_14->ip_sync_link_state) {
 case 130:
  VAR_18 = VAR_14->ip_sync_inheritor_port;
  VAR_14->ip_sync_inheritor_port = VAR_6;
  break;
 case 129:
  VAR_14->ip_sync_inheritor_knote = ((void*)0);
  break;
 case 128:
  VAR_21 = VAR_14->ip_sync_inheritor_ts;
  VAR_14->ip_sync_inheritor_ts = ((void*)0);
  break;
 }

 VAR_14->ip_sync_link_state = VAR_19;

 switch (VAR_19) {
 case 129:
  VAR_14->ip_sync_inheritor_knote = VAR_15;
  break;
 case 128:
  FUNC_16(VAR_20);
  VAR_14->ip_sync_inheritor_ts = VAR_20;
  break;
 case 131:
  if (VAR_16 & VAR_3) {
   FUNC_12(VAR_14);
  }
  break;
 }


 if (VAR_17) {
  FUNC_14((uintptr_t)VAR_14,
   FUNC_9(VAR_14),
   ((void*)0));
 } else {
  VAR_22 = FUNC_7(VAR_14);
  if (VAR_22) {
   FUNC_16(VAR_22);
   FUNC_17(VAR_22, VAR_20,
     (VAR_11 | VAR_9));
  }
 }

 FUNC_4(&VAR_14->ip_messages);
 FUNC_6(VAR_14);

 if (VAR_17) {
  FUNC_13();
 } else if (VAR_22) {

  FUNC_18(VAR_22, VAR_12);
  FUNC_15(VAR_22);
 }


 if (VAR_18) {
  FUNC_8(VAR_18);

  FUNC_5(VAR_18);
 }

 if (VAR_21) {
  FUNC_15(VAR_21);
 }
}
