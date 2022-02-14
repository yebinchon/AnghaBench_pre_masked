
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;
typedef int FILE ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,int,int,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int,int,int *) ;
 int * FUNC_10 (int) ;
 scalar_t__ FUNC_11 (char*,char*) ;

__attribute__((used)) static void FUNC_12( char *VAR_3, char *VAR_4 ) {
 FILE *VAR_5;
 int VAR_6;
 byte *VAR_7;

 FUNC_1( "copy %s to %s\n", VAR_3, VAR_4 );

 if (FUNC_11(VAR_3, "journal.dat") || FUNC_11(VAR_3, "journaldata.dat")) {
  FUNC_1( "Ignoring journal files\n");
  return;
 }

 VAR_5 = FUNC_4( VAR_3, "rb" );
 if ( !VAR_5 ) {
  return;
 }
 FUNC_7 (VAR_5, 0, VAR_1);
 VAR_6 = FUNC_8 (VAR_5);
 FUNC_7 (VAR_5, 0, VAR_2);



 VAR_7 = FUNC_10( VAR_6 );
 if (FUNC_5( VAR_7, 1, VAR_6, VAR_5 ) != VAR_6)
  FUNC_0( VAR_0, "Short read in FS_Copyfiles()\n" );
 FUNC_3( VAR_5 );

 if( FUNC_2( VAR_4 ) ) {
  return;
 }

 VAR_5 = FUNC_4( VAR_4, "wb" );
 if ( !VAR_5 ) {
  return;
 }
 if (FUNC_9( VAR_7, 1, VAR_6, VAR_5 ) != VAR_6)
  FUNC_0( VAR_0, "Short write in FS_Copyfiles()\n" );
 FUNC_3( VAR_5 );
 FUNC_6( VAR_7 );
}
