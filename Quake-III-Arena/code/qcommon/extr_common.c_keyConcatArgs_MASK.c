
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buffer; } ;


 int FUNC_0 () ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int ,int,char*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_3( void ) {
 int VAR_1;
 char *VAR_2;

 for ( VAR_1 = 1 ; VAR_1 < FUNC_0() ; VAR_1++ ) {
  FUNC_2( VAR_0->buffer, sizeof( VAR_0->buffer ), " " );
  VAR_2 = FUNC_1( VAR_1 );
  while (*VAR_2) {
   if (*VAR_2 == ' ') {
    FUNC_2( VAR_0->buffer, sizeof( VAR_0->buffer ), "\"");
    break;
   }
   VAR_2++;
  }
  FUNC_2( VAR_0->buffer, sizeof( VAR_0->buffer ), FUNC_1( VAR_1 ) );
  if (*VAR_2 == ' ') {
   FUNC_2( VAR_0->buffer, sizeof( VAR_0->buffer ), "\"");
  }
 }
}
