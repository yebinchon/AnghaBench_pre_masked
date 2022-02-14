
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_14__ {scalar_t__ numOfTags; size_t numOfColumns; } ;
struct TYPE_13__ {TYPE_4__* pMeterMeta; } ;
struct TYPE_12__ {size_t bytes; int name; } ;
struct TYPE_11__ {scalar_t__ type; size_t bytes; int name; } ;
typedef TYPE_1__ TAOS_FIELD ;
typedef int SSqlCmd ;
typedef TYPE_2__ SSchema ;
typedef TYPE_3__ SMeterMetaInfo ;
typedef TYPE_4__ SMeterMeta ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 TYPE_2__* FUNC_3 (TYPE_4__*) ;
 TYPE_2__* FUNC_4 (TYPE_4__*) ;
 TYPE_3__* FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int ) ;

bool FUNC_7(SSqlCmd* VAR_8, TAOS_FIELD* VAR_9) {
  const char* VAR_10 = "timestamp not allowed in tags";
  const char* VAR_11 = "duplicated column names";
  const char* VAR_12 = "tag length too long";
  const char* VAR_13 = "invalid tag name";
  const char* VAR_14 = "invalid binary/nchar tag length";
  const char* VAR_15 = "invalid data type in tags";

  SMeterMetaInfo* VAR_16 = FUNC_5(VAR_8, 0);
  SMeterMeta* VAR_17 = VAR_16->pMeterMeta;


  if (VAR_17->numOfTags == VAR_6) {
    char VAR_18[128] = {0};
    FUNC_1(VAR_18, "tags no more than %d", VAR_6);

    FUNC_0(VAR_8, VAR_18);
    return 0;
  }


  if (VAR_9->type == VAR_5) {
    FUNC_0(VAR_8, VAR_10);
    return 0;
  }

  if (VAR_9->type < VAR_3 && VAR_9->type > VAR_4) {
    FUNC_0(VAR_8, VAR_15);
    return 0;
  }

  SSchema* VAR_19 = FUNC_4(VAR_16->pMeterMeta);
  int32_t VAR_20 = 0;

  for (int32_t VAR_21 = 0; VAR_21 < VAR_17->numOfTags; ++VAR_21) {
    VAR_20 += VAR_19[VAR_21].bytes;
  }


  if (VAR_20 + VAR_9->bytes > VAR_7) {
    FUNC_0(VAR_8, VAR_12);
    return 0;
  }


  if (FUNC_6(VAR_9->name) != VAR_0) {
    FUNC_0(VAR_8, VAR_13);
    return 0;
  }


  if ((VAR_9->type == VAR_2 || VAR_9->type == VAR_4) && VAR_9->bytes <= 0) {
    FUNC_0(VAR_8, VAR_14);
    return 0;
  }


  SSchema* VAR_22 = FUNC_3(VAR_17);

  for (int32_t VAR_23 = 0; VAR_23 < VAR_17->numOfTags + VAR_17->numOfColumns; ++VAR_23) {
    if (FUNC_2(VAR_9->name, VAR_22[VAR_23].name, VAR_1) == 0) {
      FUNC_0(VAR_8, VAR_11);
      return 0;
    }
  }

  return 1;
}
