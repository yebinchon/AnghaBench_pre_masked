
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int segmentBase; int imageUsed; } ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int) ;
 char* FUNC_3 (char*) ;
 size_t VAR_2 ;
 int FUNC_4 (char*,void**) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 char** VAR_5 ;
 char** VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 char* VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (char*,...) ;
 TYPE_1__* VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_8 (char*,char*) ;

void FUNC_9( void ) {
 int VAR_16;
 char VAR_17[VAR_3];
 char *VAR_18;

 FUNC_7( "outputFilename: %s\n", VAR_12 );

 for ( VAR_16 = 0 ; VAR_16 < VAR_11 ; VAR_16++ ) {
  FUNC_8( VAR_17, VAR_5[ VAR_16 ] );
  FUNC_1( VAR_17, ".asm" );
  FUNC_4( VAR_17, (void **)&VAR_6[VAR_16] );
 }


 for ( VAR_13 = 0 ; VAR_13 < 2 ; VAR_13++ ) {
  VAR_14[VAR_2].segmentBase = VAR_14[VAR_1].imageUsed;
  VAR_14[VAR_0].segmentBase = VAR_14[VAR_2].segmentBase + VAR_14[VAR_2].imageUsed;
  for ( VAR_16 = 0 ; VAR_16 < VAR_4 ; VAR_16++ ) {
   VAR_14[VAR_16].imageUsed = 0;
  }
  VAR_14[VAR_1].imageUsed = 4;
  VAR_10 = 0;

  for ( VAR_16 = 0 ; VAR_16 < VAR_11 ; VAR_16++ ) {
   VAR_7 = VAR_16;
   VAR_9 = VAR_5[ VAR_16 ];
   VAR_8 = 0;
   FUNC_7("pass %i: %s\n", VAR_13, VAR_9 );
   VAR_18 = VAR_6[VAR_16];
   while ( VAR_18 ) {
    VAR_18 = FUNC_3( VAR_18 );
    FUNC_0();
   }
  }


  for ( VAR_16 = 0 ; VAR_16 < VAR_4 ; VAR_16++ ) {
   VAR_14[VAR_16].imageUsed = (VAR_14[VAR_16].imageUsed + 3) & ~3;
  }
 }


 FUNC_2( "_stackStart", VAR_14[VAR_0].imageUsed );
 VAR_14[VAR_0].imageUsed += VAR_15;
 FUNC_2( "_stackEnd", VAR_14[VAR_0].imageUsed );


 FUNC_6();


 FUNC_5();
}
