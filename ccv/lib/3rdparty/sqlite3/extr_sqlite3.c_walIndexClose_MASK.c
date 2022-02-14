
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ exclusiveMode; int nWiData; int pDbFd; scalar_t__* apWiData; scalar_t__ bShmUnreliable; } ;
typedef TYPE_1__ Wal ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(Wal *VAR_1, int VAR_2){
  if( VAR_1->exclusiveMode==VAR_0 || VAR_1->bShmUnreliable ){
    int VAR_3;
    for(VAR_3=0; VAR_3<VAR_1->nWiData; VAR_3++){
      FUNC_1((void *)VAR_1->apWiData[VAR_3]);
      VAR_1->apWiData[VAR_3] = 0;
    }
  }
  if( VAR_1->exclusiveMode!=VAR_0 ){
    FUNC_0(VAR_1->pDbFd, VAR_2);
  }
}
