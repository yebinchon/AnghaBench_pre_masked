
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_6__ {int meterId; } ;
typedef TYPE_1__ STabObj ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;

int32_t FUNC_4(STabObj *VAR_1, char *VAR_2) {
  if (VAR_1 == ((void*)0) || (!FUNC_2(VAR_1))) {
    FUNC_0("Failed to drop tag name: %s from table: %s", VAR_2, VAR_1->meterId);
    return VAR_0;
  }

  int VAR_3 = FUNC_1(VAR_1, VAR_2);

  return FUNC_3(VAR_1, VAR_3);
}
