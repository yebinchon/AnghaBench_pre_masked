
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;


 char* VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;

qboolean FUNC_0( void ) {
 int VAR_5;
 int VAR_6;

 VAR_6 = 0;
 VAR_4[0] = 0;


 while ( VAR_0[ VAR_1 ] <= ' ' ) {
  if ( VAR_0[ VAR_1 ] == 0 ) {
   return VAR_2;
  }
  VAR_1++;
 }


 VAR_5 = VAR_0[ VAR_1 ];
 if ( VAR_5 == ';' ) {
  return VAR_2;
 }



 do {
  VAR_4[VAR_6] = VAR_5;
  VAR_6++;
  VAR_1++;
  VAR_5 = VAR_0[ VAR_1 ];
 } while (VAR_5>32);

 VAR_4[VAR_6] = 0;
 return VAR_3;
}
