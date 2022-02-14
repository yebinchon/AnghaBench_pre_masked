
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int usableSize; } ;
typedef int Pgno ;
typedef TYPE_1__ BtShared ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static Pgno FUNC_3(BtShared *VAR_0, Pgno VAR_1, Pgno VAR_2){
  int VAR_3;
  Pgno VAR_4;
  Pgno VAR_5;

  VAR_3 = VAR_0->usableSize/5;
  VAR_4 = (VAR_2-VAR_1+FUNC_2(VAR_0, VAR_1)+VAR_3)/VAR_3;
  VAR_5 = VAR_1 - VAR_2 - VAR_4;
  if( VAR_1>FUNC_0(VAR_0) && VAR_5<FUNC_0(VAR_0) ){
    VAR_5--;
  }
  while( FUNC_1(VAR_0, VAR_5) || VAR_5==FUNC_0(VAR_0) ){
    VAR_5--;
  }

  return VAR_5;
}
