
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t fileHandle_t ;
typedef int byte ;
struct TYPE_4__ {int z; int o; } ;
struct TYPE_5__ {TYPE_1__ file; } ;
struct TYPE_6__ {scalar_t__ zipFile; TYPE_2__ handleFiles; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,void*,int) ;

int FUNC_3( void *VAR_5, int VAR_6, fileHandle_t VAR_7 ) {
 int VAR_8, VAR_9;
 int VAR_10;
 byte *VAR_11;
 int VAR_12;

 if ( !VAR_2 ) {
  FUNC_0( VAR_0, "Filesystem call made without initialization\n" );
 }

 if ( !VAR_7 ) {
  return 0;
 }

 VAR_11 = (byte *)VAR_5;
 VAR_1 += VAR_6;

 if (VAR_3[VAR_7].zipFile == VAR_4) {
  VAR_9 = VAR_6;
  VAR_12 = 0;
  while (VAR_9) {
   VAR_8 = VAR_9;
   VAR_10 = FUNC_1 (VAR_11, 1, VAR_8, VAR_3[VAR_7].handleFiles.file.o);
   if (VAR_10 == 0) {


    if (!VAR_12) {
     VAR_12 = 1;
    } else {
     return VAR_6-VAR_9;
    }
   }

   if (VAR_10 == -1) {
    FUNC_0 (VAR_0, "FS_Read: -1 bytes read");
   }

   VAR_9 -= VAR_10;
   VAR_11 += VAR_10;
  }
  return VAR_6;
 } else {
  return FUNC_2(VAR_3[VAR_7].handleFiles.file.z, VAR_5, VAR_6);
 }
}
