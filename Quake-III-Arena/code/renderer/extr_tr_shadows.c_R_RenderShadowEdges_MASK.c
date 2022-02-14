
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t facing; int i2; } ;
struct TYPE_3__ {int numIndexes; int* indexes; int numVertexes; int * xyz; } ;


 int VAR_0 ;
 TYPE_2__** VAR_1 ;
 int * VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_4 ;

void FUNC_3( void ) {
 int VAR_5;
 int VAR_6, VAR_7;
 int VAR_8, VAR_9;
 int VAR_10;
 int VAR_11, VAR_12;
 int VAR_13[2];





 VAR_11 = 0;
 VAR_12 = 0;

 for ( VAR_5 = 0 ; VAR_5 < VAR_4.numVertexes ; VAR_5++ ) {
  VAR_6 = VAR_3[ VAR_5 ];
  for ( VAR_8 = 0 ; VAR_8 < VAR_6 ; VAR_8++ ) {
   if ( !VAR_1[ VAR_5 ][ VAR_8 ].facing ) {
    continue;
   }

   VAR_13[0] = 0;
   VAR_13[1] = 0;

   VAR_10 = VAR_1[ VAR_5 ][ VAR_8 ].i2;
   VAR_7 = VAR_3[ VAR_10 ];
   for ( VAR_9 = 0 ; VAR_9 < VAR_7 ; VAR_9++ ) {
    if ( VAR_1[ VAR_10 ][ VAR_9 ].i2 == VAR_5 ) {
     VAR_13[ VAR_1[ VAR_10 ][ VAR_9 ].facing ]++;
    }
   }



   if ( VAR_13[ 1 ] == 0 ) {
    FUNC_0( VAR_0 );
    FUNC_2( VAR_4.xyz[ VAR_5 ] );
    FUNC_2( VAR_4.xyz[ VAR_5 + VAR_4.numVertexes ] );
    FUNC_2( VAR_4.xyz[ VAR_10 ] );
    FUNC_2( VAR_4.xyz[ VAR_10 + VAR_4.numVertexes ] );
    FUNC_1();
    VAR_11++;
   } else {
    VAR_12++;
   }
  }
 }

}
