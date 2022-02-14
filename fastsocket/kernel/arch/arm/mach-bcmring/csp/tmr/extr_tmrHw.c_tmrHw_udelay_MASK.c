
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long tmrHw_RATE_t ;
typedef int tmrHw_ID_t ;
typedef unsigned long tmrHw_COUNT_t ;


 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

void FUNC_3(tmrHw_ID_t VAR_0,
    unsigned long VAR_1
) {
 tmrHw_RATE_t VAR_2;
 tmrHw_COUNT_t VAR_3;
 tmrHw_COUNT_t VAR_4;

 VAR_3 = FUNC_0(VAR_0);
 VAR_2 = FUNC_1(FUNC_2(VAR_0), 1000000);
 VAR_4 = VAR_1 * VAR_2;


 while (VAR_4 > (FUNC_0(VAR_0) - VAR_3))
  ;
}
