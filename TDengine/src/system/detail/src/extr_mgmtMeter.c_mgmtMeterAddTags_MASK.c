
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_16__ {int cols; int data; int type; int meterId; } ;
struct TYPE_15__ {int name; } ;
struct TYPE_14__ {scalar_t__ numOfTags; TYPE_2__* meterId; } ;
typedef TYPE_1__ STabObj ;
typedef TYPE_2__ SSchema ;
typedef TYPE_3__ SMeterBatchUpdateMsg ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ,TYPE_2__*) ;
 int FUNC_1 (char*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,TYPE_2__*,int) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ,TYPE_3__*,int) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_3__*) ;

int32_t FUNC_10(STabObj *VAR_7, SSchema VAR_8[], int VAR_9) {
  if (VAR_7 == ((void*)0) || (!FUNC_6(VAR_7))) return VAR_2;

  if (VAR_7->numOfTags + VAR_9 > VAR_4) return VAR_1;


  for (int VAR_10 = 1; VAR_10 < VAR_9; VAR_10++) {
    for (int VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
      if (FUNC_8(VAR_8[VAR_10].name, VAR_8[VAR_11].name) == 0) {
        return VAR_1;
      }
    }
  }

  for (int VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
    if (FUNC_5(VAR_7, VAR_8[VAR_12].name) >= 0) {
      return VAR_1;
    }
  }

  uint32_t VAR_13 = sizeof(SMeterBatchUpdateMsg) + sizeof(SSchema) * VAR_9;
  SMeterBatchUpdateMsg *VAR_14 = (SMeterBatchUpdateMsg *)FUNC_2(VAR_13);
  FUNC_4(VAR_14, 0, VAR_13);

  FUNC_3(VAR_14->meterId, VAR_7->meterId, VAR_5);
  VAR_14->type = VAR_0;
  VAR_14->cols = VAR_9;
  FUNC_3(VAR_14->data, VAR_8, sizeof(SSchema) * VAR_9);

  int32_t VAR_15 = FUNC_7(VAR_6, VAR_14, VAR_13);
  FUNC_9(VAR_14);

  if (VAR_15 < 0) {
    FUNC_0("Failed to add tag column %s to table %s", VAR_8[0].name, VAR_7->meterId);
    return VAR_1;
  }

  FUNC_1("Succeed to add tag column %s to table %s", VAR_8[0].name, VAR_7->meterId);
  return VAR_3;
}
