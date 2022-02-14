
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
struct TYPE_3__ {scalar_t__ iSyncPoint; int pFd; int syncFlags; } ;
typedef TYPE_1__ WalWriter ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,void*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(
  WalWriter *VAR_0,
  void *VAR_1,
  int VAR_2,
  sqlite3_int64 VAR_3
){
  int VAR_4;
  if( VAR_3<VAR_0->iSyncPoint && VAR_3+VAR_2>=VAR_0->iSyncPoint ){
    int VAR_5 = (int)(VAR_0->iSyncPoint - VAR_3);
    VAR_4 = FUNC_3(VAR_0->pFd, VAR_1, VAR_5, VAR_3);
    if( VAR_4 ) return VAR_4;
    VAR_3 += VAR_5;
    VAR_2 -= VAR_5;
    VAR_1 = (void*)(VAR_5 + (char*)VAR_1);
    FUNC_1( FUNC_0(VAR_0->syncFlags)!=0 );
    VAR_4 = FUNC_2(VAR_0->pFd, FUNC_0(VAR_0->syncFlags));
    if( VAR_2==0 || VAR_4 ) return VAR_4;
  }
  VAR_4 = FUNC_3(VAR_0->pFd, VAR_1, VAR_2, VAR_3);
  return VAR_4;
}
