
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ctrlFlags; int zPath; int h; } ;
typedef TYPE_1__ unixFile ;
struct stat {int st_nlink; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,struct stat*) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_3(unixFile *VAR_2){
  struct stat VAR_3;
  int VAR_4;


  if( VAR_2->ctrlFlags & VAR_1 ) return;

  VAR_4 = FUNC_1(VAR_2->h, &VAR_3);
  if( VAR_4!=0 ){
    FUNC_2(VAR_0, "cannot fstat db file %s", VAR_2->zPath);
    return;
  }
  if( VAR_3.st_nlink==0 ){
    FUNC_2(VAR_0, "file unlinked while open: %s", VAR_2->zPath);
    return;
  }
  if( VAR_3.st_nlink>1 ){
    FUNC_2(VAR_0, "multiple links to file: %s", VAR_2->zPath);
    return;
  }
  if( FUNC_0(VAR_2) ){
    FUNC_2(VAR_0, "file renamed while open: %s", VAR_2->zPath);
    return;
  }
}
