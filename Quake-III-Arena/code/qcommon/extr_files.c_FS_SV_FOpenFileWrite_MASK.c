
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t fileHandle_t ;
struct TYPE_10__ {scalar_t__ integer; } ;
struct TYPE_9__ {int string; } ;
struct TYPE_6__ {int o; } ;
struct TYPE_7__ {TYPE_1__ file; } ;
struct TYPE_8__ {TYPE_2__ handleFiles; void* handleSync; int name; void* zipFile; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char*) ;
 int VAR_0 ;
 char* FUNC_3 (int ,char const*,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 size_t FUNC_5 () ;
 int FUNC_6 (int ,char const*,int) ;
 int FUNC_7 (char*,char*) ;
 TYPE_5__* VAR_1 ;
 TYPE_4__* VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 void* VAR_5 ;
 int FUNC_8 (char*) ;

fileHandle_t FUNC_9( const char *VAR_6 ) {
 char *VAR_7;
 fileHandle_t VAR_8;

 if ( !VAR_3 ) {
  FUNC_1( VAR_0, "Filesystem call made without initialization\n" );
 }

 VAR_7 = FUNC_3( VAR_2->string, VAR_6, "" );
 VAR_7[FUNC_8(VAR_7)-1] = '\0';

 VAR_8 = FUNC_5();
 VAR_4[VAR_8].zipFile = VAR_5;

 if ( VAR_1->integer ) {
  FUNC_2( "FS_SV_FOpenFileWrite: %s\n", VAR_7 );
 }

 if( FUNC_4( VAR_7 ) ) {
  return 0;
 }

 FUNC_0( "writing to: %s\n", VAR_7 );
 VAR_4[VAR_8].handleFiles.file.o = FUNC_7( VAR_7, "wb" );

 FUNC_6( VAR_4[VAR_8].name, VAR_6, sizeof( VAR_4[VAR_8].name ) );

 VAR_4[VAR_8].handleSync = VAR_5;
 if (!VAR_4[VAR_8].handleFiles.file.o) {
  VAR_8 = 0;
 }
 return VAR_8;
}
