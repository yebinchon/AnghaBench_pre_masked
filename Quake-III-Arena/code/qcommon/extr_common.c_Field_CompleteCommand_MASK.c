
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* buffer; scalar_t__ cursor; } ;
typedef TYPE_1__ field_t ;


 int FUNC_0 () ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int,char*,scalar_t__*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (char*,int,char*) ;
 TYPE_1__* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__ FUNC_10 (char*) ;

void FUNC_11( field_t *VAR_6 ) {
 field_t VAR_7;

 VAR_2 = VAR_6;


 FUNC_3( VAR_2->buffer );

 VAR_3 = FUNC_1(0);
 if ( VAR_3[0] == '\\' || VAR_3[0] == '/' ) {
  VAR_3++;
 }
 VAR_4 = 0;
 VAR_5[0] = 0;

 if ( FUNC_10( VAR_3 ) == 0 ) {
  return;
 }

 FUNC_2( VAR_0 );
 FUNC_8( VAR_0 );

 if ( VAR_4 == 0 ) {
  return;
 }

 FUNC_4(&VAR_7, VAR_2, sizeof(field_t));

 if ( VAR_4 == 1 ) {
  FUNC_6( VAR_2->buffer, sizeof( VAR_2->buffer ), "\\%s", VAR_5 );
  if ( FUNC_0() == 1 ) {
   FUNC_9( VAR_2->buffer, sizeof( VAR_2->buffer ), " " );
  } else {
   FUNC_7( VAR_7.buffer, VAR_3 );
  }
  VAR_2->cursor = FUNC_10( VAR_2->buffer );
  return;
 }


 FUNC_6( VAR_2->buffer, sizeof( VAR_2->buffer ), "\\%s", VAR_5 );
 VAR_2->cursor = FUNC_10( VAR_2->buffer );
 FUNC_7( VAR_7.buffer, VAR_3 );

 FUNC_5( "]%s\n", VAR_2->buffer );


 FUNC_2( VAR_1 );
 FUNC_8( VAR_1 );
}
