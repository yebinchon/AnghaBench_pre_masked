
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ clock_sec_t ;
typedef int clock_nsec_t ;
typedef TYPE_1__* c_segment_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_2__ {scalar_t__ c_creation_ts; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (scalar_t__*,int *) ;
 int VAR_8 ;
 int FUNC_3 () ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;

__attribute__((used)) static boolean_t
FUNC_14(void)
{
 boolean_t VAR_19 = VAR_1;

 if (VAR_18 == VAR_2 && VAR_6 < VAR_7) {
  c_segment_t VAR_20;
  clock_sec_t VAR_21;
  clock_sec_t VAR_22;
  clock_nsec_t VAR_23;

  FUNC_2(&VAR_21, &VAR_23);
  VAR_22 = 0;

  FUNC_4(VAR_5);

  if ( !FUNC_9(&VAR_4)) {
   VAR_20 = (c_segment_t) FUNC_10(&VAR_4);

   VAR_22 = VAR_21 - VAR_20->c_creation_ts;
  }
  FUNC_5(VAR_5);

  if (VAR_22 >= VAR_17)
   return (VAR_2);
 }
 if (VAR_3) {
  if (FUNC_0()) {
   return (VAR_2);
  }
  if (FUNC_1(&VAR_16) && VAR_12 < (VAR_15 / 20)) {
   return (VAR_2);
  }
  if (VAR_13 < (VAR_14 - (VAR_0 * 2)))
   return (VAR_2);
 }
 FUNC_3();

 if (VAR_10) {
  c_segment_t VAR_24;

  FUNC_4(VAR_5);

  if (!FUNC_9(&VAR_4)) {

   VAR_24 = (c_segment_t) FUNC_10(&VAR_4);

   if (VAR_24->c_creation_ts > VAR_10)
    VAR_10 = 0;
  }
  FUNC_5(VAR_5);
 }




 if (VAR_10)
  VAR_19 = VAR_2;
 if (VAR_19 == VAR_1) {
  VAR_19 = FUNC_12();
 }
 return (VAR_19);
}
