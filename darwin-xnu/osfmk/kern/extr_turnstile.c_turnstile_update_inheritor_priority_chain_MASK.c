
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int turnstile_update_flags_t ;
typedef int turnstile_stats_update_flags_t ;
typedef struct turnstile* turnstile_inheritor_t ;
typedef scalar_t__ thread_t ;
struct turnstile {int ts_inheritor_flags; int ts_waitq; int * ts_inheritor; } ;
typedef int spl_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct turnstile* VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__*,struct turnstile**,int,int,int) ;
 int FUNC_7 (struct turnstile*) ;
 int FUNC_8 (struct turnstile*) ;
 int FUNC_9 (int,int,struct turnstile*) ;
 int FUNC_10 (struct turnstile**,scalar_t__*,int,int) ;
 int FUNC_11 (struct turnstile**,int,int) ;
 int FUNC_12 (struct turnstile*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void
FUNC_15(
 turnstile_inheritor_t VAR_12,
 turnstile_update_flags_t VAR_13)
{
 struct turnstile *VAR_14 = VAR_10;
 thread_t VAR_15 = VAR_0;
 int VAR_16 = 0, VAR_17 = 0;
 spl_t VAR_18;
 turnstile_stats_update_flags_t VAR_19 = ((VAR_13 & VAR_11) ?
  VAR_1 : VAR_2) | VAR_5;

 if (VAR_12 == ((void*)0)) {
  return;
 }

 VAR_18 = FUNC_2();

 if (VAR_13 & VAR_7) {
  VAR_15 = VAR_12;
  FUNC_4(VAR_15);

  FUNC_5(VAR_15);
 } else if (VAR_13 & VAR_8) {
  VAR_14 = VAR_12;
  FUNC_13(&VAR_14->ts_waitq);
  FUNC_8(VAR_14);
  VAR_19 |= FUNC_7(VAR_14);
 } else {




  FUNC_0((VAR_13 & VAR_9) == 0);
 }

 while (VAR_14 != VAR_10 || VAR_15 != VAR_0) {
  if (VAR_14 != VAR_10) {
   if (VAR_14->ts_inheritor == ((void*)0)) {
    FUNC_9(VAR_16 + 1, VAR_3 |
     VAR_6 | VAR_19,
     VAR_14);
    FUNC_14(&VAR_14->ts_waitq);
    VAR_14 = VAR_10;
    break;
   }
   if (VAR_14->ts_inheritor_flags & VAR_7) {
    FUNC_10(&VAR_14, &VAR_15,
     VAR_16, VAR_19);

   } else if (VAR_14->ts_inheritor_flags & VAR_8) {
    FUNC_11(&VAR_14,
     VAR_16, VAR_19);

   } else if (VAR_14->ts_inheritor_flags & VAR_9) {
    FUNC_12(VAR_14, VAR_18);
    FUNC_9(VAR_16 + 1, VAR_4 | VAR_19,
     ((void*)0));
    return;

   } else {
    FUNC_1("Inheritor flags not passed in turnstile_update_inheritor");
   }
  } else if (VAR_15 != VAR_0) {
   FUNC_6(&VAR_15, &VAR_14,
     VAR_17, VAR_16, VAR_19);
   VAR_17++;
  }
  VAR_16++;
 }

 FUNC_3(VAR_18);
 return;
}
