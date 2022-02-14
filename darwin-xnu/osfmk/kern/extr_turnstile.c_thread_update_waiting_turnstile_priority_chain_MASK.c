
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int turnstile_stats_update_flags_t ;
typedef int thread_t ;
struct turnstile {int ts_waitq; scalar_t__ ts_inheritor; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,int,int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int VAR_9 ;
 struct turnstile* VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct turnstile*) ;
 int FUNC_3 (int ) ;
 struct turnstile* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct turnstile*) ;
 scalar_t__ FUNC_10 (struct turnstile*) ;
 int VAR_12 ;
 int FUNC_11 (struct turnstile*,int ) ;
 int FUNC_12 (struct turnstile*) ;
 int FUNC_13 (int,int,int ) ;
 int FUNC_14 (struct turnstile*,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void
FUNC_17(
 thread_t *VAR_13,
 struct turnstile **VAR_14,
 int VAR_15,
 int VAR_16,
 turnstile_stats_update_flags_t VAR_17)
{
 boolean_t VAR_18 = VAR_1;
 thread_t VAR_19 = *VAR_13;
 struct turnstile *VAR_20 = VAR_10;
 uint32_t VAR_21;
 boolean_t VAR_22 = !VAR_16;

 *VAR_13 = VAR_4;


 VAR_20 = FUNC_4(VAR_19);

 if (VAR_20 == VAR_10 || VAR_15 > VAR_12) {
  FUNC_0(VAR_2,
   (FUNC_1(VAR_9,
    (VAR_20 ? VAR_11 : VAR_3)
   )) | VAR_0,
   FUNC_7(VAR_19),
   VAR_12,
   VAR_15,
   FUNC_2(VAR_20), 0);
  FUNC_13(VAR_16 + 1, VAR_7 |
   VAR_8 | VAR_17, VAR_19);
  FUNC_8(VAR_19);
  return;
 }


 VAR_18 = FUNC_11(VAR_20, VAR_19);
 if (!VAR_18 && !VAR_22) {
  FUNC_13(VAR_16 + 1, VAR_6 |
   VAR_8 | VAR_17, VAR_19);
  FUNC_8(VAR_19);
  return;
 }


 VAR_21 = FUNC_10(VAR_20);
 FUNC_12(VAR_20);
 FUNC_6(VAR_19);


 FUNC_8(VAR_19);
 FUNC_15(&VAR_20->ts_waitq);
 FUNC_5(VAR_19);


 if (VAR_21 != FUNC_10(VAR_20) ||
     VAR_20 != FUNC_4(VAR_19)) {
  FUNC_13(VAR_16 + 1, VAR_6 |
   VAR_8 | VAR_17, VAR_19);

  FUNC_8(VAR_19);
  FUNC_16(&VAR_20->ts_waitq);
  FUNC_3(VAR_19);
  FUNC_9(VAR_20);
  return;
 }






 FUNC_3(VAR_19);
 FUNC_9(VAR_20);


 VAR_18 = FUNC_14(VAR_20, VAR_19);
 if (!VAR_18 && !VAR_22) {
  FUNC_13(VAR_16 + 1,
   (VAR_20->ts_inheritor ? VAR_6 : VAR_5) |
   VAR_8 | VAR_17, VAR_19);
  FUNC_8(VAR_19);
  FUNC_16(&VAR_20->ts_waitq);
  return;
 }


 FUNC_8(VAR_19);
 *VAR_14 = VAR_20;
}
