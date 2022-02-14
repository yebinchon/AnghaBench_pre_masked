
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bProcessLock; scalar_t__ nLock; } ;
typedef TYPE_1__ unixInodeInfo ;
struct TYPE_5__ {int ctrlFlags; int h; TYPE_1__* pInode; } ;
typedef TYPE_2__ unixFile ;
struct flock {int l_type; int l_len; int l_start; int l_whence; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,struct flock*) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(unixFile *VAR_7, struct flock *VAR_8){
  int VAR_9;
  unixInodeInfo *VAR_10 = VAR_7->pInode;
  FUNC_0( FUNC_2() );
  FUNC_0( VAR_10!=0 );
  if( ((VAR_7->ctrlFlags & VAR_5)!=0 || VAR_10->bProcessLock)
   && ((VAR_7->ctrlFlags & VAR_6)==0)
  ){
    if( VAR_10->bProcessLock==0 ){
      struct flock VAR_11;
      FUNC_0( VAR_10->nLock==0 );
      VAR_11.l_whence = VAR_2;
      VAR_11.l_start = VAR_3;
      VAR_11.l_len = VAR_4;
      VAR_11.l_type = VAR_1;
      VAR_9 = FUNC_1(VAR_7->h, VAR_0, &VAR_11);
      if( VAR_9<0 ) return VAR_9;
      VAR_10->bProcessLock = 1;
      VAR_10->nLock++;
    }else{
      VAR_9 = 0;
    }
  }else{
    VAR_9 = FUNC_1(VAR_7->h, VAR_0, VAR_8);
  }
  return VAR_9;
}
