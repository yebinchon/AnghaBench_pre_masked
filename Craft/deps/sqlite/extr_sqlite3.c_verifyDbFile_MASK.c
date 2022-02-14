
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int ctrlFlags; int zPath; TYPE_2__* pInode; int h; } ;
typedef TYPE_3__ unixFile ;
struct stat {int st_nlink; scalar_t__ st_ino; } ;
struct TYPE_5__ {scalar_t__ ino; } ;
struct TYPE_6__ {TYPE_1__ fileId; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct stat*) ;
 int FUNC_1 (int ,struct stat*) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_3(unixFile *VAR_3){
  struct stat VAR_4;
  int VAR_5;
  if( VAR_3->ctrlFlags & VAR_2 ){


    return;
  }
  VAR_5 = FUNC_0(VAR_3->h, &VAR_4);
  if( VAR_5!=0 ){
    FUNC_2(VAR_0, "cannot fstat db file %s", VAR_3->zPath);
    VAR_3->ctrlFlags |= VAR_2;
    return;
  }
  if( VAR_4.st_nlink==0 && (VAR_3->ctrlFlags & VAR_1)==0 ){
    FUNC_2(VAR_0, "file unlinked while open: %s", VAR_3->zPath);
    VAR_3->ctrlFlags |= VAR_2;
    return;
  }
  if( VAR_4.st_nlink>1 ){
    FUNC_2(VAR_0, "multiple links to file: %s", VAR_3->zPath);
    VAR_3->ctrlFlags |= VAR_2;
    return;
  }
  if( VAR_3->pInode!=0
   && ((VAR_5 = FUNC_1(VAR_3->zPath, &VAR_4))!=0
       || VAR_4.st_ino!=VAR_3->pInode->fileId.ino)
  ){
    FUNC_2(VAR_0, "file renamed while open: %s", VAR_3->zPath);
    VAR_3->ctrlFlags |= VAR_2;
    return;
  }
}
