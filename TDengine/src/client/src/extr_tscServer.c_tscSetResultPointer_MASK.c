
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_14__ {scalar_t__ order; } ;
struct TYPE_13__ {int numOfOutputCols; } ;
struct TYPE_17__ {TYPE_2__ order; TYPE_1__ fieldsInfo; } ;
struct TYPE_16__ {int code; int* bytes; int numOfRows; scalar_t__ data; scalar_t__* tsrow; } ;
struct TYPE_15__ {int bytes; } ;
typedef TYPE_3__ TAOS_FIELD ;
typedef TYPE_4__ SSqlRes ;
typedef TYPE_5__ SSqlCmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_5__*,TYPE_4__*) ;
 TYPE_3__* FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (TYPE_5__*,int) ;

__attribute__((used)) static int FUNC_3(SSqlCmd *VAR_2, SSqlRes *VAR_3) {
  if (FUNC_0(VAR_2, VAR_3) != VAR_0) {
    return VAR_3->code;
  }

  for (int VAR_4 = 0; VAR_4 < VAR_2->fieldsInfo.numOfOutputCols; ++VAR_4) {
    TAOS_FIELD *VAR_5 = FUNC_1(VAR_2, VAR_4);
    int16_t VAR_6 = FUNC_2(VAR_2, VAR_4);

    VAR_3->bytes[VAR_4] = VAR_5->bytes;
    if (VAR_2->order.order == VAR_1) {
      VAR_3->bytes[VAR_4] = -VAR_3->bytes[VAR_4];
      VAR_3->tsrow[VAR_4] = ((VAR_3->data + VAR_6 * VAR_3->numOfRows) + (VAR_3->numOfRows - 1) * VAR_5->bytes);
    } else {
      VAR_3->tsrow[VAR_4] = (VAR_3->data + VAR_6 * VAR_3->numOfRows);
    }
  }

  return 0;
}
