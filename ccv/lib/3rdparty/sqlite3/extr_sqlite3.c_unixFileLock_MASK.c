
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bProcessLock; scalar_t__ nLock; } ;
typedef TYPE_1__ unixInodeInfo ;
struct TYPE_6__ {int ctrlFlags; int h; TYPE_1__* pInode; } ;
typedef TYPE_2__ unixFile ;
struct flock {int l_type; int l_len; int l_start; int l_whence; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct flock*,TYPE_2__*) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(unixFile *VAR_6, struct flock *VAR_7){
  int VAR_8;
  unixInodeInfo *VAR_9 = VAR_6->pInode;
  FUNC_0( FUNC_2() );
  FUNC_0( VAR_9!=0 );
  if( (VAR_6->ctrlFlags & (VAR_4|VAR_5))==VAR_4 ){
    if( VAR_9->bProcessLock==0 ){
      struct flock VAR_10;
      FUNC_0( VAR_9->nLock==0 );
      VAR_10.l_whence = VAR_1;
      VAR_10.l_start = VAR_2;
      VAR_10.l_len = VAR_3;
      VAR_10.l_type = VAR_0;
      VAR_8 = FUNC_1(VAR_6->h, &VAR_10, VAR_6);
      if( VAR_8<0 ) return VAR_8;
      VAR_9->bProcessLock = 1;
      VAR_9->nLock++;
    }else{
      VAR_8 = 0;
    }
  }else{
    VAR_8 = FUNC_1(VAR_6->h, VAR_7, VAR_6);
  }
  return VAR_8;
}
