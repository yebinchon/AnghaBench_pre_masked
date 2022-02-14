
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_12__ {scalar_t__ type; int cols; scalar_t__ data; } ;
struct TYPE_11__ {scalar_t__ bytes; } ;
struct TYPE_10__ {int numOfColumns; int numOfTags; int schemaSize; void* pHead; void* next; void* schema; void* pTagData; } ;
struct TYPE_8__ {int bytes; } ;
struct TYPE_9__ {int col; int pos; TYPE_1__ schema; } ;
typedef TYPE_2__ SchemaUnit ;
typedef TYPE_3__ STabObj ;
typedef TYPE_4__ SSchema ;
typedef TYPE_5__ SMeterBatchUpdateMsg ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (void*,void*,int) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 void* FUNC_6 (void*,int) ;

void *FUNC_7(void *VAR_2, char *VAR_3, int VAR_4, int *VAR_5) {
  STabObj * VAR_6 = (STabObj *)VAR_2;
  SMeterBatchUpdateMsg *VAR_7 = (SMeterBatchUpdateMsg *)VAR_3;

  if (FUNC_4(VAR_6)) {
    if (VAR_7->type == VAR_1) {
      uint32_t VAR_8 = VAR_6->numOfColumns + VAR_6->numOfTags;
      VAR_6->schema = FUNC_6(VAR_6->schema, (VAR_8 + VAR_7->cols) * sizeof(SSchema));
      VAR_6->schemaSize = (VAR_8 + VAR_7->cols) * sizeof(SSchema);
      VAR_6->numOfTags += VAR_7->cols;
      FUNC_1(VAR_6->schema + VAR_8 * sizeof(SSchema), VAR_7->data, VAR_7->cols * sizeof(SSchema));

    } else if (VAR_7->type == VAR_0) {

      SchemaUnit *VAR_9 = (SchemaUnit *)(VAR_7->data);
      int VAR_10 = VAR_9->col;
      FUNC_0(VAR_10 > 0 && VAR_10 < VAR_6->numOfTags);
      if (VAR_10 < VAR_6->numOfTags - 1) {
        FUNC_2(VAR_6->schema + sizeof(SSchema) * (VAR_6->numOfColumns + VAR_10),
                VAR_6->schema + sizeof(SSchema) * (VAR_6->numOfColumns + VAR_10 + 1),
                VAR_6->schemaSize - (sizeof(SSchema) * (VAR_6->numOfColumns + VAR_10 + 1)));
      }
      VAR_6->schemaSize -= sizeof(SSchema);
      VAR_6->numOfTags--;
      VAR_6->schema = FUNC_6(VAR_6->schema, VAR_6->schemaSize);
    }

    return VAR_6->pHead;

  } else if (FUNC_5(VAR_6)) {
    if (VAR_7->type == VAR_1) {
      SSchema *VAR_11 = (SSchema *)VAR_7->data;
      int VAR_12 = 0;
      for (int VAR_13 = 0; VAR_13 < VAR_7->cols; VAR_13++) {
        VAR_12 += VAR_11[VAR_13].bytes;
      }
      VAR_6->schema = FUNC_6(VAR_6->schema, VAR_6->schemaSize + VAR_12);
      VAR_6->pTagData = VAR_6->schema;
      FUNC_3(VAR_6->schema + VAR_6->schemaSize, 0, VAR_12);
      VAR_6->schemaSize += VAR_12;

    } else if (VAR_7->type == VAR_0) {
      SchemaUnit *VAR_14 = (SchemaUnit *)(VAR_7->data);
      int32_t VAR_15 = VAR_14->pos;
      int32_t VAR_16 = VAR_14->schema.bytes;
      FUNC_0(VAR_15 + VAR_16 <= VAR_6->schemaSize);

      if (VAR_15 + VAR_16 != VAR_6->schemaSize) {
        FUNC_2(VAR_6->schema + VAR_15, VAR_6->schema + VAR_15 + VAR_16, VAR_6->schemaSize - (VAR_15 + VAR_16));
      }

      VAR_6->schemaSize -= VAR_16;
      VAR_6->schema = FUNC_6(VAR_6->schema, VAR_6->schemaSize);
    }

    return VAR_6->next;
  }

  return ((void*)0);
}
