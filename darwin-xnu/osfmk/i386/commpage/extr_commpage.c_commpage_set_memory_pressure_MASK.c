
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;

void
FUNC_0(
 unsigned int VAR_5 )
{
 char *VAR_6;
 uint32_t *VAR_7;

 VAR_6 = VAR_3;
 if ( VAR_6 ) {
  VAR_6 += (VAR_2 - VAR_0);
  VAR_7 = (uint32_t*) (void *) VAR_6;
  *VAR_7 = (uint32_t) VAR_5;
 }

 VAR_6 = VAR_4;
 if ( VAR_6 ) {
  VAR_6 += (VAR_2 - VAR_1);
  VAR_7 = (uint32_t*) (void *) VAR_6;
  *VAR_7 = (uint32_t) VAR_5;
 }

}
