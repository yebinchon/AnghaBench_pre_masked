
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pgno; int hdrOffset; int * pBt; int * pDbPage; int aData; } ;
typedef int Pgno ;
typedef TYPE_1__ MemPage ;
typedef int DbPage ;
typedef int BtShared ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static MemPage *FUNC_2(DbPage *VAR_0, Pgno VAR_1, BtShared *VAR_2){
  MemPage *VAR_3 = (MemPage*)FUNC_1(VAR_0);
  VAR_3->aData = FUNC_0(VAR_0);
  VAR_3->pDbPage = VAR_0;
  VAR_3->pBt = VAR_2;
  VAR_3->pgno = VAR_1;
  VAR_3->hdrOffset = VAR_3->pgno==1 ? 100 : 0;
  return VAR_3;
}
