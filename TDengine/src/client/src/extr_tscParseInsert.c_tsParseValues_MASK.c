
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
typedef int int16_t ;
struct TYPE_16__ {scalar_t__ precision; scalar_t__ rowSize; } ;
struct TYPE_15__ {int* hasVal; } ;
struct TYPE_14__ {scalar_t__ n; scalar_t__ type; } ;
struct TYPE_13__ {scalar_t__ size; scalar_t__ nAllocSize; } ;
typedef TYPE_1__ STableDataBlocks ;
typedef int SSchema ;
typedef TYPE_2__ SSQLToken ;
typedef TYPE_3__ SParsedDataColInfo ;
typedef TYPE_4__ SMeterMeta ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 TYPE_2__ FUNC_2 (char*,scalar_t__*,int,int ,int *) ;
 int * FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (char**,TYPE_1__*,int *,TYPE_3__*,char*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_1__*,scalar_t__) ;

int FUNC_6(char **VAR_2, STableDataBlocks *VAR_3, SMeterMeta *VAR_4, int VAR_5,
                  SParsedDataColInfo *VAR_6, char *VAR_7) {
  int32_t VAR_8 = 0;
  SSQLToken VAR_9;

  int16_t VAR_10 = 0;

  SSchema *VAR_11 = FUNC_3(VAR_4);
  int32_t VAR_12 = VAR_4->precision;

  if (VAR_6->hasVal[0] == 0) {
    FUNC_1(VAR_7, "primary timestamp column can not be null");
    return -1;
  }

  while (1) {
    VAR_8 = 0;
    VAR_9 = FUNC_2(*VAR_2, &VAR_8, 0, 0, ((void*)0));
    if (VAR_9.n == 0 || VAR_9.type != VAR_0) break;

    *VAR_2 += VAR_8;
    if (VAR_10 >= VAR_5 || VAR_3->size + VAR_4->rowSize >= VAR_3->nAllocSize) {
      int32_t VAR_13 = FUNC_5(VAR_3, VAR_4->rowSize);
      if (0 == VAR_13) {
        FUNC_1(VAR_7, "client out of memory");
        return -1;
      }
      VAR_5 += VAR_13;
    }

    int32_t VAR_14 = FUNC_4(VAR_2, VAR_3, VAR_11, VAR_6, VAR_7, VAR_12);
    if (VAR_14 <= 0) {
      FUNC_0(VAR_7, *VAR_2);
      return -1;
    }

    VAR_3->size += VAR_14;

    VAR_8 = 0;
    VAR_9 = FUNC_2(*VAR_2, &VAR_8, 0, 0, ((void*)0));
    *VAR_2 += VAR_8;
    if (VAR_9.n == 0 || VAR_9.type != VAR_1) {
      FUNC_0(VAR_7, *VAR_2);
      return -1;
    }

    VAR_10++;
  }

  if (VAR_10 <= 0) {
    FUNC_1(VAR_7, "no any data points");
    return -1;
  } else {
    return VAR_10;
  }
}
