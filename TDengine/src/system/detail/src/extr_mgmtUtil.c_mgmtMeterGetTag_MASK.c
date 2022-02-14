
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_6__ {char* pTagData; scalar_t__ numOfColumns; scalar_t__ schema; } ;
typedef TYPE_1__ STabObj ;
typedef int SSchema ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;

char* FUNC_4(STabObj* VAR_1, int32_t VAR_2, SSchema* VAR_3) {
  if (!FUNC_3(VAR_1)) {
    return ((void*)0);
  }

  STabObj* VAR_4 = FUNC_1(VAR_1->pTagData);
  int32_t VAR_5 = FUNC_2(VAR_4, VAR_2) + VAR_0;
  FUNC_0(VAR_5 > 0);

  if (VAR_3 != ((void*)0)) {
    *VAR_3 = ((SSchema*)VAR_4->schema)[VAR_4->numOfColumns + VAR_2];
  }

  return (VAR_1->pTagData + VAR_5);
}
