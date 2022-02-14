
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int spl_t ;
typedef scalar_t__ clock_sec_t ;
typedef int clock_nsec_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

void
FUNC_4(
 clock_sec_t *VAR_3,
 clock_nsec_t *VAR_4)
{
 spl_t VAR_5;

 VAR_5 = FUNC_2();
 FUNC_0();

 *VAR_3 = (clock_sec_t)VAR_1;
 *VAR_4 = (clock_nsec_t)VAR_2 * VAR_0;

 FUNC_1();
 FUNC_3(VAR_5);
}
