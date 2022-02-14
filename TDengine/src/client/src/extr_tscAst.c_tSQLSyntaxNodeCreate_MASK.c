
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tVariant ;
struct TYPE_10__ {int colId; int nodeType; int * pVal; struct SSchema* pSchema; } ;
typedef TYPE_1__ tSQLSyntaxNode ;
struct SSchema {int colId; int name; int bytes; int type; } ;
typedef size_t int32_t ;
typedef int int16_t ;
struct TYPE_12__ {scalar_t__ type; size_t n; int z; } ;
struct TYPE_11__ {scalar_t__ colId; int name; } ;
typedef TYPE_2__ SSchema ;
typedef TYPE_3__ SSQLToken ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* FUNC_0 (int,size_t) ;
 int FUNC_1 (struct SSchema*,TYPE_2__*,int) ;
 int FUNC_2 (int ,int ) ;
 size_t FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,size_t) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static tSQLSyntaxNode *FUNC_7(SSchema *VAR_12, int32_t VAR_13, SSQLToken *VAR_14) {

  if (VAR_14->type == VAR_4 || (VAR_14->type != VAR_3 && VAR_14->type != VAR_1 && VAR_14->type != VAR_2 &&
                                VAR_14->type != VAR_6 && VAR_14->type != VAR_5 && VAR_14->type != VAR_0)) {
    return ((void*)0);
  }

  int32_t VAR_15 = 0;
  size_t VAR_16 = sizeof(tSQLSyntaxNode);
  tSQLSyntaxNode *VAR_17 = ((void*)0);

  if (VAR_14->type == VAR_2 || VAR_14->type == VAR_6) {
    if (VAR_14->type == VAR_2) {
      do {
        size_t VAR_18 = FUNC_3(VAR_12[VAR_15].name);
        if (FUNC_4(VAR_14->z, VAR_12[VAR_15].name, VAR_14->n) == 0 && VAR_14->n == VAR_18) break;
      } while (++VAR_15 < VAR_13);

      if (VAR_15 == VAR_13) {
        return ((void*)0);
      }
    }

    VAR_16 += sizeof(SSchema);

    VAR_17 = FUNC_0(1, VAR_16);
    VAR_17->pSchema = (struct SSchema *)((char *)VAR_17 + sizeof(tSQLSyntaxNode));
    VAR_17->nodeType = VAR_9;

    if (VAR_14->type == VAR_2) {
      VAR_17->colId = (int16_t)VAR_12[VAR_15].colId;
      FUNC_1(VAR_17->pSchema, &VAR_12[VAR_15], sizeof(SSchema));
    } else {
      VAR_17->colId = -1;
      VAR_17->pSchema->type = VAR_7;
      VAR_17->pSchema->bytes = VAR_8;
      FUNC_2(VAR_17->pSchema->name, VAR_11);
      VAR_17->pSchema->colId = -1;
    }

  } else {
    VAR_16 += sizeof(tVariant);
    VAR_17 = FUNC_0(1, VAR_16);
    VAR_17->pVal = (tVariant *)((char *)VAR_17 + sizeof(tSQLSyntaxNode));

    FUNC_6(VAR_14->type);
    FUNC_5(VAR_17->pVal, VAR_14);
    VAR_17->nodeType = VAR_10;
    VAR_17->colId = -1;
  }

  return VAR_17;
}
