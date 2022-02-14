
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t fileHandle_t ;
struct TYPE_4__ {int z; } ;
struct TYPE_5__ {TYPE_1__ file; } ;
struct TYPE_6__ {scalar_t__ zipFile; TYPE_2__ handleFiles; int zipFilePos; scalar_t__ streamed; } ;
typedef int FILE ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (char*,long,size_t) ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (size_t,long,int) ;
 int VAR_4 ;
 int FUNC_4 (int *,long,int) ;
 TYPE_3__* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

int FUNC_7( fileHandle_t VAR_8, long VAR_9, int VAR_10 ) {
 int VAR_11;
 char VAR_12[65536];

 if ( !VAR_4 ) {
  FUNC_0( VAR_0, "Filesystem call made without initialization\n" );
  return -1;
 }

 if (VAR_5[VAR_8].streamed) {
  VAR_5[VAR_8].streamed = VAR_6;
  FUNC_3( VAR_8, VAR_9, VAR_10 );
  VAR_5[VAR_8].streamed = VAR_7;
 }

 if (VAR_5[VAR_8].zipFile == VAR_7) {
  if (VAR_9 == 0 && VAR_10 == 128) {

   FUNC_6(VAR_5[VAR_8].handleFiles.file.z, VAR_5[VAR_8].zipFilePos);
   return FUNC_5(VAR_5[VAR_8].handleFiles.file.z);
  } else if (VAR_9<65536) {

   FUNC_6(VAR_5[VAR_8].handleFiles.file.z, VAR_5[VAR_8].zipFilePos);
   FUNC_5(VAR_5[VAR_8].handleFiles.file.z);
   return FUNC_2(VAR_12, VAR_9, VAR_8);
  } else {
   FUNC_0( VAR_0, "ZIP FILE FSEEK NOT YET IMPLEMENTED\n" );
   return -1;
  }
 } else {
  FILE *VAR_13;
  VAR_13 = FUNC_1(VAR_8);
  switch( VAR_10 ) {
  case 130:
   VAR_11 = VAR_1;
   break;
  case 129:
   VAR_11 = VAR_2;
   break;
  case 128:
   VAR_11 = VAR_3;
   break;
  default:
   VAR_11 = VAR_1;
   FUNC_0( VAR_0, "Bad origin in FS_Seek\n" );
   break;
  }

  return FUNC_4( VAR_13, VAR_9, VAR_11 );
 }
}
