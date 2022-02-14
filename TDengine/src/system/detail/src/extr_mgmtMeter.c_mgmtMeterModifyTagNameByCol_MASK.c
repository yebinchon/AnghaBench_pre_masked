
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_8__ {int name; } ;
struct TYPE_7__ {scalar_t__ numOfTags; scalar_t__ numOfColumns; int meterId; scalar_t__ schema; } ;
typedef TYPE_1__ STabObj ;
typedef TYPE_2__ SSchema ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (TYPE_1__*,char const*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,char*,int,int*) ;
 scalar_t__ FUNC_8 (int ,char*,int,int) ;
 scalar_t__ FUNC_9 (char const*) ;
 int FUNC_10 (int ,char const*,scalar_t__) ;
 int FUNC_11 (char*) ;

int32_t FUNC_12(STabObj *VAR_5, uint32_t VAR_6, const char *VAR_7) {
  int VAR_8 = 0;
  FUNC_0(VAR_6 >= 0);

  uint32_t VAR_9 = FUNC_9(VAR_7);

  if (VAR_5 == ((void*)0) || (!FUNC_6(VAR_5)) || VAR_6 >= VAR_5->numOfTags || VAR_9 >= VAR_2 ||
      FUNC_5(VAR_5, VAR_7) >= 0)
    return VAR_0;


  SSchema *VAR_10 = (SSchema *)(VAR_5->schema + (VAR_5->numOfColumns + VAR_6) * sizeof(SSchema));
  FUNC_10(VAR_10->name, VAR_7, VAR_2);


  int VAR_11 = 1 + sizeof(STabObj) + VAR_3;
  char *VAR_12 = (char *)FUNC_3(VAR_11);
  if (VAR_12 == ((void*)0)) return VAR_0;
  FUNC_4(VAR_12, 0, VAR_11);

  FUNC_7(VAR_5, VAR_12, VAR_11, &VAR_8);

  int32_t VAR_13 = FUNC_8(VAR_4, VAR_12, VAR_8, 1);
  FUNC_11(VAR_12);

  if (VAR_13 < 0) {
    FUNC_1("Failed to modify table %s tag column", VAR_5->meterId);
    return VAR_0;
  }

  FUNC_2("Succeed to modify table %s tag column", VAR_5->meterId);
  return VAR_1;
}
