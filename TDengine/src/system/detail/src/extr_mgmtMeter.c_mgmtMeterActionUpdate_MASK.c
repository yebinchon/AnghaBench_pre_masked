
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ isDirty; int schema; int pTagData; } ;
typedef TYPE_1__ STabObj ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,int,int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;

void *FUNC_4(void *VAR_0, char *VAR_1, int VAR_2, int *VAR_3) {
  STabObj *VAR_4 = ((void*)0);
  STabObj *VAR_5 = ((void*)0);

  VAR_4 = (STabObj *)VAR_0;
  STabObj *VAR_6 = (STabObj *)VAR_1;

  if (VAR_6->isDirty) {
    VAR_5 = FUNC_1(VAR_4->pTagData);
    FUNC_3(VAR_5, VAR_4);
  }
  FUNC_2(VAR_4, VAR_1, VAR_2, ((void*)0));
  VAR_4->pTagData = VAR_4->schema;
  if (VAR_6->isDirty) {
    FUNC_0(VAR_5, VAR_4);
    VAR_4->isDirty = 0;
  }

  return ((void*)0);
}
