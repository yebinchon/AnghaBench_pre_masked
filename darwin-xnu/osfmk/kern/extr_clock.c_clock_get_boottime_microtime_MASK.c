
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int spl_t ;
typedef scalar_t__ clock_usec_t ;
typedef scalar_t__ clock_sec_t ;
typedef scalar_t__ clock_nsec_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

void
FUNC_4(
 clock_sec_t *VAR_2,
 clock_usec_t *VAR_3)
{
 spl_t VAR_4;

 VAR_4 = FUNC_2();
 FUNC_0();

 *VAR_2 = (clock_sec_t)VAR_0;
 *VAR_3 = (clock_nsec_t)VAR_1;

 FUNC_1();
 FUNC_3(VAR_4);
}
