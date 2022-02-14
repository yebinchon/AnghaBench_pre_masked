
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int clock_usec_t ;
typedef int clock_sec_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_3__ {int options; int t_page_creation_throttled; int t_page_creation_count; int t_page_creation_time; int t_page_creation_throttled_soft; int t_page_creation_throttled_hard; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int*,int *) ;
 TYPE_1__* FUNC_7 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static int
FUNC_8(boolean_t VAR_15)
{
        clock_sec_t VAR_16;
        clock_sec_t VAR_17;
        clock_usec_t VAR_18;

 thread_t VAR_19 = FUNC_7();

 if (VAR_19->options & VAR_3)
  return (0);

 if (VAR_19->t_page_creation_throttled) {
  VAR_19->t_page_creation_throttled = 0;

  if (VAR_15 == VAR_0)
   goto no_throttle;
 }
 if (FUNC_1()) {




  return (VAR_1);
 }

 if ((VAR_10 < VAR_14 || (VAR_4 && FUNC_4())) &&
     VAR_19->t_page_creation_count > (VAR_5 * VAR_6)) {

  if (VAR_11 == 0 && VAR_12 == 0) {



   goto no_throttle;
  }
  FUNC_6(&VAR_17, &VAR_18);

  VAR_16 = VAR_17 - VAR_19->t_page_creation_time;

  if (VAR_16 <= VAR_5 ||
      (VAR_19->t_page_creation_count / VAR_16) >= VAR_6) {

   if (VAR_16 >= (3 * VAR_5)) {
    VAR_19->t_page_creation_time = VAR_17;
    VAR_19->t_page_creation_count = VAR_6 * (VAR_5 - 1);
   }
   FUNC_5(VAR_13, 1);

   VAR_19->t_page_creation_throttled = 1;

   if (VAR_4 && FUNC_0()) {




    return (VAR_1);
   } else {




    return (VAR_2);
   }
  }
  VAR_19->t_page_creation_time = VAR_17;
  VAR_19->t_page_creation_count = 0;
 }
no_throttle:
 VAR_19->t_page_creation_count++;

 return (0);
}
