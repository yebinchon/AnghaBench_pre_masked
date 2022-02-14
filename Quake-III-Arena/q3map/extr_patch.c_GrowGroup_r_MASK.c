
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;



void FUNC_0( int VAR_0, int VAR_1, const byte *VAR_2, byte *VAR_3 ) {
 int VAR_4;
 const byte *VAR_5;

 if ( VAR_3[VAR_0] ) {
  return;
 }
 VAR_3[VAR_0] = 1;
 VAR_5 = VAR_2 + VAR_0 * VAR_1;
 for ( VAR_4 = 0 ; VAR_4 < VAR_1 ; VAR_4++ ) {
  if ( VAR_5[VAR_4] ) {
   FUNC_0( VAR_4, VAR_1, VAR_2, VAR_3 );
  }
 }
}
