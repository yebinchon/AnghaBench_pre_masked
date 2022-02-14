
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* pNext; } ;
struct TYPE_5__ {TYPE_2__* pCursor; int mutex; } ;
typedef TYPE_1__ BtShared ;
typedef TYPE_2__ BtCursor ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(BtShared *VAR_0){
  BtCursor *VAR_1;
  FUNC_0( FUNC_2(VAR_0->mutex) );
  for(VAR_1=VAR_0->pCursor; VAR_1; VAR_1=VAR_1->pNext){
    FUNC_1(VAR_1);
  }
}
