
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int thread_t ;
typedef scalar_t__ int32_t ;
typedef int boolean_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__*,scalar_t__*,int *) ;
 scalar_t__ VAR_3 ;

uint64_t
FUNC_2(uint64_t VAR_4, uint64_t VAR_5, uint32_t VAR_6, thread_t VAR_7, boolean_t *VAR_8)
{
 int32_t VAR_9 = 0;
 uint64_t VAR_10 = 0;
 uint64_t VAR_11;
 uint32_t VAR_12 = (VAR_6 & VAR_1);

 if (VAR_2 &&
     (VAR_4 > VAR_5) && (VAR_12 != VAR_0)) {
  FUNC_1(VAR_7, VAR_12, &VAR_9, &VAR_10, VAR_8);

  if (VAR_9 >= 0)
   VAR_11 = FUNC_0((VAR_4 - VAR_5) >> VAR_9, VAR_10);
  else
   VAR_11 = FUNC_0((VAR_4 - VAR_5) << (-VAR_9), VAR_10);

  VAR_11 += (VAR_11 * VAR_3) >> 7;
  return VAR_11;
  } else {
  return 0;
 }
}
