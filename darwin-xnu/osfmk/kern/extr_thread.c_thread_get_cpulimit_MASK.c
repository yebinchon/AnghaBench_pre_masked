
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned long long uint64_t ;
typedef TYPE_1__* thread_t ;
typedef scalar_t__ int64_t ;
struct TYPE_5__ {int cpu_time; } ;
struct TYPE_4__ {scalar_t__ t_threadledger; int options; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__,unsigned long long*) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (scalar_t__,int ,scalar_t__*) ;
 int FUNC_4 (scalar_t__,int ,unsigned long long*) ;
 TYPE_2__ VAR_8 ;

int
FUNC_5(int *VAR_9, uint8_t *VAR_10, uint64_t *VAR_11)
{
 int64_t VAR_12 = 0;
 uint64_t VAR_13 = 0;
 thread_t VAR_14 = FUNC_2();

 *VAR_10 = 0;
 *VAR_11 = 0;
 *VAR_9 = 0;

 if (VAR_14->t_threadledger == VAR_2) {




  return (VAR_0);
 }

 FUNC_4(VAR_14->t_threadledger, VAR_8.cpu_time, VAR_11);
 FUNC_3(VAR_14->t_threadledger, VAR_8.cpu_time, &VAR_12);

 if ((VAR_12 == VAR_1) || (*VAR_11 == 0)) {




   return (VAR_0);
 }




 FUNC_0(VAR_12, &VAR_13);
 *VAR_10 = (VAR_13 * 100ULL) / *VAR_11;
 FUNC_1(*VAR_10 <= 100);

 if (VAR_14->options & VAR_6) {
  FUNC_1((VAR_14->options & VAR_7) == 0);

  *VAR_9 = VAR_3;
 } else if (VAR_14->options & VAR_7) {
  FUNC_1((VAR_14->options & VAR_6) == 0);

  *VAR_9 = VAR_5;
 } else {
  *VAR_9 = VAR_4;
 }

 return (VAR_0);
}
