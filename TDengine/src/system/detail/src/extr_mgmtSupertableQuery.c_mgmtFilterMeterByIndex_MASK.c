
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tSQLBinaryExpr ;
typedef int tQueryResultset ;
typedef int int32_t ;
struct TYPE_8__ {TYPE_2__* pExtInfo; int setupInfoFn; int fp; } ;
struct TYPE_7__ {int numOfTags; int * pTagSchema; } ;
struct TYPE_6__ {int numOfColumns; int pSkipList; int numOfTags; int meterId; scalar_t__ schema; } ;
typedef TYPE_1__ STabObj ;
typedef TYPE_2__ SSyntaxTreeFilterSupporter ;
typedef int SSchema ;
typedef TYPE_3__ SBinaryFilterSupp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (int **,int ) ;
 int FUNC_2 (int **,int *,int ,char*,int ) ;
 int FUNC_3 (int *,int ,int *,TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int32_t FUNC_6(STabObj* VAR_5, tQueryResultset* VAR_6, char* VAR_7, int32_t VAR_8) {
  SSchema* VAR_9 = (SSchema*)(VAR_5->schema + VAR_5->numOfColumns * sizeof(SSchema));

  tSQLBinaryExpr* VAR_10 = ((void*)0);
  FUNC_2(&VAR_10, VAR_9, VAR_5->numOfTags, VAR_7, VAR_8);


  if (VAR_10 == ((void*)0)) {
    FUNC_0("metric:%s, no result returned, error in super table query expression:%s", VAR_5->meterId, VAR_7);
    FUNC_5(VAR_7);

    return VAR_0;
  } else {
    SSyntaxTreeFilterSupporter VAR_11 = {.pTagSchema = VAR_9, .numOfTags = VAR_5->numOfTags};
    SBinaryFilterSupp VAR_12 = {.fp = VAR_4, .setupInfoFn = VAR_2, .pExtInfo = &VAR_11};

    FUNC_3(VAR_10, VAR_5->pSkipList, VAR_6, &VAR_12);
    FUNC_1(&VAR_10, VAR_3);
  }

  FUNC_4(VAR_6);

  return VAR_1;
}
