
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_12__ {int numOfOutputCols; } ;
struct TYPE_16__ {scalar_t__ nAggTimeInterval; TYPE_1__ fieldsInfo; int order; } ;
struct TYPE_14__ {void** tsrow; int* bytes; int row; void** buffer; } ;
struct TYPE_15__ {TYPE_3__ res; TYPE_5__ cmd; } ;
struct TYPE_13__ {scalar_t__ type; scalar_t__ bytes; } ;
typedef TYPE_2__ TAOS_FIELD ;
typedef TYPE_3__ SSqlRes ;
typedef TYPE_4__ SSqlObj ;
typedef TYPE_5__ SSqlCmd ;


 int VAR_0 ;
 void* FUNC_0 (TYPE_3__*,TYPE_5__*,int,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (void*,scalar_t__) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (void*,int ,scalar_t__) ;
 void* FUNC_5 (void*,scalar_t__) ;
 scalar_t__ FUNC_6 (void*,scalar_t__,void*) ;
 int VAR_2 ;
 int FUNC_7 (char*,TYPE_4__*,int ,int ,void**) ;
 TYPE_2__* FUNC_8 (TYPE_5__*,int) ;

__attribute__((used)) static void **FUNC_9(SSqlObj *VAR_3) {
  SSqlCmd *VAR_4 = &VAR_3->cmd;
  SSqlRes *VAR_5 = &VAR_3->res;

  int32_t VAR_6 = 0;

  for (int VAR_7 = 0; VAR_7 < VAR_4->fieldsInfo.numOfOutputCols; ++VAR_7) {
    VAR_5->tsrow[VAR_7] = FUNC_0(VAR_5, VAR_4, VAR_7, VAR_4->order) + VAR_5->bytes[VAR_7] * VAR_5->row;


    if (VAR_7 == 0 && VAR_4->nAggTimeInterval > 0) {
      continue;
    }

    TAOS_FIELD *VAR_8 = FUNC_8(VAR_4, VAR_7);

    if (FUNC_2(VAR_5->tsrow[VAR_7], VAR_8->type)) {
      VAR_5->tsrow[VAR_7] = ((void*)0);
    } else if (VAR_8->type == VAR_1) {

      if (VAR_5->buffer[VAR_6] == ((void*)0)) {
        VAR_5->buffer[VAR_6] = FUNC_3(VAR_8->bytes + 1);
      } else {
        VAR_5->buffer[VAR_6] = FUNC_5(VAR_5->buffer[VAR_6], VAR_8->bytes + 1);
      }


      FUNC_4(VAR_5->buffer[VAR_6], 0, VAR_8->bytes + 1);

      if (FUNC_6(VAR_5->tsrow[VAR_7], VAR_8->bytes, VAR_5->buffer[VAR_6])) {
        VAR_5->tsrow[VAR_7] = VAR_5->buffer[VAR_6];
      } else {
        FUNC_7("%p charset:%s to %s. val:%ls convert failed.", VAR_3, VAR_0, VAR_2, VAR_5->tsrow);
        VAR_5->tsrow[VAR_7] = ((void*)0);
      }
      VAR_6++;
    }
  }

  FUNC_1(VAR_6 <= VAR_4->fieldsInfo.numOfOutputCols);

  return VAR_5->tsrow;
}
