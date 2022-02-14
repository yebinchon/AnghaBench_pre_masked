
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 () ;

void
FUNC_1(void)
{
 volatile uint32_t *VAR_5;
 char *VAR_6;

 VAR_6 = VAR_3;
 if (VAR_6) {
  VAR_6 += (VAR_2 - VAR_0);
  VAR_5 = (volatile uint32_t *)VAR_6;
  *VAR_5 = FUNC_0();
 }

 VAR_6 = VAR_4;
 if (VAR_6) {
  VAR_6 += (VAR_2 - VAR_1);
  VAR_5 = (volatile uint32_t *)VAR_6;
  *VAR_5 = FUNC_0();
 }
}
