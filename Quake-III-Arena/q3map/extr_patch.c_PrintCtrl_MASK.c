
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vec3_t ;


 int FUNC_0 (char*,...) ;

void FUNC_1( vec3_t VAR_0[9] ) {
 int VAR_1, VAR_2;

 for ( VAR_1 = 0 ; VAR_1 < 3 ; VAR_1++ ) {
  for ( VAR_2 = 0 ; VAR_2 < 3 ; VAR_2++ ) {
   FUNC_0("(%5.2f %5.2f %5.2f) ", VAR_0[VAR_1*3+VAR_2][0], VAR_0[VAR_1*3+VAR_2][1], VAR_0[VAR_1*3+VAR_2][2] );
  }
  FUNC_0("\n");
 }
}
