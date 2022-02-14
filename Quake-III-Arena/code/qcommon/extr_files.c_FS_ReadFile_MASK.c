
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
typedef int len ;
typedef scalar_t__ fileHandle_t ;
typedef int byte ;
struct TYPE_2__ {int integer; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char const*,scalar_t__*,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int*,int,scalar_t__) ;
 int FUNC_6 (int*,int,scalar_t__) ;
 int* FUNC_7 (int) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_8 (char const*,char*) ;

int FUNC_9( const char *VAR_8, void **VAR_9 ) {
 fileHandle_t VAR_10;
 byte* VAR_11;
 qboolean VAR_12;
 int VAR_13;

 if ( !VAR_5 ) {
  FUNC_1( VAR_0, "Filesystem call made without initialization\n" );
 }

 if ( !VAR_8 || !VAR_8[0] ) {
  FUNC_1( VAR_0, "FS_ReadFile with empty name\n" );
 }

 VAR_11 = ((void*)0);



 if ( FUNC_8( VAR_8, ".cfg" ) ) {
  VAR_12 = VAR_7;
  if ( VAR_1 && VAR_1->integer == 2 ) {
   int VAR_14;

   FUNC_0( "Loading %s from journal file.\n", VAR_8 );
   VAR_14 = FUNC_5( &VAR_13, sizeof( VAR_13 ), VAR_2 );
   if ( VAR_14 != sizeof( VAR_13 ) ) {
    if (VAR_9 != ((void*)0)) *VAR_9 = ((void*)0);
    return -1;
   }

   if (!VAR_13) {
    if (VAR_9 == ((void*)0)) {
     return 1;
    }
    *VAR_9 = ((void*)0);
    return -1;
   }
   if (VAR_9 == ((void*)0)) {
    return VAR_13;
   }

   VAR_11 = FUNC_7(VAR_13+1);
   *VAR_9 = VAR_11;

   VAR_14 = FUNC_5( VAR_11, VAR_13, VAR_2 );
   if ( VAR_14 != VAR_13 ) {
    FUNC_1( VAR_0, "Read from journalDataFile failed" );
   }

   VAR_3++;
   VAR_4++;


   VAR_11[VAR_13] = 0;

   return VAR_13;
  }
 } else {
  VAR_12 = VAR_6;
 }


 VAR_13 = FUNC_3( VAR_8, &VAR_10, VAR_6 );
 if ( VAR_10 == 0 ) {
  if ( VAR_9 ) {
   *VAR_9 = ((void*)0);
  }

  if ( VAR_12 && VAR_1 && VAR_1->integer == 1 ) {
   FUNC_0( "Writing zero for %s to journal file.\n", VAR_8 );
   VAR_13 = 0;
   FUNC_6( &VAR_13, sizeof( VAR_13 ), VAR_2 );
   FUNC_4( VAR_2 );
  }
  return -1;
 }

 if ( !VAR_9 ) {
  if ( VAR_12 && VAR_1 && VAR_1->integer == 1 ) {
   FUNC_0( "Writing len for %s to journal file.\n", VAR_8 );
   FUNC_6( &VAR_13, sizeof( VAR_13 ), VAR_2 );
   FUNC_4( VAR_2 );
  }
  FUNC_2( VAR_10);
  return VAR_13;
 }

 VAR_3++;
 VAR_4++;

 VAR_11 = FUNC_7(VAR_13+1);
 *VAR_9 = VAR_11;

 FUNC_5 (VAR_11, VAR_13, VAR_10);


 VAR_11[VAR_13] = 0;
 FUNC_2( VAR_10 );


 if ( VAR_12 && VAR_1 && VAR_1->integer == 1 ) {
  FUNC_0( "Writing %s to journal file.\n", VAR_8 );
  FUNC_6( &VAR_13, sizeof( VAR_13 ), VAR_2 );
  FUNC_6( VAR_11, VAR_13, VAR_2 );
  FUNC_4( VAR_2 );
 }
 return VAR_13;
}
