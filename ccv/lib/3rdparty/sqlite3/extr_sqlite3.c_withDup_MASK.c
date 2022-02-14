
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_7__ {int nCte; TYPE_1__* a; } ;
typedef TYPE_2__ With ;
struct TYPE_6__ {int zName; int pCols; int pSelect; } ;


 TYPE_2__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static With *FUNC_4(sqlite3 *VAR_0, With *VAR_1){
  With *VAR_2 = 0;
  if( VAR_1 ){
    int VAR_3 = sizeof(*VAR_1) + sizeof(VAR_1->a[0]) * (VAR_1->nCte-1);
    VAR_2 = FUNC_0(VAR_0, VAR_3);
    if( VAR_2 ){
      int VAR_4;
      VAR_2->nCte = VAR_1->nCte;
      for(VAR_4=0; VAR_4<VAR_1->nCte; VAR_4++){
        VAR_2->a[VAR_4].pSelect = FUNC_3(VAR_0, VAR_1->a[VAR_4].pSelect, 0);
        VAR_2->a[VAR_4].pCols = FUNC_2(VAR_0, VAR_1->a[VAR_4].pCols, 0);
        VAR_2->a[VAR_4].zName = FUNC_1(VAR_0, VAR_1->a[VAR_4].zName);
      }
    }
  }
  return VAR_2;
}
