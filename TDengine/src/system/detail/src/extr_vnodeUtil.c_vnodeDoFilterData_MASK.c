
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
struct TYPE_12__ {scalar_t__ (* fp ) (TYPE_5__*,char*,char*) ;} ;
struct TYPE_11__ {size_t numOfFilterCols; TYPE_3__* pFilterInfo; } ;
struct TYPE_8__ {size_t bytes; int type; } ;
struct TYPE_9__ {TYPE_1__ data; } ;
struct TYPE_10__ {char* pData; size_t numOfFilters; TYPE_5__* pFilters; TYPE_2__ info; } ;
typedef TYPE_3__ SSingleColumnFilterInfo ;
typedef TYPE_4__ SQuery ;
typedef TYPE_5__ SColumnFilterElem ;


 scalar_t__ FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (TYPE_5__*,char*,char*) ;

bool FUNC_2(SQuery* VAR_0, int32_t VAR_1) {
  for (int32_t VAR_2 = 0; VAR_2 < VAR_0->numOfFilterCols; ++VAR_2) {
    SSingleColumnFilterInfo *VAR_3 = &VAR_0->pFilterInfo[VAR_2];
    char* VAR_4 = VAR_3->pData + VAR_3->info.data.bytes * VAR_1;

    if(FUNC_0(VAR_4, VAR_3->info.data.type)) {
      return 0;
    }

    int32_t VAR_5 = VAR_3->numOfFilters;
    bool VAR_6 = 0;
    for(int32_t VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7) {
      SColumnFilterElem* VAR_8 = &VAR_3->pFilters[VAR_7];
      if (VAR_8->fp(VAR_8, VAR_4, VAR_4)) {
        VAR_6 = 1;
        break;
      }
    }

    if (!VAR_6) {
      return 0;
    }
  }

  return 1;
}
