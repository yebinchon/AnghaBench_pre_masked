
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cursize; int maxsize; char* data; } ;


 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (char const*) ;

void FUNC_3( const char *VAR_1 ) {
 int VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2( VAR_1 ) + 1;
 if ( VAR_2 + VAR_0.cursize > VAR_0.maxsize ) {
  FUNC_1( "Cbuf_InsertText overflowed\n" );
  return;
 }


 for ( VAR_3 = VAR_0.cursize - 1 ; VAR_3 >= 0 ; VAR_3-- ) {
  VAR_0.data[ VAR_3 + VAR_2 ] = VAR_0.data[ VAR_3 ];
 }


 FUNC_0( VAR_0.data, VAR_1, VAR_2 - 1 );


 VAR_0.data[ VAR_2 - 1 ] = '\n';

 VAR_0.cursize += VAR_2;
}
