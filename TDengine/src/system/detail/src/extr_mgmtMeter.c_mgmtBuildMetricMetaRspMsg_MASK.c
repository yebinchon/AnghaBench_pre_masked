
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_9__ {scalar_t__ num; int ** pRes; } ;
typedef TYPE_1__ tQueryResultset ;
typedef scalar_t__ int32_t ;
typedef void* int16_t ;
struct TYPE_13__ {void* numOfVnodes; void* numOfMeters; void* tagLen; } ;
struct TYPE_12__ {int meterId; int tagCols; int numOfTags; } ;
struct TYPE_11__ {scalar_t__ numOfMeters; int* metaElem; } ;
struct TYPE_10__ {scalar_t__ code; } ;
typedef int SVnodeSidList ;
typedef TYPE_2__ STaosRsp ;
typedef int STabObj ;
typedef TYPE_3__ SMetricMetaMsg ;
typedef TYPE_4__ SMetricMetaElemMsg ;
typedef TYPE_5__ SMetricMeta ;


 scalar_t__ VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (void*) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,scalar_t__,...) ;
 char* FUNC_3 (int *,int*,int **,TYPE_5__*,scalar_t__,int ,int ,scalar_t__,char*) ;
 char* FUNC_4 (void*,int ,scalar_t__) ;

__attribute__((used)) static int32_t FUNC_5(void *VAR_3, SMetricMetaMsg *VAR_4, tQueryResultset *VAR_5,
                                         char **VAR_6, int32_t *VAR_7, int32_t VAR_8, int32_t VAR_9,
                                         int32_t VAR_10) {
  *VAR_6 = FUNC_4(VAR_3, VAR_2, VAR_8);
  if (*VAR_6 == ((void*)0)) {
    return 0;
  }

  char * VAR_11 = (*VAR_6);
  STaosRsp *VAR_12 = (STaosRsp *)VAR_11;

  VAR_12->code = VAR_10;
  VAR_11 += sizeof(STaosRsp);
  *VAR_11 = VAR_1;
  VAR_11++;

  if (VAR_10 != VAR_0) {
    return VAR_11 - (*VAR_6);
  }

  int32_t VAR_13 = 0;

  *(int16_t *)VAR_11 = FUNC_1(VAR_4->numOfMeters);
  VAR_11 += sizeof(int16_t);

  for (int32_t VAR_14 = 0; VAR_14 < VAR_4->numOfMeters; ++VAR_14) {
    SVnodeSidList *VAR_15 = ((void*)0);
    int VAR_16 = -1;

    SMetricMeta *VAR_17 = (SMetricMeta *)VAR_11;

    VAR_17->numOfMeters = 0;
    VAR_17->numOfVnodes = 0;
    VAR_17->tagLen = FUNC_1((uint16_t)VAR_7[VAR_14]);

    VAR_11 = (char *)VAR_17 + sizeof(SMetricMeta);

    SMetricMetaElemMsg *VAR_18 = (SMetricMetaElemMsg *)((char *)VAR_4 + VAR_4->metaElem[VAR_14]);

    for (int32_t VAR_19 = 0; VAR_19 < VAR_5[VAR_14].num; ++VAR_19) {
      STabObj *VAR_20 = VAR_5[VAR_14].pRes[VAR_19];
      VAR_11 = FUNC_3(VAR_20, &VAR_16, &VAR_15, VAR_17, VAR_7[VAR_14], VAR_18->numOfTags, VAR_18->tagCols,
                                    VAR_9, VAR_11);
    }

    FUNC_2("metric:%s metric-meta tables:%d, vnode:%d", VAR_18->meterId, VAR_17->numOfMeters, VAR_17->numOfVnodes);

    VAR_17->numOfMeters = FUNC_0(VAR_17->numOfMeters);
    VAR_17->numOfVnodes = FUNC_0(VAR_17->numOfVnodes);
  }

  VAR_13 = VAR_11 - (*VAR_6);
  FUNC_2("metric-meta msg size %d", VAR_13);

  return VAR_13;
}
