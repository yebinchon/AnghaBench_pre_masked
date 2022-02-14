
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_12__ {int cols; scalar_t__ data; int type; int meterId; } ;
struct TYPE_11__ {int numOfTags; int numOfColumns; int meterId; scalar_t__ schema; } ;
struct TYPE_10__ {int col; int schema; scalar_t__ pos; } ;
typedef TYPE_1__ SchemaUnit ;
typedef TYPE_2__ STabObj ;
typedef int SSchema ;
typedef TYPE_3__ SMeterBatchUpdateMsg ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,int,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ,TYPE_3__*,int) ;
 int FUNC_8 (TYPE_3__*) ;

int32_t FUNC_9(STabObj *VAR_5, int VAR_6) {
  if (VAR_5 == ((void*)0) || (!FUNC_6(VAR_5)) || VAR_6 <= 0 || VAR_6 >= VAR_5->numOfTags) return VAR_1;


  uint32_t VAR_7 = sizeof(SMeterBatchUpdateMsg) + sizeof(SchemaUnit);
  SMeterBatchUpdateMsg *VAR_8 = (SMeterBatchUpdateMsg *)FUNC_2(VAR_7);
  FUNC_4(VAR_8, 0, VAR_7);

  FUNC_3(VAR_8->meterId, VAR_5->meterId, VAR_3);
  VAR_8->type = VAR_0;
  VAR_8->cols = 1;

  ((SchemaUnit *)(VAR_8->data))->col = VAR_6;
  ((SchemaUnit *)(VAR_8->data))->pos = FUNC_5(VAR_5, VAR_6) + VAR_3;
  ((SchemaUnit *)(VAR_8->data))->schema = *(SSchema *)(VAR_5->schema + sizeof(SSchema) * (VAR_5->numOfColumns + VAR_6));

  int32_t VAR_9 = FUNC_7(VAR_4, VAR_8, VAR_7);
  FUNC_8(VAR_8);

  if (VAR_9 < 0) {
    FUNC_0("Failed to drop tag column: %d from table: %s", VAR_6, VAR_5->meterId);
    return VAR_1;
  }

  FUNC_1("Succeed to drop tag column: %d from table: %s", VAR_6, VAR_5->meterId);
  return VAR_2;
}
