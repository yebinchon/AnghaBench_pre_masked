
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ wait_result_t ;
typedef int kern_return_t ;
typedef int event_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_2__ {scalar_t__ freed_external; scalar_t__ freed_internal; scalar_t__ freed_cleaned; scalar_t__ freed_speculative; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 unsigned int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 TYPE_1__* VAR_11 ;

kern_return_t
FUNC_4(
 boolean_t VAR_12,
 unsigned int VAR_13,
 unsigned int *VAR_14,
 unsigned int *VAR_15)
{
 wait_result_t VAR_16;
 unsigned int VAR_17, VAR_18;
 unsigned int VAR_19;
 unsigned int VAR_20;

 VAR_20 = 8 * VAR_13;







 if (VAR_12) {

  while (VAR_7 >= VAR_8) {
   VAR_16 = FUNC_1((event_t) &VAR_9,
      VAR_5);
   if (VAR_16 == VAR_6) {
    VAR_16 = FUNC_3(VAR_3);
   }
   if (VAR_16 == VAR_4) {
    return VAR_0;
   }
   if (VAR_16 == VAR_2) {






    break;
   }
  }
 }


 if (VAR_15 != ((void*)0)) {
  *VAR_15 = FUNC_2();
 }

 if (VAR_14 == ((void*)0)) {
  return VAR_1;
 }


 VAR_18 = VAR_10;
 VAR_19 = 0;
 for (VAR_17 =
       FUNC_0(VAR_18);
      VAR_17 != VAR_18 &&
       VAR_20-- != 0;
      VAR_17 =
       FUNC_0(VAR_17)) {
  VAR_19 += VAR_11[VAR_17].freed_speculative;
  VAR_19 += VAR_11[VAR_17].freed_cleaned;
  VAR_19 += VAR_11[VAR_17].freed_internal;
  VAR_19 += VAR_11[VAR_17].freed_external;
 }
 *VAR_14 = VAR_19;

 return VAR_1;
}
