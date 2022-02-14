
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {int length; int* buffer; } ;


 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static char* FUNC_1( struct data *VAR_0, int VAR_1, int VAR_2, char *VAR_3 ) {
 int VAR_4, VAR_5;
 FUNC_0( VAR_3, 32, VAR_2 );
 if( VAR_1 > VAR_0->length ) {
  VAR_1 = VAR_0->length;
 }
 if( ( unsigned int ) VAR_1 + VAR_2 > ( unsigned int ) VAR_0->length ) {
  VAR_2 = VAR_0->length - VAR_1;
 }
 for( VAR_4 = 0; VAR_4 < VAR_2; VAR_4++ ) {
  VAR_5 = VAR_0->buffer[ VAR_1 + VAR_4 ] & 0xFF;
  if( VAR_5 > 32 ) {
   VAR_3[ VAR_4 ] = VAR_5;
  }
 }
 return VAR_3;
}
