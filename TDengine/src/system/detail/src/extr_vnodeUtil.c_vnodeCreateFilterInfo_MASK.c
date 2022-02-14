
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t int32_t ;
typedef int int16_t ;
typedef void* __filter_func_t ;
struct TYPE_12__ {scalar_t__ numOfFilters; int bytes; int type; TYPE_2__* filters; } ;
struct TYPE_17__ {TYPE_3__ data; } ;
struct TYPE_10__ {int * filters; } ;
struct TYPE_16__ {TYPE_1__ data; } ;
struct TYPE_11__ {size_t lowerRelOptr; size_t upperRelOptr; } ;
struct TYPE_15__ {int bytes; int * fp; TYPE_2__ filterInfo; } ;
struct TYPE_14__ {size_t numOfCols; int numOfFilterCols; TYPE_9__* colList; TYPE_4__* pFilterInfo; } ;
struct TYPE_13__ {int numOfFilters; TYPE_6__* pFilters; TYPE_8__ info; } ;
typedef TYPE_4__ SSingleColumnFilterInfo ;
typedef TYPE_5__ SQuery ;
typedef int SColumnInfoEx ;
typedef TYPE_6__ SColumnFilterElem ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (char*,void*,...) ;
 int FUNC_3 (TYPE_8__*,TYPE_9__*,int) ;
 void** FUNC_4 (int ) ;
 void** FUNC_5 (int ) ;

int32_t FUNC_6(void* VAR_7, SQuery* VAR_8) {
  for (int32_t VAR_9 = 0; VAR_9 < VAR_8->numOfCols; ++VAR_9) {
    if (VAR_8->colList[VAR_9].data.numOfFilters > 0) {
      VAR_8->numOfFilterCols++;
    }
  }

  if (VAR_8->numOfFilterCols == 0) {
    return VAR_1;
  }

  VAR_8->pFilterInfo = FUNC_1(1, sizeof(SSingleColumnFilterInfo) * VAR_8->numOfFilterCols);

  for (int32_t VAR_10 = 0, VAR_11 = 0; VAR_10 < VAR_8->numOfCols; ++VAR_10) {
    if (VAR_8->colList[VAR_10].data.numOfFilters > 0) {
      SSingleColumnFilterInfo* VAR_12 = &VAR_8->pFilterInfo[VAR_11];

      FUNC_3(&VAR_12->info, &VAR_8->colList[VAR_10], sizeof(SColumnInfoEx));
      VAR_12->info.data.filters = ((void*)0);

      VAR_12->numOfFilters = VAR_8->colList[VAR_10].data.numOfFilters;
      VAR_12->pFilters = FUNC_1(VAR_12->numOfFilters, sizeof(SColumnFilterElem));

      for(int32_t VAR_13 = 0; VAR_13 < VAR_12->numOfFilters; ++VAR_13) {
        SColumnFilterElem *VAR_14 = &VAR_12->pFilters[VAR_13];
        VAR_14->filterInfo = VAR_8->colList[VAR_10].data.filters[VAR_13];

        int32_t VAR_15 = VAR_14->filterInfo.lowerRelOptr;
        int32_t VAR_16 = VAR_14->filterInfo.upperRelOptr;

        if (VAR_15 == VAR_2 && VAR_16 == VAR_2) {
          FUNC_2("QInfo:%p invalid filter info", VAR_7);
          return VAR_0;
        }

        int16_t VAR_17 = VAR_8->colList[VAR_10].data.type;
        int16_t VAR_18 = VAR_8->colList[VAR_10].data.bytes;

        __filter_func_t *VAR_19 = FUNC_4(VAR_17);
        __filter_func_t *VAR_20 = FUNC_5(VAR_17);

        if (VAR_19 == ((void*)0) && VAR_20 == ((void*)0)) {
          FUNC_2("QInfo:%p failed to get filter function, invalid data type:%d", VAR_7, VAR_17);
          return VAR_0;
        }

        if ((VAR_15 == VAR_4 || VAR_15 == VAR_3) &&
            (VAR_16 == VAR_6 || VAR_16 == VAR_5)) {
          if (VAR_15 == VAR_4) {
            if (VAR_16 == VAR_6) {
              VAR_14->fp = VAR_19[4];
            } else {
              VAR_14->fp = VAR_19[2];
            }
          } else {
            if (VAR_16 == VAR_6) {
              VAR_14->fp = VAR_19[3];
            } else {
              VAR_14->fp = VAR_19[1];
            }
          }
        } else {
          if (VAR_15 != VAR_2) {
            VAR_14->fp = VAR_20[VAR_15];

            if (VAR_16 != VAR_2) {
              FUNC_2("pQInfo:%p failed to get filter function, invalid filter condition", VAR_7, VAR_17);
              return VAR_0;
            }
          } else {
            VAR_14->fp = VAR_20[VAR_16];
          }
        }
        FUNC_0 (VAR_14->fp != ((void*)0));
        VAR_14->bytes = VAR_18;
      }

      VAR_11++;
    }
  }

  return VAR_1;
}
