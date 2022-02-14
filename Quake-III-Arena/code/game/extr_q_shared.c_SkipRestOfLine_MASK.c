
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

void FUNC_0 ( char **VAR_1 ) {
 char *VAR_2;
 int VAR_3;

 VAR_2 = *VAR_1;
 while ( (VAR_3 = *VAR_2++) != 0 ) {
  if ( VAR_3 == '\n' ) {
   VAR_0++;
   break;
  }
 }

 *VAR_1 = VAR_2;
}
