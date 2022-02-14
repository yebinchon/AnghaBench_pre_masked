
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct SrcList_item {TYPE_4__* pSelect; TYPE_2__* pTab; } ;
struct TYPE_9__ {int * pParse; } ;
typedef TYPE_1__ Walker ;
struct TYPE_10__ {int tabFlags; } ;
typedef TYPE_2__ Table ;
struct TYPE_12__ {int selFlags; struct TYPE_12__* pPrior; TYPE_3__* pSrc; } ;
struct TYPE_11__ {int nSrc; struct SrcList_item* a; } ;
typedef TYPE_3__ SrcList ;
typedef TYPE_4__ Select ;
typedef int Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_2__*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_2(Walker *VAR_3, Select *VAR_4){
  Parse *VAR_5;
  int VAR_6;
  SrcList *VAR_7;
  struct SrcList_item *VAR_8;

  FUNC_0( VAR_4->selFlags & VAR_1 );
  FUNC_0( (VAR_4->selFlags & VAR_0)==0 );
  VAR_4->selFlags |= VAR_0;
  VAR_5 = VAR_3->pParse;
  VAR_7 = VAR_4->pSrc;
  for(VAR_6=0, VAR_8=VAR_7->a; VAR_6<VAR_7->nSrc; VAR_6++, VAR_8++){
    Table *VAR_9 = VAR_8->pTab;
    FUNC_0( VAR_9!=0 );
    if( (VAR_9->tabFlags & VAR_2)!=0 ){

      Select *VAR_10 = VAR_8->pSelect;
      if( VAR_10 ){
        while( VAR_10->pPrior ) VAR_10 = VAR_10->pPrior;
        FUNC_1(VAR_5, VAR_9, VAR_10);
      }
    }
  }
}
