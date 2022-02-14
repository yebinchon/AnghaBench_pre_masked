
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pIncr; scalar_t__ aMap; int pFd; int aBuffer; int aAlloc; } ;
typedef TYPE_1__ PmaReader ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(PmaReader *VAR_0){
  FUNC_2(VAR_0->aAlloc);
  FUNC_2(VAR_0->aBuffer);
  if( VAR_0->aMap ) FUNC_1(VAR_0->pFd, 0, VAR_0->aMap);
  FUNC_3(VAR_0->pIncr);
  FUNC_0(VAR_0, 0, sizeof(PmaReader));
}
