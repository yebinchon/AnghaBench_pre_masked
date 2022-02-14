
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t fileHandle_t ;
struct TYPE_4__ {int * o; } ;
struct TYPE_5__ {TYPE_1__ file; } ;
struct TYPE_6__ {scalar_t__ zipFile; TYPE_2__ handleFiles; } ;
typedef int FILE ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_3__* VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static FILE *FUNC_1( fileHandle_t VAR_4 ) {
 if ( VAR_4 < 0 || VAR_4 > VAR_1 ) {
  FUNC_0( VAR_0, "FS_FileForHandle: out of reange" );
 }
 if (VAR_2[VAR_4].zipFile == VAR_3) {
  FUNC_0( VAR_0, "FS_FileForHandle: can't get FILE on zip file" );
 }
 if ( ! VAR_2[VAR_4].handleFiles.file.o ) {
  FUNC_0( VAR_0, "FS_FileForHandle: NULL" );
 }

 return VAR_2[VAR_4].handleFiles.file.o;
}
