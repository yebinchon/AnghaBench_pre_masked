
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_13__ {int bytes; } ;
struct TYPE_12__ {int numOfTags; int numOfColumns; int isDirty; int meterId; scalar_t__ pTagData; scalar_t__ schema; } ;
typedef TYPE_1__ STabObj ;
typedef TYPE_2__ SSchema ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,char const*,int ) ;
 int FUNC_6 (char*,int ,int) ;
 int VAR_4 ;
 TYPE_1__* FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,char*,int,int*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_12 (int ,char*,int,int) ;
 int FUNC_13 (char*) ;

int32_t FUNC_14(STabObj *VAR_5, int VAR_6, const char *VAR_7) {
  int VAR_8 = 0;
  if (VAR_5 == ((void*)0) || VAR_7 == ((void*)0) || (!FUNC_10(VAR_5))) return VAR_0;

  STabObj *VAR_9 = FUNC_7(VAR_5->pTagData);
  FUNC_1(VAR_9 != ((void*)0));

  if (VAR_6 < 0 || VAR_6 > VAR_9->numOfTags) return VAR_0;

  SSchema *VAR_10 = (SSchema *)(VAR_9->schema + (VAR_9->numOfColumns + VAR_6) * sizeof(SSchema));

  if (VAR_6 == 0) {
    VAR_5->isDirty = 1;
    FUNC_11(VAR_9, VAR_5);
  }
  FUNC_5(VAR_5->pTagData + FUNC_8(VAR_9, VAR_6) + VAR_3, VAR_7, VAR_10->bytes);
  if (VAR_6 == 0) {
    FUNC_0(VAR_9, VAR_5);
  }


  int VAR_11 = sizeof(STabObj) + VAR_2 + 1;
  char *VAR_12 = (char *)FUNC_4(VAR_11);
  if (VAR_12 == ((void*)0)) {
    FUNC_2("failed to allocate message memory while modify tag value");
    return VAR_0;
  }
  FUNC_6(VAR_12, 0, VAR_11);

  FUNC_9(VAR_5, VAR_12, VAR_11, &VAR_8);

  int32_t VAR_13 = FUNC_12(VAR_4, VAR_12, VAR_8, 1);
  FUNC_13(VAR_12);

  if (VAR_5->isDirty) VAR_5->isDirty = 0;

  if (VAR_13 < 0) {
    FUNC_2("Failed to modify tag column %d of table %s", VAR_6, VAR_5->meterId);
    return VAR_0;
  }

  FUNC_3("Succeed to modify tag column %d of table %s", VAR_6, VAR_5->meterId);
  return VAR_1;
}
