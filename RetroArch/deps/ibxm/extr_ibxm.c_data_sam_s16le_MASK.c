
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {int length; char* buffer; } ;



__attribute__((used)) static void FUNC_0( struct data *VAR_0, int VAR_1, int VAR_2, short *VAR_3 ) {
 int VAR_4, VAR_5, VAR_6 = VAR_0->length;
 char *VAR_7 = VAR_0->buffer;
 if( VAR_1 > VAR_6 ) {
  VAR_1 = VAR_6;
 }
 if( VAR_1 + VAR_2 * 2 > VAR_6 ) {
  VAR_2 = ( VAR_6 - VAR_1 ) / 2;
 }
 for( VAR_4 = 0; VAR_4 < VAR_2; VAR_4++ ) {
  VAR_5 = ( VAR_7[ VAR_1 + VAR_4 * 2 ] & 0xFF ) | ( VAR_7[ VAR_1 + VAR_4 * 2 + 1 ] << 8 );
  VAR_3[ VAR_4 ] = ( VAR_5 & 0x7FFF ) - ( VAR_5 & 0x8000 );
 }
}
