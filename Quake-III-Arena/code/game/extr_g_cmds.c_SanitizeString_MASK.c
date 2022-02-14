
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;

void FUNC_1( char *VAR_0, char *VAR_1 ) {
 while ( *VAR_0 ) {
  if ( *VAR_0 == 27 ) {
   VAR_0 += 2;
   continue;
  }
  if ( *VAR_0 < 32 ) {
   VAR_0++;
   continue;
  }
  *VAR_1++ = FUNC_0( *VAR_0++ );
 }

 *VAR_1 = 0;
}
