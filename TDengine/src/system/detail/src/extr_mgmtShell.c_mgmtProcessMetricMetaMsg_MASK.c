
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_12__ {int thandle; TYPE_1__* pDb; } ;
struct TYPE_11__ {int meterId; } ;
struct TYPE_10__ {int numOfMeters; int join; int joinCondLen; int* metaElem; } ;
struct TYPE_9__ {int code; } ;
struct TYPE_8__ {scalar_t__ dropStatus; } ;
typedef TYPE_2__ STaosRsp ;
typedef int STabObj ;
typedef TYPE_3__ SMetricMetaMsg ;
typedef TYPE_4__ SMetricMetaElemMsg ;
typedef TYPE_5__ SConnObj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,char**,TYPE_3__*) ;
 char* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,int ,int ) ;

int FUNC_6(char *VAR_5, int VAR_6, SConnObj *VAR_7) {
  SMetricMetaMsg *VAR_8 = (SMetricMetaMsg *)VAR_5;
  STabObj * VAR_9;
  STaosRsp * VAR_10;
  char * VAR_11;

  VAR_8->numOfMeters = FUNC_0(VAR_8->numOfMeters);

  VAR_8->join = FUNC_0(VAR_8->join);
  VAR_8->joinCondLen = FUNC_0(VAR_8->joinCondLen);

  for (int32_t VAR_12 = 0; VAR_12 < VAR_8->numOfMeters; ++VAR_12) {
    VAR_8->metaElem[VAR_12] = FUNC_0(VAR_8->metaElem[VAR_12]);
  }

  SMetricMetaElemMsg *VAR_13 = (SMetricMetaElemMsg *)(((char *)VAR_8) + VAR_8->metaElem[0]);
  VAR_9 = FUNC_1(VAR_13->meterId);

  if (VAR_9 == ((void*)0) || (VAR_7->pDb != ((void*)0) && VAR_7->pDb->dropStatus != VAR_3)) {
    VAR_11 = FUNC_3(VAR_7->thandle, VAR_4);
    if (VAR_11 == ((void*)0)) {
      FUNC_5(VAR_7->thandle, VAR_4, VAR_2);
      return 0;
    }

    VAR_5 = VAR_11;
    VAR_10 = (STaosRsp *)VAR_5;
    if (VAR_7->pDb)
      VAR_10->code = VAR_1;
    else
      VAR_10->code = VAR_0;
    VAR_5++;

    VAR_6 = VAR_5 - VAR_11;
  } else {
    VAR_6 = FUNC_2(VAR_7->thandle, &VAR_11, VAR_8);
    if (VAR_6 <= 0) {
      FUNC_5(VAR_7->thandle, VAR_4, VAR_2);
      return 0;
    }
  }

  FUNC_4(VAR_7->thandle, VAR_11, VAR_6);

  return VAR_6;
}
