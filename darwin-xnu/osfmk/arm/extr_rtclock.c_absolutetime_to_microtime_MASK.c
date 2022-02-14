
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ clock_usec_t ;
typedef int clock_sec_t ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(uint64_t VAR_2,
                          clock_sec_t * VAR_3,
                          clock_usec_t * VAR_4)
{
 uint64_t VAR_5;

 *VAR_3 = VAR_5 = VAR_2 / VAR_0;
 VAR_2 -= (VAR_5 * VAR_0);

 *VAR_4 = (uint32_t)(VAR_2 / VAR_1);
}
