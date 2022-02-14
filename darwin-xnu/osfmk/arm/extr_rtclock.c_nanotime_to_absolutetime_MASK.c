
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ clock_sec_t ;
typedef scalar_t__ clock_nsec_t ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(clock_sec_t VAR_2,
                         clock_nsec_t VAR_3,
                         uint64_t * VAR_4)
{
 *VAR_4 = ((uint64_t) VAR_2 * VAR_1) +
 ((uint64_t) VAR_3 * VAR_1) / VAR_0;
}
