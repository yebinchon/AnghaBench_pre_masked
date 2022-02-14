
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_6__ {int meterId; } ;
typedef TYPE_1__ STabObj ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char const*,char const*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,char const*) ;

int32_t FUNC_4(STabObj *VAR_2, const char *VAR_3, const char *VAR_4) {
  if (VAR_2 == ((void*)0) || (!FUNC_2(VAR_2))) return VAR_0;

  int VAR_5 = FUNC_1(VAR_2, VAR_3);
  if (VAR_5 < 0) {

    FUNC_0("Failed to modify table %s tag column, oname: %s, nname: %s", VAR_2->meterId, VAR_3, VAR_4);
    return VAR_1;
  }

  return FUNC_3(VAR_2, VAR_5, VAR_4);
}
