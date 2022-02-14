
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int turnstile_update_flags_t ;
typedef scalar_t__ turnstile_inheritor_t ;
typedef TYPE_1__* thread_t ;
struct workqueue {int dummy; } ;
struct turnstile {int dummy; } ;
struct TYPE_3__ {scalar_t__ inheritor; int inheritor_flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct turnstile*) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (struct workqueue*) ;

void
FUNC_6(void)
{
 thread_t VAR_7 = FUNC_0();


 turnstile_inheritor_t VAR_8 = VAR_7->inheritor;
 turnstile_update_flags_t VAR_9 = VAR_7->inheritor_flags;
 VAR_7->inheritor = VAR_0;
 VAR_7->inheritor_flags = VAR_6;

 if (VAR_8 == VAR_2) {

  return;
 }


 if (VAR_9 & VAR_1) {
  FUNC_4(VAR_8,
   VAR_9);
 }


 if (VAR_9 & VAR_3) {
  FUNC_2(VAR_8);
 } else if (VAR_9 & VAR_4) {
  FUNC_3((struct turnstile *)VAR_8);
 } else if (VAR_9 & VAR_5) {
  FUNC_5((struct workqueue *)VAR_8);
 } else {
  FUNC_1("Inheritor flags lost along the way");
 }
}
