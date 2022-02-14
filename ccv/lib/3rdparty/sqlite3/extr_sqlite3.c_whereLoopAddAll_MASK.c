
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_16__ {int jointype; } ;
struct SrcList_item {int iCursor; TYPE_2__ fg; int pTab; } ;
struct TYPE_17__ {scalar_t__ mallocFailed; } ;
typedef TYPE_3__ sqlite3 ;
struct TYPE_18__ {TYPE_5__* pNew; TYPE_6__* pWInfo; } ;
typedef TYPE_4__ WhereLoopBuilder ;
struct TYPE_19__ {int iTab; int maskSelf; } ;
typedef TYPE_5__ WhereLoop ;
struct TYPE_20__ {size_t nLevel; int sMaskSet; TYPE_1__* pParse; TYPE_7__* pTabList; } ;
typedef TYPE_6__ WhereInfo ;
struct TYPE_21__ {struct SrcList_item* a; } ;
struct TYPE_15__ {TYPE_3__* db; } ;
typedef TYPE_7__ SrcList ;
typedef int Bitmask ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;
 int FUNC_4 (TYPE_4__*,int ,int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_7(WhereLoopBuilder *VAR_3){
  WhereInfo *VAR_4 = VAR_3->pWInfo;
  Bitmask VAR_5 = 0;
  Bitmask VAR_6 = 0;
  int VAR_7;
  SrcList *VAR_8 = VAR_4->pTabList;
  struct SrcList_item *VAR_9;
  struct SrcList_item *VAR_10 = &VAR_8->a[VAR_4->nLevel];
  sqlite3 *VAR_11 = VAR_4->pParse->db;
  int VAR_12 = VAR_2;
  WhereLoop *VAR_13;
  u8 VAR_14 = 0;


  VAR_13 = VAR_3->pNew;
  FUNC_6(VAR_13);
  for(VAR_7=0, VAR_9=VAR_8->a; VAR_9<VAR_10; VAR_7++, VAR_9++){
    Bitmask VAR_15 = 0;
    VAR_13->iTab = VAR_7;
    VAR_13->maskSelf = FUNC_1(&VAR_4->sMaskSet, VAR_9->iCursor);
    if( ((VAR_9->fg.jointype|VAR_14) & (VAR_1|VAR_0))!=0 ){


      VAR_5 = VAR_6;
    }
    VAR_14 = VAR_9->fg.jointype;

    if( FUNC_0(VAR_9->pTab) ){
      struct SrcList_item *VAR_16;
      for(VAR_16=&VAR_9[1]; VAR_16<VAR_10; VAR_16++){
        if( VAR_15 || (VAR_16->fg.jointype & (VAR_1|VAR_0)) ){
          VAR_15 |= FUNC_1(&VAR_4->sMaskSet, VAR_16->iCursor);
        }
      }
      VAR_12 = FUNC_4(VAR_3, VAR_5, VAR_15);
    }else

    {
      VAR_12 = FUNC_2(VAR_3, VAR_5);
    }
    if( VAR_12==VAR_2 ){
      VAR_12 = FUNC_3(VAR_3, VAR_5, VAR_15);
    }
    VAR_6 |= VAR_13->maskSelf;
    if( VAR_12 || VAR_11->mallocFailed ) break;
  }

  FUNC_5(VAR_11, VAR_13);
  return VAR_12;
}
