
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int instructionPointersLength; int* instructionPointers; int numSymbols; TYPE_2__* symbols; int name; } ;
typedef TYPE_1__ vm_t ;
struct TYPE_7__ {int symValue; int symName; struct TYPE_7__* next; } ;
typedef TYPE_2__ vmSymbol_t ;
typedef int symbols ;
struct TYPE_8__ {int integer; } ;


 char* FUNC_0 (char**) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int,char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,void**) ;
 TYPE_2__* FUNC_6 (int,int ) ;
 int VAR_0 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,int) ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (char*) ;

void FUNC_10( vm_t *VAR_3 ) {
 int VAR_4;
 char *VAR_5, *VAR_6, *VAR_7;
 char VAR_8[VAR_0];
 char VAR_9[VAR_0];
 vmSymbol_t **VAR_10, *VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;


 if ( !VAR_1->integer ) {
  return;
 }

 FUNC_1( VAR_3->name, VAR_8 );
 FUNC_3( VAR_9, sizeof( VAR_9 ), "vm/%s.map", VAR_8 );
 VAR_4 = FUNC_5( VAR_9, (void **)&VAR_5 );
 if ( !VAR_5 ) {
  FUNC_2( "Couldn't load symbol file: %s\n", VAR_9 );
  return;
 }

 VAR_16 = VAR_3->instructionPointersLength >> 2;


 VAR_6 = VAR_5;
 VAR_10 = &VAR_3->symbols;
 VAR_12 = 0;

 while ( 1 ) {
  VAR_7 = FUNC_0( &VAR_6 );
  if ( !VAR_7[0] ) {
   break;
  }
  VAR_15 = FUNC_7( VAR_7 );
  if ( VAR_15 ) {
   FUNC_0( &VAR_6 );
   FUNC_0( &VAR_6 );
   continue;
  }

  VAR_7 = FUNC_0( &VAR_6 );
  if ( !VAR_7[0] ) {
   FUNC_2( "WARNING: incomplete line at end of file\n" );
   break;
  }
  VAR_13 = FUNC_7( VAR_7 );

  VAR_7 = FUNC_0( &VAR_6 );
  if ( !VAR_7[0] ) {
   FUNC_2( "WARNING: incomplete line at end of file\n" );
   break;
  }
  VAR_14 = FUNC_9( VAR_7 );
  VAR_11 = FUNC_6( sizeof( *VAR_11 ) + VAR_14, VAR_2 );
  *VAR_10 = VAR_11;
  VAR_10 = &VAR_11->next;
  VAR_11->next = ((void*)0);


  if ( VAR_13 >= 0 && VAR_13 < VAR_16 ) {
   VAR_13 = VAR_3->instructionPointers[VAR_13];
  }

  VAR_11->symValue = VAR_13;
  FUNC_8( VAR_11->symName, VAR_7, VAR_14 + 1 );

  VAR_12++;
 }

 VAR_3->numSymbols = VAR_12;
 FUNC_2( "%i symbols parsed from %s\n", VAR_12, VAR_9 );
 FUNC_4( VAR_5 );
}
