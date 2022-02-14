
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sectorSize; int deviceCharacteristics; int ctrlFlags; } ;
typedef TYPE_1__ unixFile ;
typedef int sqlite3_file ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(sqlite3_file *VAR_2){
  unixFile *VAR_3 = (unixFile*)VAR_2;
  int VAR_4 = 0;




  if( VAR_3->ctrlFlags & VAR_1 ){
    VAR_4 |= VAR_0;
  }
  return VAR_4;
}
