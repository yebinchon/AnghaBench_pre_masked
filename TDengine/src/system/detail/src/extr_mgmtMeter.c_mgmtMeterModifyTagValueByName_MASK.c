
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_7__ {int pTagData; } ;
typedef TYPE_1__ STabObj ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,char*) ;

int32_t FUNC_4(STabObj *VAR_2, char *VAR_3, char *VAR_4) {
  if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || (!FUNC_2(VAR_2)))
    return VAR_1;

  STabObj *VAR_5 = FUNC_1(VAR_2->pTagData);
  if (VAR_5 == ((void*)0)) return VAR_0;

  int VAR_6 = FUNC_0(VAR_5, VAR_3);
  if (VAR_6 < 0) return VAR_0;

  return FUNC_3(VAR_2, VAR_6, VAR_4);
}
