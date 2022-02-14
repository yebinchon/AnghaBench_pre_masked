
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int value; int * segment; struct TYPE_3__* next; } ;
typedef TYPE_1__ symbol_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int,int,char*) ;
 int VAR_3 ;
 int FUNC_4 (char*,char*) ;
 int * VAR_4 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int ) ;
 TYPE_1__* VAR_5 ;

void FUNC_7( void ) {
 FILE *VAR_6;
 symbol_t *VAR_7;
 char VAR_8[VAR_2];
 int VAR_9;

 FUNC_6( VAR_8, VAR_3 );
 FUNC_1( VAR_8 );
 FUNC_5( VAR_8, ".map" );

 FUNC_4( "Writing %s...\n", VAR_8 );
 VAR_6 = FUNC_0( VAR_8 );
 for ( VAR_9 = VAR_1 ; VAR_9 <= VAR_0 ; VAR_9++ ) {
  for ( VAR_7 = VAR_5 ; VAR_7 ; VAR_7 = VAR_7->next ) {
   if ( VAR_7->name[0] == '$' ) {
    continue;
   }
   if ( &VAR_4[VAR_9] != VAR_7->segment ) {
    continue;
   }
   FUNC_3( VAR_6, "%i %8x %s\n", VAR_9, VAR_7->value, VAR_7->name );
  }
 }
 FUNC_2( VAR_6 );
}
