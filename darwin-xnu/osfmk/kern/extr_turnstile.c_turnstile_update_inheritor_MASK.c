
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int turnstile_update_flags_t ;
typedef scalar_t__ turnstile_inheritor_t ;
typedef TYPE_1__* thread_t ;
struct workqueue {int dummy; } ;
struct turnstile {int ts_waitq; } ;
typedef int spl_t ;
struct TYPE_4__ {scalar_t__ inheritor; int inheritor_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (char*,int,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct turnstile*) ;
 int FUNC_7 (struct turnstile*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct workqueue*) ;

void
FUNC_11(
 struct turnstile *VAR_6,
 turnstile_inheritor_t VAR_7,
 turnstile_update_flags_t VAR_8)
{
 thread_t VAR_9 = FUNC_1();
 spl_t VAR_10;






 FUNC_0(VAR_9->inheritor == VAR_1);
 VAR_9->inheritor = VAR_7;
 VAR_9->inheritor_flags = VAR_5;
 if (VAR_7 == VAR_1) {

 } else if (VAR_8 & VAR_2) {
  VAR_9->inheritor_flags |= VAR_2;
  FUNC_5((thread_t)VAR_7);
 } else if (VAR_8 & VAR_3) {
  VAR_9->inheritor_flags |= VAR_3;
  FUNC_6((struct turnstile *)VAR_7);
 } else if (VAR_8 & VAR_4) {
  VAR_9->inheritor_flags |= VAR_4;
  FUNC_10((struct workqueue *)VAR_7);
 } else {
  FUNC_2("Missing type in flags (%x) for inheritor (%p)", VAR_8,
    VAR_7);
 }


 if (VAR_8 & VAR_0) {
  return;
 }


 VAR_10 = FUNC_3();
 FUNC_8(&VAR_6->ts_waitq);

 FUNC_7(VAR_6);

 FUNC_9(&VAR_6->ts_waitq);
 FUNC_4(VAR_10);

 return;
}
