
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int turnstile_stats_update_flags_t ;
struct turnstile {int ts_inheritor_flags; int ts_waitq; struct turnstile* ts_inheritor; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct turnstile* VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct turnstile*,struct turnstile*) ;
 int FUNC_2 (int,int,struct turnstile*) ;
 int FUNC_3 (struct turnstile*,struct turnstile*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(
 struct turnstile **VAR_6,
 int VAR_7,
 turnstile_stats_update_flags_t VAR_8)
{
 boolean_t VAR_9 = VAR_0;
 struct turnstile *VAR_10 = *VAR_6;
 struct turnstile *VAR_11 = VAR_10->ts_inheritor;
 boolean_t VAR_12 = !VAR_7;

 FUNC_0(VAR_10->ts_inheritor_flags & VAR_4);
 *VAR_6 = VAR_5;


 VAR_9 = FUNC_1(VAR_11, VAR_10);
 if (!VAR_9 && !VAR_12) {
  FUNC_2(VAR_7 + 1, VAR_2 |
   VAR_3 | VAR_8,
   VAR_10);
  FUNC_5(&VAR_10->ts_waitq);
  return;
 }

 FUNC_4(&VAR_11->ts_waitq);

 VAR_9 = FUNC_3(
  VAR_11, VAR_10);
 if (!VAR_9 && !VAR_12) {

  FUNC_2(VAR_7 + 1,
   (VAR_11->ts_inheritor ? VAR_2 : VAR_1) |
   VAR_3 | VAR_8,
   VAR_10);
  FUNC_5(&VAR_11->ts_waitq);
  FUNC_5(&VAR_10->ts_waitq);
  return;
 }


 FUNC_5(&VAR_10->ts_waitq);
 *VAR_6 = VAR_11;
 return;
}
