
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef scalar_t__ int32_t ;
struct TYPE_32__ {scalar_t__ numOfMeters; } ;
struct TYPE_25__ {scalar_t__ offset; int limit; } ;
struct TYPE_24__ {scalar_t__ offset; scalar_t__ limit; } ;
struct TYPE_31__ {TYPE_2__ slimit; TYPE_1__ limit; } ;
struct TYPE_26__ {scalar_t__ numOfOutputCols; } ;
struct TYPE_30__ {scalar_t__ globalLimit; TYPE_3__ fieldsInfo; TYPE_2__ slimit; TYPE_1__ limit; void* command; } ;
struct TYPE_27__ {scalar_t__ colIdx; } ;
struct TYPE_29__ {TYPE_4__ colInfo; } ;
struct TYPE_28__ {TYPE_7__ cmd; } ;
struct TYPE_23__ {int * pMeterMeta; TYPE_9__* pMetricMeta; } ;
typedef TYPE_5__ SSqlObj ;
typedef TYPE_6__ SSqlExpr ;
typedef TYPE_7__ SSqlCmd ;
typedef TYPE_8__ SQuerySQL ;
typedef TYPE_9__ SMetricMeta ;
typedef TYPE_10__ SMeterMetaInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_10__*) ;
 int FUNC_1 (TYPE_7__*,char const*) ;
 TYPE_10__* FUNC_2 (TYPE_7__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_7__*) ;
 scalar_t__ FUNC_5 (TYPE_7__*,int*) ;
 TYPE_6__* FUNC_6 (TYPE_7__*,scalar_t__) ;
 int FUNC_7 (char*,TYPE_5__*) ;

int32_t FUNC_8(SSqlObj* VAR_5, SQuerySQL* VAR_6) {
  SSqlCmd* VAR_7 = &VAR_5->cmd;
  SMeterMetaInfo* VAR_8 = FUNC_2(VAR_7, 0);

  const char* VAR_9 = "soffset/offset can not be less than 0";
  const char* VAR_10 = "slimit/soffset only available for STable query";
  const char* VAR_11 = "function not supported on table";
  const char* VAR_12 = "slimit/soffset can not apply to projection query";


  VAR_7->limit = VAR_6->limit;
  VAR_7->slimit = VAR_6->slimit;

  if (VAR_7->slimit.offset < 0 || VAR_7->limit.offset < 0) {
    FUNC_1(VAR_7, VAR_9);
    return VAR_0;
  }

  if (VAR_7->limit.limit == 0) {
    FUNC_7("%p limit 0, no output result", VAR_5);
    VAR_7->command = VAR_2;
  }

  if (FUNC_0(VAR_8)) {
    bool VAR_13 = 0;
    if (FUNC_5(VAR_7, &VAR_13) != VAR_1) {
      return VAR_0;
    }

    if (VAR_13 == 1) {
      VAR_7->command = VAR_3;
    } else {
      if (FUNC_4(VAR_7) && (VAR_7->slimit.limit > 0 || VAR_7->slimit.offset > 0)) {
        FUNC_1(VAR_7, VAR_12);
        return VAR_0;
      }
    }

    if (VAR_7->slimit.limit == 0) {
      FUNC_7("%p limit 0, no output result", VAR_5);
      VAR_7->command = VAR_2;
      return VAR_1;
    }






    int32_t VAR_14 = FUNC_3(VAR_5);
    if (VAR_14 != VAR_1) {
      return VAR_14;
    }


    SMetricMeta* VAR_15 = VAR_8->pMetricMeta;
    if (VAR_8->pMeterMeta == ((void*)0) || VAR_15 == ((void*)0) || VAR_15->numOfMeters == 0) {
      FUNC_7("%p no table in metricmeta, no output result", VAR_5);
      VAR_7->command = VAR_2;
    }


    VAR_7->globalLimit = VAR_7->limit.limit;
  } else {
    if (VAR_7->slimit.limit != -1 || VAR_7->slimit.offset != 0) {
      FUNC_1(VAR_7, VAR_10);
      return VAR_0;
    }


    for (int32_t VAR_16 = 0; VAR_16 < VAR_7->fieldsInfo.numOfOutputCols; ++VAR_16) {
      SSqlExpr* VAR_17 = FUNC_6(VAR_7, VAR_16);
      if (VAR_17->colInfo.colIdx == VAR_4) {
        FUNC_1(VAR_7, VAR_11);
        return VAR_0;
      }
    }
  }

  return VAR_1;
}
