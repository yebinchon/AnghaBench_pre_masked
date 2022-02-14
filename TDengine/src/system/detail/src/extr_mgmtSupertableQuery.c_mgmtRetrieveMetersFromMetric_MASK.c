
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int tSkipListNode ;
struct TYPE_19__ {scalar_t__ num; int pRes; int member_0; } ;
typedef TYPE_1__ tQueryResultset ;
typedef size_t int32_t ;
struct TYPE_23__ {scalar_t__ nSize; } ;
struct TYPE_22__ {int cond; size_t condLen; int tableCond; int tableCondLen; int rel; int meterId; } ;
struct TYPE_21__ {int* metaElem; } ;
struct TYPE_20__ {scalar_t__ numOfMeters; int meterId; TYPE_6__* pSkipList; } ;
typedef TYPE_2__ STabObj ;
typedef TYPE_3__ SMetricMetaMsg ;
typedef TYPE_4__ SMetricMetaElemMsg ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int,int) ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (TYPE_1__*,char*,int,TYPE_2__*) ;
 size_t FUNC_4 (TYPE_2__*,TYPE_1__*,char*,size_t) ;
 TYPE_2__* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_6__*,int ***,int *,int *) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (char*,size_t,char*) ;
 int FUNC_14 (char*) ;

int FUNC_15(SMetricMetaMsg* VAR_4, int32_t VAR_5, tQueryResultset* VAR_6) {
  SMetricMetaElemMsg* VAR_7 = (SMetricMetaElemMsg*)((char*)VAR_4 + VAR_4->metaElem[VAR_5]);
  STabObj* VAR_8 = FUNC_5(VAR_7->meterId);
  char* VAR_9 = ((void*)0);
  char* VAR_10 = ((void*)0);


  if (VAR_8->pSkipList == ((void*)0) || VAR_8->pSkipList->nSize == 0) {
    FUNC_0(VAR_8->numOfMeters == 0);
    return VAR_0;
  }

  char* VAR_11 = (char*)VAR_4 + VAR_7->cond;
  int32_t VAR_12 = VAR_7->condLen;


  if (VAR_12 > 0) {
    VAR_9 = FUNC_1(1, (VAR_12 + 1) * VAR_1);

    FUNC_13(VAR_11, VAR_12 * VAR_1, VAR_9);
    VAR_12 = FUNC_8(VAR_9) + 1;
    FUNC_2("metric:%s len:%d, metric query condition:%s", VAR_8->meterId, VAR_12, VAR_9);
  }

  char* VAR_13 = (char*)VAR_4 + VAR_7->tableCond;

  if (VAR_7->tableCondLen > 0) {
    VAR_10 = FUNC_1(1, VAR_7->tableCondLen + 1);
    FUNC_9(VAR_10, VAR_13, VAR_7->tableCondLen);

    FUNC_2("metric:%s rel:%d, len:%d, table name cond:%s", VAR_8->meterId, VAR_7->rel, VAR_7->tableCondLen,
           VAR_10);
  }

  if (VAR_7->tableCondLen > 0 || VAR_12 > 0) {
    FUNC_3(VAR_6, VAR_10, VAR_7->tableCondLen, VAR_8);

    bool VAR_14 = (VAR_6->num == 0 && VAR_7->rel == VAR_2);

    if (!VAR_14 && VAR_12 > 0) {
      tQueryResultset VAR_15 = {0};

      int32_t VAR_16 = FUNC_4(VAR_8, &VAR_15, VAR_9, VAR_12);
      if (VAR_16 != VAR_0) {
        FUNC_14(VAR_9);
        FUNC_14(VAR_10);

        return VAR_16;
      }


      FUNC_0(VAR_7->rel == VAR_2 || VAR_7->rel == VAR_3);

      if (VAR_7->rel == VAR_2) {
        if (VAR_15.num == 0 || VAR_6->num == 0) {
          FUNC_10(VAR_6);
        } else {
          FUNC_6(VAR_6, &VAR_15);
        }
      } else {
        FUNC_7(VAR_6, &VAR_15);
      }

      FUNC_10(&VAR_15);
    }
  } else {
    FUNC_2("metric:%s retrieve all meter, no query condition", VAR_8->meterId);
    VAR_6->num = FUNC_11(VAR_8->pSkipList, (tSkipListNode***)&VAR_6->pRes, ((void*)0), ((void*)0));
    FUNC_12(VAR_6);
  }

  FUNC_14(VAR_9);
  FUNC_14(VAR_10);

  FUNC_2("metric:%s numOfRes:%d", VAR_8->meterId, VAR_6->num);
  return VAR_0;
}
