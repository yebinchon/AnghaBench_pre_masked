
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {int length; int* buffer; } ;



__attribute__((used)) static unsigned int FUNC_0( struct data *VAR_0, int VAR_1 ) {
 unsigned int VAR_2 = 0;
 if( VAR_1 + 3 < VAR_0->length ) {
  VAR_2 = ( VAR_0->buffer[ VAR_1 ] & 0xFF )
   | ( ( VAR_0->buffer[ VAR_1 + 1 ] & 0xFF ) << 8 )
   | ( ( VAR_0->buffer[ VAR_1 + 2 ] & 0xFF ) << 16 )
   | ( ( VAR_0->buffer[ VAR_1 + 3 ] & 0xFF ) << 24 );
 }
 return VAR_2;
}
