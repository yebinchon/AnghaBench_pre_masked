
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_12__ {scalar_t__ numOfColumns; scalar_t__ numOfTags; } ;
struct TYPE_11__ {TYPE_4__* pMeterMeta; } ;
struct TYPE_10__ {size_t bytes; int name; } ;
struct TYPE_9__ {scalar_t__ type; scalar_t__ bytes; int name; } ;
typedef TYPE_1__ TAOS_FIELD ;
typedef int SSqlCmd ;
typedef TYPE_2__ SSchema ;
typedef TYPE_3__ SMeterMetaInfo ;
typedef TYPE_4__ SMeterMeta ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char const*) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 TYPE_2__* FUNC_2 (TYPE_4__*) ;
 TYPE_3__* FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;

bool FUNC_5(SSqlCmd* VAR_6, TAOS_FIELD* VAR_7) {
  const char* VAR_8 = "too many columns";
  const char* VAR_9 = "duplicated column names";
  const char* VAR_10 = "column length too long";
  const char* VAR_11 = "invalid data types";
  const char* VAR_12 = "invalid column name";
  const char* VAR_13 = "invalid column length";

  SMeterMetaInfo* VAR_14 = FUNC_3(VAR_6, 0);
  SMeterMeta* VAR_15 = VAR_14->pMeterMeta;


  if (VAR_15->numOfColumns >= VAR_5 ||
      VAR_15->numOfTags + VAR_15->numOfColumns >= VAR_5) {
    FUNC_0(VAR_6, VAR_8);
    return 0;
  }

  if (VAR_7->type < VAR_2 || VAR_7->type > VAR_3) {
    FUNC_0(VAR_6, VAR_11);
    return 0;
  }

  if (FUNC_4(VAR_7->name) != VAR_0) {
    FUNC_0(VAR_6, VAR_12);
    return 0;
  }

  SSchema* VAR_16 = FUNC_2(VAR_15);
  int32_t VAR_17 = 0;

  for (int32_t VAR_18 = 0; VAR_18 < VAR_15->numOfColumns; ++VAR_18) {
    VAR_17 += VAR_16[VAR_18].bytes;
  }

  if (VAR_7->bytes <= 0) {
    FUNC_0(VAR_6, VAR_13);
    return 0;
  }


  if (VAR_17 + VAR_7->bytes > VAR_4) {
    FUNC_0(VAR_6, VAR_10);
    return 0;
  }


  for (int32_t VAR_19 = 0; VAR_19 < VAR_15->numOfTags + VAR_15->numOfColumns; ++VAR_19) {
    if (FUNC_1(VAR_7->name, VAR_16[VAR_19].name, VAR_1) == 0) {
      FUNC_0(VAR_6, VAR_9);
      return 0;
    }
  }

  return 1;
}
