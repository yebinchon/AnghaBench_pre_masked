
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* qboolean ;
typedef int fsMode_t ;
typedef int fileHandle_t ;
struct TYPE_4__ {int o; int z; } ;
struct TYPE_5__ {TYPE_1__ file; } ;
struct TYPE_6__ {scalar_t__ zipFile; int fileSize; void* handleSync; void* streamed; TYPE_2__ handleFiles; int baseOffset; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;


 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int*,scalar_t__) ;
 int FUNC_3 (char const*) ;


 int FUNC_4 (int,int) ;
 TYPE_3__* VAR_1 ;
 int FUNC_5 (int ) ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ) ;

int FUNC_7( const char *VAR_4, fileHandle_t *VAR_5, fsMode_t VAR_6 ) {
 int VAR_7;
 qboolean VAR_8;

 VAR_8 = VAR_2;

 switch( VAR_6 ) {
 case 129:
  VAR_7 = FUNC_2( VAR_4, VAR_5, VAR_3 );
  break;
 case 128:
  *VAR_5 = FUNC_3( VAR_4 );
  VAR_7 = 0;
  if (*VAR_5 == 0) {
   VAR_7 = -1;
  }
  break;
 case 130:
  VAR_8 = VAR_3;
 case 131:
  *VAR_5 = FUNC_1( VAR_4 );
  VAR_7 = 0;
  if (*VAR_5 == 0) {
   VAR_7 = -1;
  }
  break;
 default:
  FUNC_0( VAR_0, "FSH_FOpenFile: bad mode" );
  return -1;
 }

 if (!VAR_5) {
  return VAR_7;
 }

 if ( *VAR_5 ) {
  if (VAR_1[*VAR_5].zipFile == VAR_3) {
   VAR_1[*VAR_5].baseOffset = FUNC_6(VAR_1[*VAR_5].handleFiles.file.z);
  } else {
   VAR_1[*VAR_5].baseOffset = FUNC_5(VAR_1[*VAR_5].handleFiles.file.o);
  }
  VAR_1[*VAR_5].fileSize = VAR_7;
  VAR_1[*VAR_5].streamed = VAR_2;

  if (VAR_6 == 129) {
   FUNC_4( *VAR_5, 0x4000 );
   VAR_1[*VAR_5].streamed = VAR_3;
  }
 }
 VAR_1[*VAR_5].handleSync = VAR_8;

 return VAR_7;
}
