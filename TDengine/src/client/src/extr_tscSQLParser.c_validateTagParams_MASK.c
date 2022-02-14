
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nField; TYPE_1__* p; } ;
typedef TYPE_2__ tFieldList ;
typedef size_t int32_t ;
struct TYPE_6__ {size_t bytes; scalar_t__ type; int name; } ;
typedef int SSqlCmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,size_t,int ) ;
 int FUNC_2 (int *,char const*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(tFieldList* VAR_7, tFieldList* VAR_8, SSqlCmd* VAR_9) {
  FUNC_0(VAR_7 != ((void*)0));

  const char* VAR_10 = "invalid number of tag columns";
  const char* VAR_11 = "tag length too long";
  const char* VAR_12 = "duplicated column names";
  const char* VAR_13 = "timestamp not allowed in tags";
  const char* VAR_14 = "invalid data type in tags";
  const char* VAR_15 = "invalid tag name";
  const char* VAR_16 = "invalid binary/nchar tag length";


  if (VAR_7->nField < 1 || VAR_7->nField > VAR_5) {
    FUNC_2(VAR_9, VAR_10);
    return 0;
  }

  int32_t VAR_17 = 0;
  for (int32_t VAR_18 = 0; VAR_18 < VAR_7->nField; ++VAR_18) {
    VAR_17 += VAR_7->p[VAR_18].bytes;
  }


  if (VAR_17 > VAR_6) {
    FUNC_2(VAR_9, VAR_11);
    return 0;
  }


  for (int32_t VAR_19 = 0; VAR_19 < VAR_7->nField; ++VAR_19) {
    if (FUNC_1(VAR_8, 0, VAR_7->p[VAR_19].name) == 1) {
      FUNC_2(VAR_9, VAR_12);
      return 0;
    }
  }


  for (int32_t VAR_20 = 0; VAR_20 < VAR_7->nField; ++VAR_20) {
    if (VAR_7->p[VAR_20].type == VAR_4) {
      FUNC_2(VAR_9, VAR_13);
      return 0;
    }

    if (VAR_7->p[VAR_20].type < VAR_2 || VAR_7->p[VAR_20].type > VAR_3) {
      FUNC_2(VAR_9, VAR_14);
      return 0;
    }

    if ((VAR_7->p[VAR_20].type == VAR_1 && VAR_7->p[VAR_20].bytes <= 0) ||
        (VAR_7->p[VAR_20].type == VAR_3 && VAR_7->p[VAR_20].bytes <= 0)) {
      FUNC_2(VAR_9, VAR_16);
      return 0;
    }

    if (FUNC_3(VAR_7->p[VAR_20].name) != VAR_0) {
      FUNC_2(VAR_9, VAR_15);
      return 0;
    }

    if (FUNC_1(VAR_7, VAR_20 + 1, VAR_7->p[VAR_20].name) == 1) {
      FUNC_2(VAR_9, VAR_12);
      return 0;
    }
  }

  return 1;
}
