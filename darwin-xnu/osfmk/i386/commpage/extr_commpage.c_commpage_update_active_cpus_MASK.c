
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(void)
{
 char *VAR_7;
 volatile uint8_t *VAR_8;


 if (!VAR_3)
  return;

 FUNC_0(&VAR_5);

 VAR_7 = VAR_3;
 VAR_7 += (VAR_2 - VAR_0);
 VAR_8 = (volatile uint8_t*) VAR_7;
 *VAR_8 = (uint8_t) VAR_6;

 VAR_7 = VAR_4;
 if ( VAR_7 ) {
  VAR_7 += (VAR_2 - VAR_1);
  VAR_8 = (volatile uint8_t*) VAR_7;
  *VAR_8 = (uint8_t) VAR_6;
 }

 FUNC_1(&VAR_5);
}
