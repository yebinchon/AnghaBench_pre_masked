
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


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 char* FUNC_2 (int ,int ,char const*) ;
 scalar_t__ FUNC_3 (char*) ;
 size_t FUNC_4 () ;
 int FUNC_5 (int ,char const*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,char*) ;
 TYPE_5__* VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 void* VAR_6 ;

fileHandle_t FUNC_8( const char *VAR_7 ) {
 char *VAR_8;
 fileHandle_t VAR_9;

 if ( !VAR_4 ) {
  FUNC_0( VAR_0, "Filesystem call made without initialization\n" );
 }

 VAR_9 = FUNC_4();
 VAR_5[VAR_9].zipFile = VAR_6;

 FUNC_5( VAR_5[VAR_9].name, VAR_7, sizeof( VAR_5[VAR_9].name ) );


 FUNC_6();

 VAR_8 = FUNC_2( VAR_3->string, VAR_2, VAR_7 );

 if ( VAR_1->integer ) {
  FUNC_1( "FS_FOpenFileAppend: %s\n", VAR_8 );
 }

 if( FUNC_3( VAR_8 ) ) {
  return 0;
 }

 VAR_5[VAR_9].handleFiles.file.o = FUNC_7( VAR_8, "ab" );
 VAR_5[VAR_9].handleSync = VAR_6;
 if (!VAR_5[VAR_9].handleFiles.file.o) {
  VAR_9 = 0;
 }
 return VAR_9;
}
