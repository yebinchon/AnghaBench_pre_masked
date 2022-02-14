
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ schema; int pTagData; } ;
typedef TYPE_1__ STabObj ;
typedef int SSchema ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

SSchema *FUNC_3(STabObj *VAR_0) {
  if (VAR_0 == ((void*)0)) {
    return ((void*)0);
  }

  if (!FUNC_2(VAR_0)) {
    return (SSchema *)VAR_0->schema;
  }

  STabObj *VAR_1 = FUNC_1(VAR_0->pTagData);
  FUNC_0(VAR_1 != ((void*)0));

  return (SSchema *)VAR_1->schema;
}
