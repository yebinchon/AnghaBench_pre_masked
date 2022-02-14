
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sample {int loop_start; int loop_length; short* data; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (short*) ;
 int FUNC_2 (short*,short*,int) ;

__attribute__((used)) static void FUNC_3( struct sample *VAR_0 ) {
 int VAR_1;
 int VAR_2 = VAR_0->loop_start;
 int VAR_3 = VAR_0->loop_length;
 int VAR_4 = VAR_2 + VAR_3;
 short *VAR_5 = VAR_0->data;
 short *VAR_6 = (short*)FUNC_0( VAR_4 + VAR_3 + 1, sizeof( short ) );
 if( VAR_6 ) {
  FUNC_2( VAR_6, VAR_5, VAR_4 * sizeof( short ) );
  for( VAR_1 = 0; VAR_1 < VAR_3; VAR_1++ ) {
   VAR_6[ VAR_4 + VAR_1 ] = VAR_5[ VAR_4 - VAR_1 - 1 ];
  }
  FUNC_1( VAR_0->data );
  VAR_0->data = VAR_6;
  VAR_0->loop_length *= 2;
  VAR_0->data[ VAR_2 + VAR_0->loop_length ] = VAR_0->data[ VAR_2 ];
 }
}
