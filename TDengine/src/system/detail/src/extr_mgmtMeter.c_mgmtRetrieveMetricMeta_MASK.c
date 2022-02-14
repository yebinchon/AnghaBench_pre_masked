
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef size_t tQueryResultset ;
typedef scalar_t__ int64_t ;
typedef size_t int32_t ;
typedef int int16_t ;
struct TYPE_18__ {int meterId; int numOfTags; scalar_t__ tagCols; } ;
struct TYPE_17__ {int numOfMeters; int* metaElem; } ;
struct TYPE_16__ {TYPE_1__* pSkipList; } ;
struct TYPE_15__ {scalar_t__ nSize; } ;
typedef TYPE_2__ STabObj ;
typedef TYPE_3__ SMetricMetaMsg ;
typedef TYPE_4__ SMetricMetaElemMsg ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t* FUNC_0 (int,int) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,size_t) ;
 int FUNC_2 (size_t*) ;
 int FUNC_3 (void*,TYPE_3__*,size_t*,char**,size_t*,int,size_t,int) ;
 int FUNC_4 (TYPE_3__*,size_t*) ;
 TYPE_2__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (size_t*,size_t,size_t) ;
 size_t FUNC_7 (TYPE_2__*,int *,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_3__*,size_t,size_t*) ;
 int FUNC_10 (TYPE_3__*,size_t,size_t*) ;
 int FUNC_11 (size_t*) ;

int FUNC_12(void *VAR_3, char **VAR_4, SMetricMetaMsg *VAR_5) {







  int32_t VAR_6 = VAR_0;
  int VAR_7 = 0;
  int VAR_8 = VAR_2;
  tQueryResultset *VAR_9 = FUNC_0(1, VAR_5->numOfMeters * sizeof(tQueryResultset));
  int32_t * VAR_10 = FUNC_0(1, sizeof(int32_t) * VAR_5->numOfMeters);

  if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0)) {
    return -1;
  }

  for (int32_t VAR_11 = 0; VAR_11 < VAR_5->numOfMeters; ++VAR_11) {
    SMetricMetaElemMsg *VAR_12 = FUNC_1(VAR_5, VAR_11);
    STabObj * VAR_13 = FUNC_5(VAR_12->meterId);

    if (!FUNC_8(VAR_13)) {
      VAR_8 = VAR_1;
      break;
    }

    VAR_10[VAR_11] = FUNC_7(VAR_13, (int16_t *)VAR_12->tagCols, VAR_12->numOfTags);
  }
  if (VAR_8 == VAR_2) {
    for (int32_t VAR_14 = 0; VAR_14 < VAR_5->numOfMeters; ++VAR_14) {
      VAR_8 = FUNC_10(VAR_5, VAR_14, &VAR_9[VAR_14]);




    }
  }

  if (VAR_8 == VAR_2) {
    VAR_8 = FUNC_4(VAR_5, VAR_9);
  }

  if (VAR_8 == VAR_2) {
    for (int32_t VAR_15 = 0; VAR_15 < VAR_5->numOfMeters; ++VAR_15) {
      FUNC_9(VAR_5, VAR_15, &VAR_9[VAR_15]);
    }
  }

  if (VAR_8 == VAR_2) {
    for (int32_t VAR_16 = 0; VAR_16 < VAR_5->numOfMeters; ++VAR_16) {
      VAR_7 += FUNC_6(&VAR_9[VAR_16], VAR_10[VAR_16], VAR_6);
    }
  } else {
    VAR_7 = 512;
  }

  VAR_7 = FUNC_3(VAR_3, VAR_5, VAR_9, VAR_4, VAR_10, VAR_7, VAR_6,
                                     VAR_8);

  for (int32_t VAR_17 = 0; VAR_17 < VAR_5->numOfMeters; ++VAR_17) {
    FUNC_11(&VAR_9[VAR_17]);
  }

  FUNC_2(VAR_10);
  FUNC_2(VAR_9);

  return VAR_7;
}
