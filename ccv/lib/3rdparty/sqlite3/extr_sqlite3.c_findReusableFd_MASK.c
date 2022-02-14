
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dev; scalar_t__ ino; } ;
struct TYPE_7__ {TYPE_3__* pUnused; struct TYPE_7__* pNext; TYPE_1__ fileId; } ;
typedef TYPE_2__ unixInodeInfo ;
typedef scalar_t__ u64 ;
struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;
struct TYPE_8__ {int flags; struct TYPE_8__* pNext; } ;
typedef TYPE_3__ UnixUnusedFd ;


 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*,struct stat*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static UnixUnusedFd *FUNC_3(const char *VAR_2, int VAR_3){
  UnixUnusedFd *VAR_4 = 0;







  struct stat VAR_5;

  FUNC_1();
  if( VAR_1>0 && 0==FUNC_0(VAR_2, &VAR_5) ){
    unixInodeInfo *VAR_6;

    VAR_6 = VAR_0;
    while( VAR_6 && (VAR_6->fileId.dev!=VAR_5.st_dev
                     || VAR_6->fileId.ino!=(u64)VAR_5.st_ino) ){
       VAR_6 = VAR_6->pNext;
    }
    if( VAR_6 ){
      UnixUnusedFd **VAR_7;
      for(VAR_7=&VAR_6->pUnused; *VAR_7 && (*VAR_7)->flags!=VAR_3; VAR_7=&((*VAR_7)->pNext));
      VAR_4 = *VAR_7;
      if( VAR_4 ){
        VAR_1--;
        *VAR_7 = VAR_4->pNext;
      }
    }
  }
  FUNC_2();

  return VAR_4;
}
