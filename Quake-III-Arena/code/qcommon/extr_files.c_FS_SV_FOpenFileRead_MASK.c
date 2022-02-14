
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t fileHandle_t ;
struct TYPE_14__ {int string; } ;
struct TYPE_13__ {int string; } ;
struct TYPE_12__ {scalar_t__ integer; } ;
struct TYPE_11__ {int string; } ;
struct TYPE_8__ {void* o; } ;
struct TYPE_9__ {TYPE_1__ file; } ;
struct TYPE_10__ {TYPE_2__ handleFiles; void* handleSync; int name; void* zipFile; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 char* FUNC_2 (int ,char const*,char*) ;
 size_t FUNC_3 () ;
 int FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char const*,int) ;
 int FUNC_7 () ;
 void* FUNC_8 (char*,char*) ;
 TYPE_7__* VAR_1 ;
 TYPE_6__* VAR_2 ;
 TYPE_5__* VAR_3 ;
 TYPE_4__* VAR_4 ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 void* VAR_7 ;
 int FUNC_9 (char*) ;

int FUNC_10( const char *VAR_8, fileHandle_t *VAR_9 ) {
 char *VAR_10;
 fileHandle_t VAR_11 = 0;

 if ( !VAR_5 ) {
  FUNC_0( VAR_0, "Filesystem call made without initialization\n" );
 }

 VAR_11 = FUNC_3();
 VAR_6[VAR_11].zipFile = VAR_7;

 FUNC_6( VAR_6[VAR_11].name, VAR_8, sizeof( VAR_6[VAR_11].name ) );


 FUNC_7();


 VAR_10 = FUNC_2( VAR_4->string, VAR_8, "" );

 VAR_10[FUNC_9(VAR_10)-1] = '\0';

 if ( VAR_3->integer ) {
  FUNC_1( "FS_SV_FOpenFileRead (fs_homepath): %s\n", VAR_10 );
 }

 VAR_6[VAR_11].handleFiles.file.o = FUNC_8( VAR_10, "rb" );
 VAR_6[VAR_11].handleSync = VAR_7;
  if (!VAR_6[VAR_11].handleFiles.file.o)
  {

    if (FUNC_5(VAR_4->string,VAR_1->string))
    {

      VAR_10 = FUNC_2( VAR_1->string, VAR_8, "" );
      VAR_10[FUNC_9(VAR_10)-1] = '\0';

      if ( VAR_3->integer )
      {
        FUNC_1( "FS_SV_FOpenFileRead (fs_basepath): %s\n", VAR_10 );
      }

      VAR_6[VAR_11].handleFiles.file.o = FUNC_8( VAR_10, "rb" );
      VAR_6[VAR_11].handleSync = VAR_7;

      if ( !VAR_6[VAR_11].handleFiles.file.o )
      {
        VAR_11 = 0;
      }
    }
  }

 if (!VAR_6[VAR_11].handleFiles.file.o) {

    VAR_10 = FUNC_2( VAR_2->string, VAR_8, "" );
    VAR_10[FUNC_9(VAR_10)-1] = '\0';

    if (VAR_3->integer)
    {
      FUNC_1( "FS_SV_FOpenFileRead (fs_cdpath) : %s\n", VAR_10 );
    }

   VAR_6[VAR_11].handleFiles.file.o = FUNC_8( VAR_10, "rb" );
   VAR_6[VAR_11].handleSync = VAR_7;

   if( !VAR_6[VAR_11].handleFiles.file.o ) {
     VAR_11 = 0;
   }
  }

 *VAR_9 = VAR_11;
 if (VAR_11) {
  return FUNC_4(VAR_11);
 }
 return 0;
}
