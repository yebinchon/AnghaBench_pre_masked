
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ nRef; scalar_t__ h; int exclMask; int sharedMask; int mutex; } ;
typedef TYPE_2__ unixShmNode ;
struct TYPE_8__ {TYPE_1__* pInode; } ;
typedef TYPE_3__ unixFile ;
typedef int u16 ;
struct flock {int l_type; int l_start; int l_len; int l_whence; } ;
struct TYPE_6__ {TYPE_2__* pShmNode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,struct flock*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(
  unixFile *VAR_7,
  int VAR_8,
  int VAR_9,
  int VAR_10
){
  unixShmNode *VAR_11;
  struct flock VAR_12;
  int VAR_13 = VAR_5;


  VAR_11 = VAR_7->pInode->pShmNode;
  FUNC_1( VAR_11->nRef==0 || FUNC_3(VAR_11->mutex) );


  FUNC_1( VAR_10==1 || VAR_8!=VAR_0 );


  FUNC_1( VAR_10>=1 && VAR_10<=VAR_6 );

  if( VAR_11->h>=0 ){

    VAR_12.l_type = VAR_8;
    VAR_12.l_whence = VAR_3;
    VAR_12.l_start = VAR_9;
    VAR_12.l_len = VAR_10;
    VAR_13 = FUNC_2(VAR_11->h, &VAR_12, VAR_7);
    VAR_13 = (VAR_13!=(-1)) ? VAR_5 : VAR_4;
  }
  return VAR_13;
}
