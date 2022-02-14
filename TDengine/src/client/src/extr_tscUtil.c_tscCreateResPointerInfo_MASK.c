
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_9__ {int numOfOutputCols; } ;
struct TYPE_12__ {TYPE_1__ fieldsInfo; } ;
struct TYPE_11__ {int numOfnchar; int code; short* bytes; char** buffer; int * tsrow; } ;
struct TYPE_10__ {scalar_t__ type; } ;
typedef TYPE_2__ TAOS_FIELD ;
typedef TYPE_3__ SSqlRes ;
typedef TYPE_4__ SSqlCmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (int,int) ;
 TYPE_2__* FUNC_1 (TYPE_4__*,int) ;

int32_t FUNC_2(SSqlCmd* VAR_4, SSqlRes* VAR_5) {
  if (VAR_5->tsrow == ((void*)0)) {
    VAR_5->numOfnchar = 0;
    int32_t VAR_6 = VAR_4->fieldsInfo.numOfOutputCols;

    for (int32_t VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7) {
      TAOS_FIELD* VAR_8 = FUNC_1(VAR_4, VAR_7);
      if (VAR_8->type == VAR_3) {
        VAR_5->numOfnchar++;
      }
    }

    VAR_5->tsrow = FUNC_0(1, (VAR_0 + sizeof(short)) * VAR_6 + VAR_0 * VAR_5->numOfnchar);
    if (VAR_5->tsrow == ((void*)0)) {
      VAR_5->code = VAR_1;
      return VAR_5->code;
    }

    VAR_5->bytes = (short*)((char*)VAR_5->tsrow + VAR_0 * VAR_6);
    if (VAR_5->numOfnchar > 0) {
      VAR_5->buffer = (char**)((char*)VAR_5->bytes + sizeof(short) * VAR_6);
    }
  }

  return VAR_2;
}
