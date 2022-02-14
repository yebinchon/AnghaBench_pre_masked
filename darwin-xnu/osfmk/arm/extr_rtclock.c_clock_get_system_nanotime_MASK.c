
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int clock_sec_t ;
typedef scalar_t__ clock_nsec_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;

void
FUNC_1(clock_sec_t * VAR_2,
                          clock_nsec_t * VAR_3)
{
 uint64_t VAR_4;
 uint64_t VAR_5;

 VAR_4 = FUNC_0();
 *VAR_2 = (VAR_5 = VAR_4 / VAR_1);
 VAR_4 -= (VAR_5 * VAR_1);

 *VAR_3 = (clock_nsec_t)((VAR_4 * VAR_0) / VAR_1);
}
