
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int nOverflow; int* aiOvfl; int ** apOvfl; TYPE_1__* pBt; } ;
struct TYPE_5__ {int mutex; } ;
typedef TYPE_2__ MemPage ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u8 *FUNC_3(MemPage *VAR_0, int VAR_1){
  int VAR_2;
  FUNC_0( FUNC_2(VAR_0->pBt->mutex) );
  for(VAR_2=VAR_0->nOverflow-1; VAR_2>=0; VAR_2--){
    int VAR_3;
    VAR_3 = VAR_0->aiOvfl[VAR_2];
    if( VAR_3<=VAR_1 ){
      if( VAR_3==VAR_1 ){
        return VAR_0->apOvfl[VAR_2];
      }
      VAR_1--;
    }
  }
  return FUNC_1(VAR_0, VAR_1);
}
