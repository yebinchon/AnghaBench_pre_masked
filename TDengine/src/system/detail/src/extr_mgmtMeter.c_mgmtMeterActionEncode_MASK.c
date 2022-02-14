
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* updateEnd; int schemaSize; struct TYPE_3__* schema; } ;
typedef TYPE_1__ STabObj ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,TYPE_1__*,int) ;

void *FUNC_2(void *VAR_0, char *VAR_1, int VAR_2, int *VAR_3) {
  FUNC_0(VAR_0 != ((void*)0) && VAR_1 != ((void*)0));

  STabObj *VAR_4 = (STabObj *)VAR_0;
  int VAR_5 = VAR_4->updateEnd - (char *)VAR_4;

  if (VAR_2 < VAR_5 + VAR_4->schemaSize + 1) {
    *VAR_3 = -1;
    return ((void*)0);
  }

  FUNC_1(VAR_1, VAR_4, VAR_5);
  FUNC_1(VAR_1 + VAR_5, VAR_4->schema, VAR_4->schemaSize);

  *VAR_3 = VAR_5 + VAR_4->schemaSize;

  return ((void*)0);
}
