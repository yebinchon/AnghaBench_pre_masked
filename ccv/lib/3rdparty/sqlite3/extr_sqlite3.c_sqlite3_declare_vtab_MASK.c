
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_12__ ;


struct TYPE_28__ {int mutex; int mallocFailed; TYPE_5__* pVtabCtx; } ;
typedef TYPE_4__ sqlite3 ;
typedef int sParse ;
struct TYPE_29__ {int bDeclared; TYPE_3__* pVTable; TYPE_6__* pTab; } ;
typedef TYPE_5__ VtabCtx ;
struct TYPE_30__ {int tabFlags; TYPE_8__* pIndex; scalar_t__ aCol; scalar_t__ nCol; int pSelect; } ;
typedef TYPE_6__ Table ;
struct TYPE_32__ {scalar_t__ pNext; TYPE_6__* pTable; } ;
struct TYPE_31__ {int declareVtab; int nQueryLoop; TYPE_6__* pNewTable; scalar_t__ pVdbe; TYPE_4__* db; } ;
struct TYPE_27__ {TYPE_2__* pMod; } ;
struct TYPE_26__ {TYPE_1__* pModule; } ;
struct TYPE_25__ {scalar_t__ xUpdate; } ;
struct TYPE_24__ {int nKeyCol; } ;
typedef TYPE_7__ Parse ;
typedef TYPE_8__ Index ;


 scalar_t__ FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_7__*,int ,int) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*,char*) ;
 int FUNC_6 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_4__*,int,char*,char*) ;
 int FUNC_9 (TYPE_7__*) ;
 TYPE_12__* FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_7__*,char const*,char**) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

int FUNC_16(sqlite3 *VAR_6, const char *VAR_7){
  VtabCtx *VAR_8;
  int VAR_9 = VAR_3;
  Table *VAR_10;
  char *VAR_11 = 0;
  Parse VAR_12;






  FUNC_14(VAR_6->mutex);
  VAR_8 = VAR_6->pVtabCtx;
  if( !VAR_8 || VAR_8->bDeclared ){
    FUNC_7(VAR_6, VAR_1);
    FUNC_15(VAR_6->mutex);
    return VAR_2;
  }
  VAR_10 = VAR_8->pTab;
  FUNC_2( FUNC_1(VAR_10) );

  FUNC_3(&VAR_12, 0, sizeof(VAR_12));
  VAR_12.declareVtab = 1;
  VAR_12.db = VAR_6;
  VAR_12.nQueryLoop = 1;
  if( VAR_3==FUNC_11(&VAR_12, VAR_7, &VAR_11)
   && VAR_12.pNewTable
   && !VAR_6->mallocFailed
   && !VAR_12.pNewTable->pSelect
   && !FUNC_1(VAR_12.pNewTable)
  ){
    if( !VAR_10->aCol ){
      Table *VAR_13 = VAR_12.pNewTable;
      Index *VAR_14;
      VAR_10->aCol = VAR_13->aCol;
      VAR_10->nCol = VAR_13->nCol;
      VAR_10->tabFlags |= VAR_13->tabFlags & (VAR_5|VAR_4);
      VAR_13->nCol = 0;
      VAR_13->aCol = 0;
      FUNC_2( VAR_10->pIndex==0 );
      FUNC_2( FUNC_0(VAR_13) || FUNC_10(VAR_13)!=0 );
      if( !FUNC_0(VAR_13)
       && VAR_8->pVTable->pMod->pModule->xUpdate!=0
       && FUNC_10(VAR_13)->nKeyCol!=1
      ){


        VAR_9 = VAR_0;
      }
      VAR_14 = VAR_13->pIndex;
      if( VAR_14 ){
        FUNC_2( VAR_14->pNext==0 );
        VAR_10->pIndex = VAR_14;
        VAR_13->pIndex = 0;
        VAR_14->pTable = VAR_10;
      }
    }
    VAR_8->bDeclared = 1;
  }else{
    FUNC_8(VAR_6, VAR_0, (VAR_11 ? "%s" : 0), VAR_11);
    FUNC_5(VAR_6, VAR_11);
    VAR_9 = VAR_0;
  }
  VAR_12.declareVtab = 0;

  if( VAR_12.pVdbe ){
    FUNC_13(VAR_12.pVdbe);
  }
  FUNC_6(VAR_6, VAR_12.pNewTable);
  FUNC_9(&VAR_12);

  FUNC_2( (VAR_9&0xff)==VAR_9 );
  VAR_9 = FUNC_4(VAR_6, VAR_9);
  FUNC_15(VAR_6->mutex);
  return VAR_9;
}
