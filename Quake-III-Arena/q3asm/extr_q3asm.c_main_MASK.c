
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 double FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int * VAR_0 ;
 int FUNC_5 (char*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (char*,double) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (int ,char*) ;

int FUNC_9( int VAR_3, char **VAR_4 ) {
 int VAR_5;
 double VAR_6, VAR_7;



 if ( VAR_3 < 2 ) {
  FUNC_1( "usage: q3asm [-o output] <files> or q3asm -f <listfile>\n" );
 }

 VAR_6 = FUNC_2 ();
 FUNC_3();


 FUNC_8( VAR_2, "q3asm" );
 VAR_1 = 0;

 for ( VAR_5 = 1 ; VAR_5 < VAR_3 ; VAR_5++ ) {
  if ( VAR_4[VAR_5][0] != '-' ) {
   break;
  }
  if ( !FUNC_7( VAR_4[VAR_5], "-o" ) ) {
   if ( VAR_5 == VAR_3 - 1 ) {
    FUNC_1( "-o must preceed a filename" );
   }
   FUNC_8( VAR_2, VAR_4[ VAR_5+1 ] );
   VAR_5++;
   continue;
  }

  if ( !FUNC_7( VAR_4[VAR_5], "-f" ) ) {
   if ( VAR_5 == VAR_3 - 1 ) {
    FUNC_1( "-f must preceed a filename" );
   }
   FUNC_4( VAR_4[ VAR_5+1 ] );
   VAR_5++;
   continue;
  }
  FUNC_1( "Unknown option: %s", VAR_4[VAR_5] );
 }


 for ( ; VAR_5 < VAR_3 ; VAR_5++ ) {
  VAR_0[ VAR_1 ] = FUNC_5( VAR_4[ VAR_5 ] );
  VAR_1++;
 }

 FUNC_0();

 VAR_7 = FUNC_2 ();
 FUNC_6 ("%5.0f seconds elapsed\n", VAR_7-VAR_6);

 return 0;
}
