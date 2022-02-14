
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nField; TYPE_2__* p; } ;
typedef TYPE_1__ tFieldList ;
typedef size_t int32_t ;
struct TYPE_6__ {scalar_t__ type; size_t bytes; int name; } ;
typedef TYPE_2__ TAOS_FIELD ;
typedef int SSqlCmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,size_t,int ) ;
 int FUNC_2 (int *,char const*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(tFieldList* VAR_9, SSqlCmd* VAR_10) {
  FUNC_0(VAR_9 != ((void*)0));

  const char* VAR_11 = "illegal number of columns";
  const char* VAR_12 = "first column must be timestamp";
  const char* VAR_13 = "row length exceeds max length";
  const char* VAR_14 = "duplicated column names";
  const char* VAR_15 = "invalid data types";
  const char* VAR_16 = "invalid binary/nchar column length";
  const char* VAR_17 = "invalid column name";


  if (VAR_9->nField <= 1 || VAR_9->nField > VAR_7) {
    FUNC_2(VAR_10, VAR_11);
    return 0;
  }


  if (VAR_9->p[0].type != VAR_4) {
    FUNC_2(VAR_10, VAR_12);
    return 0;
  }

  int32_t VAR_18 = 0;
  for (int32_t VAR_19 = 0; VAR_19 < VAR_9->nField; ++VAR_19) {
    VAR_18 += VAR_9->p[VAR_19].bytes;
  }


  if (VAR_18 > VAR_6) {
    FUNC_2(VAR_10, VAR_13);
    return 0;
  }


  for (int32_t VAR_20 = 0; VAR_20 < VAR_9->nField; ++VAR_20) {
    TAOS_FIELD* VAR_21 = &VAR_9->p[VAR_20];
    if (VAR_21->type < VAR_2 || VAR_21->type > VAR_3) {
      FUNC_2(VAR_10, VAR_15);
      return 0;
    }

    if ((VAR_21->type == VAR_1 && (VAR_21->bytes <= 0 || VAR_21->bytes > VAR_5)) ||
        (VAR_21->type == VAR_3 && (VAR_21->bytes <= 0 || VAR_21->bytes > VAR_8))) {
      FUNC_2(VAR_10, VAR_16);
      return 0;
    }

    if (FUNC_3(VAR_21->name) != VAR_0) {
      FUNC_2(VAR_10, VAR_17);
      return 0;
    }

    if (FUNC_1(VAR_9, VAR_20 + 1, VAR_9->p[VAR_20].name) == 1) {
      FUNC_2(VAR_10, VAR_14);
      return 0;
    }
  }

  return 1;
}
